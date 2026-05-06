# Copilot Instructions — SoftProjector

## Project Reference

Read [docs/project-knowledge.md](../docs/project-knowledge.md) for the full codebase reference including architecture, class hierarchy, database schema, signal/slot flow, and key files for common changes.

## Project Summary

SoftProjector is a **Qt/C++ church projection application** that displays Bible verses, song lyrics, announcements, picture slideshows, and videos on secondary screens during church services. It uses **SQLite** for data storage and **QML** for the projection display rendering.

## Target Platform

- **OS**: Windows 10, 64-bit (x64)
- **CPU**: 11th Gen Intel
- **Build**: MSVC 64-bit toolchain via Qt Creator + qmake
- **Deployment**: `windeployqt.exe --qmldir "<ProjectDir>\src\qml" "<ExePath>\SoftProjector.exe"`

## Language & Framework

- **Language**: C++ (use C++11/14 features consistent with the existing code)
- **Framework**: Qt (Widgets + QML Quick)
- **Qt Modules**: core, gui, widgets, network, sql, qml, quick, printsupport, multimedia, multimediawidgets
- **Build System**: qmake (`.pro` file at `src/softProjector.pro`)
- **Database**: SQLite via Qt SQL (`QSQLITE` driver)

## Code Conventions

- **Header files**: `.hpp` extension, located in `src/headers/`
- **Source files**: `.cpp` extension, located in `src/sources/`
- **UI forms**: `.ui` (Qt Designer XML), located in `src/ui/`
- **QML files**: Located in `src/qml/`
- **Icons/assets**: PNG format in `src/icons/`
- **Include style**: Relative paths with `../headers/` prefix (e.g., `#include "../headers/softprojector.hpp"`)
- **Naming**: Classes use PascalCase, methods use camelCase, member variables use snake_case or camelCase (mixed — follow existing pattern per file)
- **UI pattern**: One `.ui` form per widget class; signals/slots connect in constructors
- **Database access**: Direct `QSqlQuery` usage (no ORM); each model class manages its own SQL

## Architecture Rules

- `SoftProjector` (main window) is the central controller — all widget signals route through it to projection screens
- `ProjectorDisplayScreen` handles rendering via `ImageGenerator` → `SpImageProvider` → QML `DisplayArea.qml`
- Up to 4 independent display screens are supported; each can have its own theme settings
- All persistent data lives in `spData.sqlite` (version pragma = 2)
- Settings are stored as key-value pairs in the `Settings` table
- Theme settings are split across `ThemeSong`, `ThemeBible`, `ThemeAnnounce`, `ThemePassive` tables

## When Adding New Features

1. **New source files**: Add to both `SOURCES` and `HEADERS` lists in `src/softProjector.pro`
2. **New UI forms**: Add to `FORMS` in the `.pro` file
3. **New icons/resources**: Add to `src/softprojector.qrc`
4. **Database schema changes**: Modify table creation in `main.cpp` and bump `dbVer`
5. **New settings**: Add to `Settings` class, create a setting widget, wire into `SettingsDialog`
6. **New content types**: Create widget + model classes, add render method to `ImageGenerator` and `ProjectorDisplayScreen`, wire signals through `SoftProjector`

## Database

- **File**: `spData.sqlite`
- **Location** (Windows installed): `%ProgramData%\SoftProjector\`
- **Location** (portable/dev): Same directory as executable
- **Schema version**: Stored in `PRAGMA user_version` (currently `2`)
- **Key tables**: Songs, Songbooks, BibleVersions, BibleBooks, BibleVerse, Announcements, SlideShows, Slides, Themes, ThemeSong, ThemeBible, ThemeAnnounce, ThemePassive, Media, Settings

## Dark Theme (Windows)

- Reads Windows registry for dark mode preference
- Colors configurable via `DarkTheme.ini` in the app directory
- Uses Qt Fusion style with custom `QPalette`

## Internationalization

- 5 languages: Czech, German, Armenian, Russian, Ukrainian
- Translation files: `src/translations/softpro_*.ts` (source) and `.qm` (compiled)
- Language switch at runtime via `QTranslator`
- New translations: add `.ts` file to `TRANSLATIONS` in `.pro`, use `lupdate`/`lrelease`

## 3rd Party Code

- `3rdparty/` contains vendored `QMediaPlaylist` and `QPlaylistFileParser` (removed from Qt 6)
- Do not modify 3rd party code unless absolutely necessary

## Testing

- No automated test suite exists in this project
- Test changes manually by running the application and exercising the affected features
- Verify projection rendering on a secondary display when changing display-related code
