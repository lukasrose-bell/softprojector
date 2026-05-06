# SoftProjector — Project Knowledge & Codebase Reference

## Overview

SoftProjector is an **open-source church projection application** written in **C++ with Qt**. It projects Bible verses, song lyrics, announcements, picture slideshows, and videos onto secondary displays for use during church services. Licensed under **GPLv3**, originally authored by Vladislav Kobzar (2017).

Current version: **2.2**

---

## Target Deployment

| Property       | Value                            |
|----------------|----------------------------------|
| OS             | Windows 10, 64-bit (x64)        |
| CPU            | 11th Gen Intel                   |
| Build Tool     | `windeployqt`                    |
| Database Dir   | `%ProgramData%\SoftProjector\`   |
| Database File  | `spData.sqlite`                  |

---

## Technology Stack

| Layer          | Technology                                    |
|----------------|-----------------------------------------------|
| Language       | C++ (C++11/14)                                |
| Framework      | Qt (Widgets + QML Quick)                      |
| Build System   | qmake (`.pro` file)                           |
| Database       | SQLite via `QSqlDatabase` / `QSQLITE` driver  |
| Display Engine | QML (`QQuickView`) with `QMediaPlayer`        |
| Theming        | Dark theme via Windows registry + INI palette  |
| Translations   | Qt Linguist (`.ts` / `.qm` files)             |

### Qt Modules Used

`core`, `gui`, `widgets`, `network`, `sql`, `qml`, `quick`, `printsupport`, `multimedia`, `multimediawidgets`

---

## Project Structure

```
softprojector/
├── src/
│   ├── softProjector.pro      # qmake project file
│   ├── softprojector.qrc      # Qt resource file (icons, QML)
│   ├── softprojector.rc       # Windows resource file (app icon)
│   ├── headers/               # .hpp header files (~44 files)
│   ├── sources/               # .cpp source files (~45 files)
│   ├── ui/                    # .ui Qt Designer form files (~29 files)
│   ├── qml/                   # QML files (DisplayArea.qml)
│   ├── icons/                 # PNG icon assets (100+ files)
│   └── translations/          # .ts/.qm translation files (5 languages)
├── 3rdparty/
│   ├── headers/               # QMediaPlaylist, QPlaylistFileParser
│   └── sources/               # Corresponding implementations
├── help/                      # HTML help pages (en, de, ru)
├── docs/                      # Documentation directory
└── README.md
```

---

## Architecture

### Pattern: Model-View-Controller (MVC)

- **Models**: `SongsModel`, `AnnounceModel`, `BiblesModel`, `SongbooksModel`, `ThemeModel` (subclass `QAbstractTableModel`)
- **Views**: Widget classes (`SongWidget`, `BibleWidget`, `AnnounceWidget`, etc.) with `.ui` forms
- **Controller**: `SoftProjector` (main window) orchestrates all signals/slots between widgets and the projection display

### Application Lifecycle

1. `main.cpp` → creates `QApplication`, connects to SQLite database, applies dark theme (Windows), shows splash screen
2. `SoftProjector` main window loads settings, initializes all widgets and projection screens
3. Widgets emit signals → `SoftProjector` routes to `ProjectorDisplayScreen` instances

---

## Core Classes

### Main Window — `SoftProjector` (`QMainWindow`)

- **Files**: [src/headers/softprojector.hpp](../src/headers/softprojector.hpp), [src/sources/softprojector.cpp](../src/sources/softprojector.cpp)
- Central orchestrator; owns all widget instances and up to 4 `ProjectorDisplayScreen` objects
- Key members:
  - `Song current_song`, `Verse current_verse`, `Announcement currentAnnounce`
  - `Theme theme`, `Settings mySettings`
  - `QList<Schedule> schedule` — presentation schedule/playlist
  - `bool showing` — projector active state
  - `PresentationType pType` — enum: `BIBLE`, `SONG`, `ANNOUNCEMENT`, `PICTURE`, `VIDEO`
- Manages: schedule list, keyboard shortcuts, language switching, print preview

### Display System — `ProjectorDisplayScreen` (`QWidget`)

- **Files**: [src/headers/projectordisplayscreen.hpp](../src/headers/projectordisplayscreen.hpp)
- Renders content to a secondary screen using **QML** (`QQuickView` + `DisplayArea.qml`)
- Uses custom `SpImageProvider` (QQuickImageProvider) + `ImageGenerator` for pixmap rendering
- Double-buffered rendering: `backImSwitch1`/`backImSwitch2`, `textImSwitch1`/`textImSwitch2`
- Supports transitions: None, Fade, Fade Out, Move (Right/Left/Up/Down)
- Key render slots:
  - `renderBibleText(Verse, BibleSettings&)`
  - `renderSongText(Stanza, SongSettings&)`
  - `renderAnnounceText(AnnounceSlide, TextSettings&)`
  - `renderSlideShow(QPixmap, SlideShowSettings&)`
  - `renderVideo(VideoInfo)` — video playback via embedded QML `MediaPlayer`

### Image Generator — `ImageGenerator`

- **Files**: [src/headers/imagegenerator.hpp](../src/headers/imagegenerator.hpp)
- Renders text + formatting to `QPixmap` images for the projection display
- Applies: shadow effects, blur shadow, dynamic background color under text, text alignment
- Methods for each content type: `generateBibleImage()`, `generateSongImage()`, `generateAnnounceImage()`

### QML Display — `DisplayArea.qml`

- **File**: [src/qml/DisplayArea.qml](../src/qml/DisplayArea.qml)
- Rectangle with `Image` elements for animated transitions between slides
- Embedded `MediaPlayer` + `VideoOutput` for video playback
- Signals: `exitClicked()`, `nextClicked()`, `prevClicked()`

---

## Data Models

### Song System

| Class | Purpose |
|-------|---------|
| `Song` | Full song record: text, formatting, background, metadata |
| `Stanza` | Single displayable verse/section with all styling |
| `SongsModel` (`QAbstractTableModel`) | Table model for song list views |
| `SongProxyModel` (`QSortFilterProxyModel`) | Filtering by title/songbook/category |
| `SongDatabase` | Direct DB operations: `addSongbook()`, `getSong()`, `deleteSong()` |
| `SongCounter` | Tracks song usage statistics (count, last date) |

- Song text format: stanzas delimited by `##` with numbered/chorus markers in brackets
- `Highlight` class provides syntax highlighting for the song text editor

### Bible System

| Class | Purpose |
|-------|---------|
| `Bible` | Bible data manager: loads versions, searches text, retrieves verses |
| `BibleVerse` | Single verse record: `verseId`, `book`, `chapter`, `verseNumber`, `verseText` |
| `Verse` | Display-ready verse with primary/secondary/tertiary text + captions |
| `BibleSearch` | Search result with display text |
| `BibleHistory` | Viewed passage history tracker |

- Supports up to 3 simultaneous Bible versions (primary, secondary, trinary)
- Supports right-to-left text (for Hebrew/Arabic Bibles)
- `BibleVersionSettings` stores per-display version selections + color/font overrides

### Announcement System

| Class | Purpose |
|-------|---------|
| `Announcement` | Announcement record with auto-advance, looping, per-slide timing |
| `AnnounceSlide` | Individual slide content + formatting |
| `AnnounceModel` / `AnnounceProxyModel` | List model with filtering |

### Other Data Models

| Class | Purpose |
|-------|---------|
| `Schedule` | Presentation playlist item (wraps Song, Bible, SlideShow, Video, or Announcement) |
| `SlideShow` / `SlideShowItem` | Picture slideshow with ordered slides (images stored as BLOBs) |
| `VideoInfo` | Video file reference: path (QUrl), filename, aspect ratio |
| `Theme` | Contains 4 independent setting groups per content type per display |

---

## Widget Classes (UI)

| Widget | File | Purpose |
|--------|------|---------|
| `SongWidget` | songwidget.hpp/cpp | Song browsing, search, filtering, preview, display |
| `BibleWidget` | biblewidget.hpp/cpp | Book/chapter/verse selection, search, history, multi-version |
| `AnnounceWidget` | announcewidget.hpp/cpp | Announcement creation, editing, display |
| `PictureWidget` | picturewidget.hpp/cpp | Slideshow management and display |
| `MediaWidget` | mediawidget.hpp/cpp | Video/audio player with library, drag-drop |
| `EditWidget` | editwidget.hpp/cpp | Song text editor with syntax highlighting |
| `MediaControl` | mediacontrol.hpp/cpp | Video playback controls (play/pause/stop, volume, seek) |

---

## Settings & Configuration

### `Settings` Class

All settings are stored in the SQLite `Settings` table as key-value pairs (`type TEXT`, `sets TEXT`).

**Key Enums**:
- `HorizontalAlignment`: `A_TOP`, `A_MIDDLE`, `A_BOTTOM`
- `VerticalAlignment`: `A_LEFT`, `A_CENTER`, `A_RIGHT`
- `TransitionType`: `TR_NONE`, `TR_FADE`, `TR_FADE_OUT`, `TR_MOVE_RIGHT/LEFT/UP/DOWN`
- `EffectType`: `E_NONE`, `E_SHADOW`, `E_BLURRED_SHADOW`
- `BackgroundType`: `B_NONE`, `B_SOLID_COLOR`, `B_PICTURE`, `B_VIDEO`, `B_VIDEO_PLAYBACK`
- `SongEndingType`: `SE_STAR`, `SE_DASH`, `SE_CIRCLE`, `SE_SMALL_DOT`, `SE_BIG_DOT`, `SE_SMALL_BOX`, `SE_BIG_BOX`, `SE_COPYRIGHT`

**`TextSettingsBase`**: Common text rendering settings (font, color, shadow color, alignment, effects, background)

**`GeneralSettings`**: Display screen selections (up to 4 screens), display-on-startup, always-on-top, language, theme ID

**`BibleVersionSettings`**: Per-display Bible version + color/font overrides

### `Theme` Class

- Each theme stores 4 independent setting groups (one per display) for each content type:
  - `TextSettings passive/passive2/passive3/passive4`
  - `TextSettings song/song2/song3/song4`
  - `BibleSettings bible/bible2/bible3/bible4`
  - `TextSettings announce/announce2/announce3/announce4`
- Themes are stored in `Themes`, `ThemeSong`, `ThemeBible`, `ThemeAnnounce`, `ThemePassive` tables

### `SettingsDialog`

- Tabbed interface with sub-setting widgets:
  - `GeneralSettingWidget`, `PassiveSettingWidget`, `BibleSettingWidget`
  - `SongSettingWidget`, `AnnouncementSettingWidget`, `PictureSettingWidget`

---

## Database Schema

**Engine**: SQLite (`spData.sqlite`), version pragma = `2`

| Table | Key Columns | Purpose |
|-------|-------------|---------|
| `Songs` | id, songbook_id, number, title, category, song_text, count, date | Song library |
| `Songbooks` | id, name, info | Song collection groupings |
| `BibleVersions` | id, bible_name, abbreviation, right_to_left | Available translations |
| `BibleBooks` | bible_id, id, book_name, chapter_count | Book names per version |
| `BibleVerse` | verse_id, bible_id, book, chapter, verse, verse_text | Verse text (indexed) |
| `Announcements` | id, title, text, usePrivate, useAuto, loop, slideTime | Announcements |
| `SlideShows` | id, name, info | Slideshow definitions |
| `Slides` | id, ss_id, p_order, name, path, pix (BLOB) | Slideshow images |
| `Themes` | id, name, comment | Theme definitions |
| `ThemeSong` | theme_id, disp, text_font, text_color, ... | Song display settings |
| `ThemeBible` | theme_id, disp, text_font, caption_font, ... | Bible display settings |
| `ThemeAnnounce` | theme_id, disp, text_font, text_color, ... | Announce display settings |
| `ThemePassive` | theme_id, disp, use_background, background (BLOB) | Passive/blank screen |
| `Media` | long_path, short_path | Video file paths |
| `Settings` | type, sets | General app settings (key-value) |

### Database Location (Windows)

- **Installed** (`C:\Program Files\...`): `%ProgramData%\SoftProjector\spData.sqlite`
- **Portable/Dev**: Same directory as the executable

---

## Data Management & Import/Export

### `ManageDataDialog`

- Import/export of songs, Bibles, themes, and songbooks
- Network download via `QNetworkAccessManager` for module libraries
- Sub-models: `BiblesModel`, `SongbooksModel`, `ThemeModel`
- Operations: `addSongbook()`, `deleteSongbook()`, `importSongbook()`, `exportSongbook()`, `importBible()`, `exportBible()`, etc.

### `ModuleDownloadDialog` / `ModuleProgressDialog`

- Download Bible modules and songbooks from remote servers
- Progress tracking for large imports

---

## Dark Theme (Windows)

On Windows, the app checks the Windows registry key:
`HKEY_CURRENT_USER\Software\Microsoft\Windows\CurrentVersion\Themes\Personalize`

If dark mode is active (`SoftProjectorUseLightTheme == 0`):
- Reads/creates `DarkTheme.ini` in the app directory
- Applies a custom `QPalette` with `Fusion` style
- Colors are configurable via the INI file

---

## Internationalization

| Language   | Code | Files |
|------------|------|-------|
| Czech      | cs   | `softpro_cs.ts/qm` |
| German     | de   | `softpro_de.ts/qm` |
| Armenian   | hy   | `softpro_hy.ts/qm` |
| Russian    | ru   | `softpro_ru.ts/qm` |
| Ukrainian  | ua   | `softpro_ua.ts/qm` |

Language switching is done at runtime via `QTranslator` + `retranslateUis()`.

---

## 3rd Party Code

Located in `3rdparty/`:
- `QMediaPlaylist` — playlist management (removed from Qt 6, vendored here)
- `QPlaylistFileParser` — M3U/M3U8/PLS playlist format parsing

This suggests the codebase may be targeting **Qt 6** (since `QMediaPlaylist` was removed in Qt 6 and re-implemented locally).

---

## Build & Deployment

### Build Steps

1. Open `src/softProjector.pro` in Qt Creator (or compatible IDE)
2. Configure for the target kit (MSVC 64-bit for Windows 10 x64)
3. Build the project → produces `SoftProjector.exe`
4. Deploy with `windeployqt`:

```powershell
.\windeployqt.exe --qmldir "<ProjectDirectory>\src\qml" "<PathToExe>\SoftProjector.exe"
```

### Build Output Directories (Windows)

```
src/win32_build/
├── bin/     # Output executable
├── obj/     # Object files
├── moc/     # Meta-object compiler output
├── ui/      # UI compiler output
└── rcc/     # Resource compiler output
```

---

## Key Signal/Slot Flow

```
SongWidget::sendSong(Song, int)
    → SoftProjector (routes to all active displays)
        → ProjectorDisplayScreen::renderSongText(Stanza, SongSettings&)
            → ImageGenerator::generateSongImage()
                → SpImageProvider (pixmap to QML)
                    → DisplayArea.qml (renders with transition)
```

The same pattern applies for Bible, Announcements, Slideshows, and Video. `SoftProjector` acts as the central router.

---

## Multi-Display Support

- Supports up to **4 independent projection screens** (`pds1`, `pds2`, `pds3`, `pds4`)
- Each screen can have its own theme settings (font, colors, background)
- Bible can show different translations on different screens
- Screen assignment configured in `GeneralSettings`

---

## Key Files for Common Changes

| Change | Files to Modify |
|--------|----------------|
| Add a new content type | `softprojector.hpp/cpp`, `projectordisplayscreen.hpp/cpp`, `imagegenerator.hpp/cpp`, new widget class |
| Modify song display | `song.hpp/cpp`, `songwidget.hpp/cpp`, `songsettingwidget.hpp/cpp`, `imagegenerator.cpp` |
| Modify Bible display | `bible.hpp/cpp`, `biblewidget.hpp/cpp`, `biblesettingwidget.hpp/cpp`, `imagegenerator.cpp` |
| Change DB schema | `main.cpp` (table creation), relevant model class |
| Add a new setting | `settings.hpp/cpp`, `settingsdialog.hpp/cpp`, relevant setting widget |
| Modify projection rendering | `imagegenerator.hpp/cpp`, `DisplayArea.qml` |
| Add a new UI form | Create `.ui` file, add to `.pro` FORMS, create widget class |
| Add translations | Modify `.ts` files, update `TRANSLATIONS` in `.pro` |
