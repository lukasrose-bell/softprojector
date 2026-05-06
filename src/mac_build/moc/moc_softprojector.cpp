/****************************************************************************
** Meta object code from reading C++ file 'softprojector.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../headers/softprojector.hpp"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'softprojector.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN13SoftProjectorE_t {};
} // unnamed namespace

template <> constexpr inline auto SoftProjector::qt_create_metaobjectdata<qt_meta_tag_ZN13SoftProjectorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SoftProjector",
        "updateSetting",
        "",
        "GeneralSettings&",
        "g",
        "Theme&",
        "t",
        "SlideShowSettings&",
        "ssets",
        "BibleVersionSettings&",
        "bsets",
        "bsets2",
        "bsets3",
        "bsets4",
        "saveSettings",
        "positionDisplayWindow",
        "updateScreen",
        "setWaitCursor",
        "setArrowCursor",
        "setAppDataDir",
        "QDir",
        "d",
        "showDisplayScreen",
        "show",
        "applySetting",
        "s",
        "b1",
        "b2",
        "b3",
        "b4",
        "on_actionSong_Counter_triggered",
        "on_projectTab_currentChanged",
        "index",
        "updateEditActions",
        "on_actionNew_triggered",
        "on_actionEdit_triggered",
        "on_actionCopy_triggered",
        "on_actionDelete_triggered",
        "updateWindowText",
        "showBible",
        "showSong",
        "currentRow",
        "showAnnounce",
        "showPicture",
        "showVideo",
        "retranslateUis",
        "createLanguageActions",
        "switchLanguage",
        "QAction*",
        "action",
        "on_actionDonate_triggered",
        "on_action_Help_triggered",
        "on_actionManage_Database_triggered",
        "on_actionAbout_triggered",
        "on_listShow_doubleClicked",
        "QModelIndex",
        "on_actionSettings_triggered",
        "newSong",
        "copySong",
        "editSong",
        "deleteSong",
        "newSlideShow",
        "editSlideShow",
        "deleteSlideShow",
        "addMediaToLibrary",
        "removeMediaFromLibrary",
        "newAnnouncement",
        "editAnnouncement",
        "copyAnnouncement",
        "deleteAnnoucement",
        "on_actionShow_triggered",
        "on_actionHide_triggered",
        "on_listShow_currentRowChanged",
        "on_actionClose_triggered",
        "setSongList",
        "Song",
        "song",
        "row",
        "setAnnounceText",
        "Announcement",
        "announce",
        "setChapterList",
        "chapter_list",
        "caption",
        "QItemSelection",
        "selectedItems",
        "setPictureList",
        "QList<SlideShowItem>&",
        "image_list",
        "name",
        "setVideo",
        "VideoInfo&",
        "video",
        "playVideo",
        "pauseVideo",
        "stopVideo",
        "setVideoPosition",
        "position",
        "videoStopped",
        "on_listShow_itemSelectionChanged",
        "on_rbMultiVerse_toggled",
        "checked",
        "on_actionPrint_triggered",
        "on_actionPrintSchedule_triggered",
        "nextSlide",
        "prevSlide",
        "on_actionScheduleAdd_triggered",
        "on_actionScheduleRemove_triggered",
        "on_actionScheduleClear_triggered",
        "addToShcedule",
        "BibleHistory&",
        "b",
        "Song&",
        "SlideShow&",
        "v",
        "Announcement&",
        "a",
        "reloadShceduleList",
        "on_listWidgetSchedule_doubleClicked",
        "on_listWidgetSchedule_itemSelectionChanged",
        "on_actionMoveScheduleTop_triggered",
        "on_actionMoveScheduleUp_triggered",
        "on_actionMoveScheduleDown_triggered",
        "on_actionMoveScheduleBottom_triggered",
        "on_actionNewSchedule_triggered",
        "on_actionOpenSchedule_triggered",
        "on_actionSaveSchedule_triggered",
        "on_actionSaveScheduleAs_triggered",
        "on_actionCloseSchedule_triggered",
        "openSchedule",
        "saveSchedule",
        "overWrite",
        "saveScheduleNew",
        "QSqlQuery&",
        "q",
        "saveScheduleItemNew",
        "scid",
        "BibleHistory",
        "SlideShow",
        "VideoInfo",
        "saveScheduleUpdate",
        "saveScheduleItemUpdate",
        "openScheduleItem",
        "on_actionClear_triggered",
        "on_actionCloseDisplay_triggered",
        "updateCloseDisplayButtons",
        "isOn",
        "toggleTransliteration"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'updateSetting'
        QtMocHelpers::SlotData<void(GeneralSettings &, Theme &, SlideShowSettings &, BibleVersionSettings &, BibleVersionSettings &, BibleVersionSettings &, BibleVersionSettings &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 }, { 0x80000000 | 9, 10 },
            { 0x80000000 | 9, 11 }, { 0x80000000 | 9, 12 }, { 0x80000000 | 9, 13 },
        }}),
        // Slot 'saveSettings'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'positionDisplayWindow'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateScreen'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setWaitCursor'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setArrowCursor'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setAppDataDir'
        QtMocHelpers::SlotData<void(QDir)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 20, 21 },
        }}),
        // Slot 'showDisplayScreen'
        QtMocHelpers::SlotData<void(bool)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 23 },
        }}),
        // Slot 'applySetting'
        QtMocHelpers::SlotData<void(GeneralSettings &, Theme &, SlideShowSettings &, BibleVersionSettings &, BibleVersionSettings &, BibleVersionSettings &, BibleVersionSettings &)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 25 }, { 0x80000000 | 9, 26 },
            { 0x80000000 | 9, 27 }, { 0x80000000 | 9, 28 }, { 0x80000000 | 9, 29 },
        }}),
        // Slot 'on_actionSong_Counter_triggered'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_projectTab_currentChanged'
        QtMocHelpers::SlotData<void(int)>(31, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 32 },
        }}),
        // Slot 'updateEditActions'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNew_triggered'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionEdit_triggered'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCopy_triggered'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDelete_triggered'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateWindowText'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showBible'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showSong'
        QtMocHelpers::SlotData<void(int)>(40, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 41 },
        }}),
        // Slot 'showAnnounce'
        QtMocHelpers::SlotData<void(int)>(42, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 41 },
        }}),
        // Slot 'showPicture'
        QtMocHelpers::SlotData<void(int)>(43, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 41 },
        }}),
        // Slot 'showVideo'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'retranslateUis'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'createLanguageActions'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'switchLanguage'
        QtMocHelpers::SlotData<void(QAction *)>(47, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 48, 49 },
        }}),
        // Slot 'on_actionDonate_triggered'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_action_Help_triggered'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionManage_Database_triggered'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAbout_triggered'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_listShow_doubleClicked'
        QtMocHelpers::SlotData<void(QModelIndex)>(54, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 55, 32 },
        }}),
        // Slot 'on_actionSettings_triggered'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'newSong'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'copySong'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'editSong'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'deleteSong'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'newSlideShow'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'editSlideShow'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'deleteSlideShow'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'addMediaToLibrary'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'removeMediaFromLibrary'
        QtMocHelpers::SlotData<void()>(65, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'newAnnouncement'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'editAnnouncement'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'copyAnnouncement'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'deleteAnnoucement'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShow_triggered'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionHide_triggered'
        QtMocHelpers::SlotData<void()>(71, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_listShow_currentRowChanged'
        QtMocHelpers::SlotData<void(int)>(72, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 41 },
        }}),
        // Slot 'on_actionClose_triggered'
        QtMocHelpers::SlotData<void()>(73, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setSongList'
        QtMocHelpers::SlotData<void(Song, int)>(74, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 75, 76 }, { QMetaType::Int, 77 },
        }}),
        // Slot 'setAnnounceText'
        QtMocHelpers::SlotData<void(Announcement, int)>(78, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 79, 80 }, { QMetaType::Int, 77 },
        }}),
        // Slot 'setChapterList'
        QtMocHelpers::SlotData<void(QStringList, QString, QItemSelection)>(81, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QStringList, 82 }, { QMetaType::QString, 83 }, { 0x80000000 | 84, 85 },
        }}),
        // Slot 'setPictureList'
        QtMocHelpers::SlotData<void(QList<SlideShowItem> &, int, QString)>(86, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 87, 88 }, { QMetaType::Int, 77 }, { QMetaType::QString, 89 },
        }}),
        // Slot 'setVideo'
        QtMocHelpers::SlotData<void(VideoInfo &)>(90, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 91, 92 },
        }}),
        // Slot 'playVideo'
        QtMocHelpers::SlotData<void()>(93, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'pauseVideo'
        QtMocHelpers::SlotData<void()>(94, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'stopVideo'
        QtMocHelpers::SlotData<void()>(95, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setVideoPosition'
        QtMocHelpers::SlotData<void(qint64)>(96, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::LongLong, 97 },
        }}),
        // Slot 'videoStopped'
        QtMocHelpers::SlotData<void()>(98, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_listShow_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(99, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_rbMultiVerse_toggled'
        QtMocHelpers::SlotData<void(bool)>(100, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 101 },
        }}),
        // Slot 'on_actionPrint_triggered'
        QtMocHelpers::SlotData<void()>(102, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionPrintSchedule_triggered'
        QtMocHelpers::SlotData<void()>(103, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'nextSlide'
        QtMocHelpers::SlotData<void()>(104, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'prevSlide'
        QtMocHelpers::SlotData<void()>(105, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionScheduleAdd_triggered'
        QtMocHelpers::SlotData<void()>(106, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionScheduleRemove_triggered'
        QtMocHelpers::SlotData<void()>(107, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionScheduleClear_triggered'
        QtMocHelpers::SlotData<void()>(108, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'addToShcedule'
        QtMocHelpers::SlotData<void(BibleHistory &)>(109, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 110, 111 },
        }}),
        // Slot 'addToShcedule'
        QtMocHelpers::SlotData<void(Song &)>(109, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 112, 25 },
        }}),
        // Slot 'addToShcedule'
        QtMocHelpers::SlotData<void(SlideShow &)>(109, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 113, 25 },
        }}),
        // Slot 'addToShcedule'
        QtMocHelpers::SlotData<void(VideoInfo &)>(109, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 91, 114 },
        }}),
        // Slot 'addToShcedule'
        QtMocHelpers::SlotData<void(Announcement &)>(109, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 115, 116 },
        }}),
        // Slot 'reloadShceduleList'
        QtMocHelpers::SlotData<void()>(117, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_listWidgetSchedule_doubleClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(118, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 55, 32 },
        }}),
        // Slot 'on_listWidgetSchedule_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(119, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveScheduleTop_triggered'
        QtMocHelpers::SlotData<void()>(120, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveScheduleUp_triggered'
        QtMocHelpers::SlotData<void()>(121, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveScheduleDown_triggered'
        QtMocHelpers::SlotData<void()>(122, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveScheduleBottom_triggered'
        QtMocHelpers::SlotData<void()>(123, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNewSchedule_triggered'
        QtMocHelpers::SlotData<void()>(124, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionOpenSchedule_triggered'
        QtMocHelpers::SlotData<void()>(125, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSaveSchedule_triggered'
        QtMocHelpers::SlotData<void()>(126, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSaveScheduleAs_triggered'
        QtMocHelpers::SlotData<void()>(127, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCloseSchedule_triggered'
        QtMocHelpers::SlotData<void()>(128, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'openSchedule'
        QtMocHelpers::SlotData<void()>(129, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'saveSchedule'
        QtMocHelpers::SlotData<void(bool)>(130, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 131 },
        }}),
        // Slot 'saveScheduleNew'
        QtMocHelpers::SlotData<void(QSqlQuery &)>(132, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 133, 134 },
        }}),
        // Slot 'saveScheduleItemNew'
        QtMocHelpers::SlotData<void(QSqlQuery &, int, const BibleHistory &)>(135, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 133, 134 }, { QMetaType::Int, 136 }, { 0x80000000 | 137, 111 },
        }}),
        // Slot 'saveScheduleItemNew'
        QtMocHelpers::SlotData<void(QSqlQuery &, int, const Song &)>(135, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 133, 134 }, { QMetaType::Int, 136 }, { 0x80000000 | 75, 25 },
        }}),
        // Slot 'saveScheduleItemNew'
        QtMocHelpers::SlotData<void(QSqlQuery &, int, const SlideShow &)>(135, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 133, 134 }, { QMetaType::Int, 136 }, { 0x80000000 | 138, 25 },
        }}),
        // Slot 'saveScheduleItemNew'
        QtMocHelpers::SlotData<void(QSqlQuery &, int, const VideoInfo &)>(135, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 133, 134 }, { QMetaType::Int, 136 }, { 0x80000000 | 139, 114 },
        }}),
        // Slot 'saveScheduleItemNew'
        QtMocHelpers::SlotData<void(QSqlQuery &, int, const Announcement &)>(135, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 133, 134 }, { QMetaType::Int, 136 }, { 0x80000000 | 79, 116 },
        }}),
        // Slot 'saveScheduleUpdate'
        QtMocHelpers::SlotData<void(QSqlQuery &)>(140, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 133, 134 },
        }}),
        // Slot 'saveScheduleItemUpdate'
        QtMocHelpers::SlotData<void(QSqlQuery &, int, const BibleHistory &)>(141, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 133, 134 }, { QMetaType::Int, 136 }, { 0x80000000 | 137, 111 },
        }}),
        // Slot 'saveScheduleItemUpdate'
        QtMocHelpers::SlotData<void(QSqlQuery &, int, const Song &)>(141, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 133, 134 }, { QMetaType::Int, 136 }, { 0x80000000 | 75, 25 },
        }}),
        // Slot 'saveScheduleItemUpdate'
        QtMocHelpers::SlotData<void(QSqlQuery &, int, const SlideShow &)>(141, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 133, 134 }, { QMetaType::Int, 136 }, { 0x80000000 | 138, 25 },
        }}),
        // Slot 'saveScheduleItemUpdate'
        QtMocHelpers::SlotData<void(QSqlQuery &, int, const VideoInfo &)>(141, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 133, 134 }, { QMetaType::Int, 136 }, { 0x80000000 | 139, 114 },
        }}),
        // Slot 'saveScheduleItemUpdate'
        QtMocHelpers::SlotData<void(QSqlQuery &, int, const Announcement &)>(141, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 133, 134 }, { QMetaType::Int, 136 }, { 0x80000000 | 79, 116 },
        }}),
        // Slot 'openScheduleItem'
        QtMocHelpers::SlotData<void(QSqlQuery &, const int, BibleHistory &)>(142, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 133, 134 }, { QMetaType::Int, 136 }, { 0x80000000 | 110, 111 },
        }}),
        // Slot 'openScheduleItem'
        QtMocHelpers::SlotData<void(QSqlQuery &, const int, Song &)>(142, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 133, 134 }, { QMetaType::Int, 136 }, { 0x80000000 | 112, 25 },
        }}),
        // Slot 'openScheduleItem'
        QtMocHelpers::SlotData<void(QSqlQuery &, const int, SlideShow &)>(142, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 133, 134 }, { QMetaType::Int, 136 }, { 0x80000000 | 113, 25 },
        }}),
        // Slot 'openScheduleItem'
        QtMocHelpers::SlotData<void(QSqlQuery &, const int, VideoInfo &)>(142, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 133, 134 }, { QMetaType::Int, 136 }, { 0x80000000 | 91, 114 },
        }}),
        // Slot 'openScheduleItem'
        QtMocHelpers::SlotData<void(QSqlQuery &, const int, Announcement &)>(142, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 133, 134 }, { QMetaType::Int, 136 }, { 0x80000000 | 115, 116 },
        }}),
        // Slot 'on_actionClear_triggered'
        QtMocHelpers::SlotData<void()>(143, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCloseDisplay_triggered'
        QtMocHelpers::SlotData<void()>(144, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateCloseDisplayButtons'
        QtMocHelpers::SlotData<void(bool)>(145, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 146 },
        }}),
        // Slot 'toggleTransliteration'
        QtMocHelpers::SlotData<void(bool)>(147, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 101 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SoftProjector, qt_meta_tag_ZN13SoftProjectorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SoftProjector::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SoftProjectorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SoftProjectorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13SoftProjectorE_t>.metaTypes,
    nullptr
} };

void SoftProjector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SoftProjector *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->updateSetting((*reinterpret_cast<std::add_pointer_t<GeneralSettings&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Theme&>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<SlideShowSettings&>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[7]))); break;
        case 1: _t->saveSettings(); break;
        case 2: _t->positionDisplayWindow(); break;
        case 3: _t->updateScreen(); break;
        case 4: _t->setWaitCursor(); break;
        case 5: _t->setArrowCursor(); break;
        case 6: _t->setAppDataDir((*reinterpret_cast<std::add_pointer_t<QDir>>(_a[1]))); break;
        case 7: _t->showDisplayScreen((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->applySetting((*reinterpret_cast<std::add_pointer_t<GeneralSettings&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Theme&>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<SlideShowSettings&>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[7]))); break;
        case 9: _t->on_actionSong_Counter_triggered(); break;
        case 10: _t->on_projectTab_currentChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->updateEditActions(); break;
        case 12: _t->on_actionNew_triggered(); break;
        case 13: _t->on_actionEdit_triggered(); break;
        case 14: _t->on_actionCopy_triggered(); break;
        case 15: _t->on_actionDelete_triggered(); break;
        case 16: _t->updateWindowText(); break;
        case 17: _t->showBible(); break;
        case 18: _t->showSong((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->showAnnounce((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->showPicture((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->showVideo(); break;
        case 22: _t->retranslateUis(); break;
        case 23: _t->createLanguageActions(); break;
        case 24: _t->switchLanguage((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 25: _t->on_actionDonate_triggered(); break;
        case 26: _t->on_action_Help_triggered(); break;
        case 27: _t->on_actionManage_Database_triggered(); break;
        case 28: _t->on_actionAbout_triggered(); break;
        case 29: _t->on_listShow_doubleClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 30: _t->on_actionSettings_triggered(); break;
        case 31: _t->newSong(); break;
        case 32: _t->copySong(); break;
        case 33: _t->editSong(); break;
        case 34: _t->deleteSong(); break;
        case 35: _t->newSlideShow(); break;
        case 36: _t->editSlideShow(); break;
        case 37: _t->deleteSlideShow(); break;
        case 38: _t->addMediaToLibrary(); break;
        case 39: _t->removeMediaFromLibrary(); break;
        case 40: _t->newAnnouncement(); break;
        case 41: _t->editAnnouncement(); break;
        case 42: _t->copyAnnouncement(); break;
        case 43: _t->deleteAnnoucement(); break;
        case 44: _t->on_actionShow_triggered(); break;
        case 45: _t->on_actionHide_triggered(); break;
        case 46: _t->on_listShow_currentRowChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 47: _t->on_actionClose_triggered(); break;
        case 48: _t->setSongList((*reinterpret_cast<std::add_pointer_t<Song>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 49: _t->setAnnounceText((*reinterpret_cast<std::add_pointer_t<Announcement>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 50: _t->setChapterList((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QItemSelection>>(_a[3]))); break;
        case 51: _t->setPictureList((*reinterpret_cast<std::add_pointer_t<QList<SlideShowItem>&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 52: _t->setVideo((*reinterpret_cast<std::add_pointer_t<VideoInfo&>>(_a[1]))); break;
        case 53: _t->playVideo(); break;
        case 54: _t->pauseVideo(); break;
        case 55: _t->stopVideo(); break;
        case 56: _t->setVideoPosition((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 57: _t->videoStopped(); break;
        case 58: _t->on_listShow_itemSelectionChanged(); break;
        case 59: _t->on_rbMultiVerse_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 60: _t->on_actionPrint_triggered(); break;
        case 61: _t->on_actionPrintSchedule_triggered(); break;
        case 62: _t->nextSlide(); break;
        case 63: _t->prevSlide(); break;
        case 64: _t->on_actionScheduleAdd_triggered(); break;
        case 65: _t->on_actionScheduleRemove_triggered(); break;
        case 66: _t->on_actionScheduleClear_triggered(); break;
        case 67: _t->addToShcedule((*reinterpret_cast<std::add_pointer_t<BibleHistory&>>(_a[1]))); break;
        case 68: _t->addToShcedule((*reinterpret_cast<std::add_pointer_t<Song&>>(_a[1]))); break;
        case 69: _t->addToShcedule((*reinterpret_cast<std::add_pointer_t<SlideShow&>>(_a[1]))); break;
        case 70: _t->addToShcedule((*reinterpret_cast<std::add_pointer_t<VideoInfo&>>(_a[1]))); break;
        case 71: _t->addToShcedule((*reinterpret_cast<std::add_pointer_t<Announcement&>>(_a[1]))); break;
        case 72: _t->reloadShceduleList(); break;
        case 73: _t->on_listWidgetSchedule_doubleClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 74: _t->on_listWidgetSchedule_itemSelectionChanged(); break;
        case 75: _t->on_actionMoveScheduleTop_triggered(); break;
        case 76: _t->on_actionMoveScheduleUp_triggered(); break;
        case 77: _t->on_actionMoveScheduleDown_triggered(); break;
        case 78: _t->on_actionMoveScheduleBottom_triggered(); break;
        case 79: _t->on_actionNewSchedule_triggered(); break;
        case 80: _t->on_actionOpenSchedule_triggered(); break;
        case 81: _t->on_actionSaveSchedule_triggered(); break;
        case 82: _t->on_actionSaveScheduleAs_triggered(); break;
        case 83: _t->on_actionCloseSchedule_triggered(); break;
        case 84: _t->openSchedule(); break;
        case 85: _t->saveSchedule((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 86: _t->saveScheduleNew((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1]))); break;
        case 87: _t->saveScheduleItemNew((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<BibleHistory>>(_a[3]))); break;
        case 88: _t->saveScheduleItemNew((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Song>>(_a[3]))); break;
        case 89: _t->saveScheduleItemNew((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<SlideShow>>(_a[3]))); break;
        case 90: _t->saveScheduleItemNew((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<VideoInfo>>(_a[3]))); break;
        case 91: _t->saveScheduleItemNew((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Announcement>>(_a[3]))); break;
        case 92: _t->saveScheduleUpdate((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1]))); break;
        case 93: _t->saveScheduleItemUpdate((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<BibleHistory>>(_a[3]))); break;
        case 94: _t->saveScheduleItemUpdate((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Song>>(_a[3]))); break;
        case 95: _t->saveScheduleItemUpdate((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<SlideShow>>(_a[3]))); break;
        case 96: _t->saveScheduleItemUpdate((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<VideoInfo>>(_a[3]))); break;
        case 97: _t->saveScheduleItemUpdate((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Announcement>>(_a[3]))); break;
        case 98: _t->openScheduleItem((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<BibleHistory&>>(_a[3]))); break;
        case 99: _t->openScheduleItem((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Song&>>(_a[3]))); break;
        case 100: _t->openScheduleItem((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<SlideShow&>>(_a[3]))); break;
        case 101: _t->openScheduleItem((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<VideoInfo&>>(_a[3]))); break;
        case 102: _t->openScheduleItem((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Announcement&>>(_a[3]))); break;
        case 103: _t->on_actionClear_triggered(); break;
        case 104: _t->on_actionCloseDisplay_triggered(); break;
        case 105: _t->updateCloseDisplayButtons((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 106: _t->toggleTransliteration((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        }
    }
}

const QMetaObject *SoftProjector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SoftProjector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SoftProjectorE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SoftProjector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 107)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 107;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 107)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 107;
    }
    return _id;
}
QT_WARNING_POP
