/****************************************************************************
** Meta object code from reading C++ file 'projectordisplayscreen.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../headers/projectordisplayscreen.hpp"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'projectordisplayscreen.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN22ProjectorDisplayScreenE_t {};
} // unnamed namespace

template <> constexpr inline auto ProjectorDisplayScreen::qt_create_metaobjectdata<qt_meta_tag_ZN22ProjectorDisplayScreenE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ProjectorDisplayScreen",
        "exitSlide",
        "",
        "nextSlide",
        "prevSlide",
        "videoPositionChanged",
        "position",
        "videoDurationChanged",
        "duration",
        "videoPlaybackStateChanged",
        "QMediaPlayer::PlaybackState",
        "state",
        "videoStopped",
        "resetImGenSize",
        "renderNotText",
        "renderPassiveText",
        "QPixmap&",
        "back",
        "useBack",
        "renderBibleText",
        "Verse",
        "bVerse",
        "BibleSettings&",
        "bSets",
        "renderSongText",
        "Stanza",
        "stanza",
        "SongSettings&",
        "sSets",
        "renderAnnounceText",
        "AnnounceSlide",
        "announce",
        "TextSettings&",
        "aSets",
        "renderSlideShow",
        "QPixmap",
        "slide",
        "SlideShowSettings&",
        "ssSets",
        "renderVideo",
        "VideoInfo",
        "videoDetails",
        "playVideo",
        "pauseVideo",
        "stopVideo",
        "setVideoVolume",
        "level",
        "setVideoMuted",
        "muted",
        "setVideoPosition",
        "positionControls",
        "DisplayControlsSettings&",
        "dSettings",
        "setControlsVisible",
        "visible",
        "setBackPixmap",
        "p",
        "fillMode",
        "QColor",
        "c",
        "setTextPixmap",
        "setBackVideo",
        "path",
        "setVideoSource",
        "playerObject",
        "QUrl",
        "updateScreen",
        "exitSlideClicked",
        "nextSlideClicked",
        "prevSlideClicked",
        "playbackStopped"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'exitSlide'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'nextSlide'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'prevSlide'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'videoPositionChanged'
        QtMocHelpers::SignalData<void(qint64)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 6 },
        }}),
        // Signal 'videoDurationChanged'
        QtMocHelpers::SignalData<void(qint64)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 8 },
        }}),
        // Signal 'videoPlaybackStateChanged'
        QtMocHelpers::SignalData<void(QMediaPlayer::PlaybackState)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Signal 'videoStopped'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resetImGenSize'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'renderNotText'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'renderPassiveText'
        QtMocHelpers::SlotData<void(QPixmap &, bool)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 17 }, { QMetaType::Bool, 18 },
        }}),
        // Slot 'renderBibleText'
        QtMocHelpers::SlotData<void(Verse, BibleSettings &)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 20, 21 }, { 0x80000000 | 22, 23 },
        }}),
        // Slot 'renderSongText'
        QtMocHelpers::SlotData<void(Stanza, SongSettings &)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 25, 26 }, { 0x80000000 | 27, 28 },
        }}),
        // Slot 'renderAnnounceText'
        QtMocHelpers::SlotData<void(AnnounceSlide, TextSettings &)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 30, 31 }, { 0x80000000 | 32, 33 },
        }}),
        // Slot 'renderSlideShow'
        QtMocHelpers::SlotData<void(QPixmap, SlideShowSettings &)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 35, 36 }, { 0x80000000 | 37, 38 },
        }}),
        // Slot 'renderVideo'
        QtMocHelpers::SlotData<void(VideoInfo)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 40, 41 },
        }}),
        // Slot 'playVideo'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pauseVideo'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'stopVideo'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setVideoVolume'
        QtMocHelpers::SlotData<void(int)>(45, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 46 },
        }}),
        // Slot 'setVideoMuted'
        QtMocHelpers::SlotData<void(bool)>(47, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 48 },
        }}),
        // Slot 'setVideoPosition'
        QtMocHelpers::SlotData<void(qint64)>(49, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 6 },
        }}),
        // Slot 'positionControls'
        QtMocHelpers::SlotData<void(DisplayControlsSettings &)>(50, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 51, 52 },
        }}),
        // Slot 'setControlsVisible'
        QtMocHelpers::SlotData<void(bool)>(53, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 54 },
        }}),
        // Slot 'setBackPixmap'
        QtMocHelpers::SlotData<void(QPixmap, int)>(55, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 35, 56 }, { QMetaType::Int, 57 },
        }}),
        // Slot 'setBackPixmap'
        QtMocHelpers::SlotData<void(QPixmap, QColor)>(55, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 35, 56 }, { 0x80000000 | 58, 59 },
        }}),
        // Slot 'setTextPixmap'
        QtMocHelpers::SlotData<void(QPixmap)>(60, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 35, 56 },
        }}),
        // Slot 'setBackVideo'
        QtMocHelpers::SlotData<void(QString)>(61, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 62 },
        }}),
        // Slot 'setVideoSource'
        QtMocHelpers::SlotData<void(QObject *, QUrl)>(63, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QObjectStar, 64 }, { 0x80000000 | 65, 62 },
        }}),
        // Slot 'updateScreen'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'exitSlideClicked'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'nextSlideClicked'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'prevSlideClicked'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'videoPositionChanged'
        QtMocHelpers::SlotData<void(int)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Slot 'videoDurationChanged'
        QtMocHelpers::SlotData<void(int)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Slot 'videoPlaybackStateChanged'
        QtMocHelpers::SlotData<void(int)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 11 },
        }}),
        // Slot 'playbackStopped'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ProjectorDisplayScreen, qt_meta_tag_ZN22ProjectorDisplayScreenE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ProjectorDisplayScreen::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22ProjectorDisplayScreenE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22ProjectorDisplayScreenE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22ProjectorDisplayScreenE_t>.metaTypes,
    nullptr
} };

void ProjectorDisplayScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ProjectorDisplayScreen *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->exitSlide(); break;
        case 1: _t->nextSlide(); break;
        case 2: _t->prevSlide(); break;
        case 3: _t->videoPositionChanged((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 4: _t->videoDurationChanged((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 5: _t->videoPlaybackStateChanged((*reinterpret_cast<std::add_pointer_t<QMediaPlayer::PlaybackState>>(_a[1]))); break;
        case 6: _t->videoStopped(); break;
        case 7: _t->resetImGenSize(); break;
        case 8: _t->renderNotText(); break;
        case 9: _t->renderPassiveText((*reinterpret_cast<std::add_pointer_t<QPixmap&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 10: _t->renderBibleText((*reinterpret_cast<std::add_pointer_t<Verse>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<BibleSettings&>>(_a[2]))); break;
        case 11: _t->renderSongText((*reinterpret_cast<std::add_pointer_t<Stanza>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<SongSettings&>>(_a[2]))); break;
        case 12: _t->renderAnnounceText((*reinterpret_cast<std::add_pointer_t<AnnounceSlide>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<TextSettings&>>(_a[2]))); break;
        case 13: _t->renderSlideShow((*reinterpret_cast<std::add_pointer_t<QPixmap>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<SlideShowSettings&>>(_a[2]))); break;
        case 14: _t->renderVideo((*reinterpret_cast<std::add_pointer_t<VideoInfo>>(_a[1]))); break;
        case 15: _t->playVideo(); break;
        case 16: _t->pauseVideo(); break;
        case 17: _t->stopVideo(); break;
        case 18: _t->setVideoVolume((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->setVideoMuted((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->setVideoPosition((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 21: _t->positionControls((*reinterpret_cast<std::add_pointer_t<DisplayControlsSettings&>>(_a[1]))); break;
        case 22: _t->setControlsVisible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->setBackPixmap((*reinterpret_cast<std::add_pointer_t<QPixmap>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 24: _t->setBackPixmap((*reinterpret_cast<std::add_pointer_t<QPixmap>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QColor>>(_a[2]))); break;
        case 25: _t->setTextPixmap((*reinterpret_cast<std::add_pointer_t<QPixmap>>(_a[1]))); break;
        case 26: _t->setBackVideo((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->setVideoSource((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[2]))); break;
        case 28: _t->updateScreen(); break;
        case 29: _t->exitSlideClicked(); break;
        case 30: _t->nextSlideClicked(); break;
        case 31: _t->prevSlideClicked(); break;
        case 32: _t->videoPositionChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 33: _t->videoDurationChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 34: _t->videoPlaybackStateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 35: _t->playbackStopped(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ProjectorDisplayScreen::*)()>(_a, &ProjectorDisplayScreen::exitSlide, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProjectorDisplayScreen::*)()>(_a, &ProjectorDisplayScreen::nextSlide, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProjectorDisplayScreen::*)()>(_a, &ProjectorDisplayScreen::prevSlide, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProjectorDisplayScreen::*)(qint64 )>(_a, &ProjectorDisplayScreen::videoPositionChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProjectorDisplayScreen::*)(qint64 )>(_a, &ProjectorDisplayScreen::videoDurationChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProjectorDisplayScreen::*)(QMediaPlayer::PlaybackState )>(_a, &ProjectorDisplayScreen::videoPlaybackStateChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProjectorDisplayScreen::*)()>(_a, &ProjectorDisplayScreen::videoStopped, 6))
            return;
    }
}

const QMetaObject *ProjectorDisplayScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProjectorDisplayScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22ProjectorDisplayScreenE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ProjectorDisplayScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 36)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 36;
    }
    return _id;
}

// SIGNAL 0
void ProjectorDisplayScreen::exitSlide()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ProjectorDisplayScreen::nextSlide()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ProjectorDisplayScreen::prevSlide()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ProjectorDisplayScreen::videoPositionChanged(qint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void ProjectorDisplayScreen::videoDurationChanged(qint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void ProjectorDisplayScreen::videoPlaybackStateChanged(QMediaPlayer::PlaybackState _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void ProjectorDisplayScreen::videoStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
