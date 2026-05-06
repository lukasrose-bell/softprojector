/****************************************************************************
** Meta object code from reading C++ file 'mediawidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../headers/mediawidget.hpp"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mediawidget.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11MediaWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto MediaWidget::qt_create_metaobjectdata<qt_meta_tag_ZN11MediaWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MediaWidget",
        "toProjector",
        "",
        "VideoInfo&",
        "vid",
        "addToLibrary",
        "removeFromLibrary",
        "getMedia",
        "VideoInfo",
        "setMediaFromSchedule",
        "v",
        "goLiveFromSchedule",
        "isValidMedia",
        "playFile",
        "QUrl",
        "filePath",
        "updateInfo",
        "handleDrop",
        "QDropEvent*",
        "e",
        "loadMediaLibrary",
        "statusChanged",
        "QMediaPlayer::MediaStatus",
        "status",
        "displayErrorMessage",
        "hasVideoChanged",
        "insertFiles",
        "QStringList&",
        "files",
        "prepareForProjection",
        "on_pushButtonGoLive_clicked",
        "on_listWidgetMediaFiles_itemSelectionChanged",
        "on_listWidgetMediaFiles_doubleClicked",
        "QModelIndex",
        "index"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'toProjector'
        QtMocHelpers::SignalData<void(VideoInfo &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'addToLibrary'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'removeFromLibrary'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'getMedia'
        QtMocHelpers::SlotData<VideoInfo()>(7, 2, QMC::AccessPublic, 0x80000000 | 8),
        // Slot 'setMediaFromSchedule'
        QtMocHelpers::SlotData<void(VideoInfo &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 10 },
        }}),
        // Slot 'goLiveFromSchedule'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'isValidMedia'
        QtMocHelpers::SlotData<bool()>(12, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'playFile'
        QtMocHelpers::SlotData<void(QUrl)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Slot 'updateInfo'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'handleDrop'
        QtMocHelpers::SlotData<void(QDropEvent *)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Slot 'loadMediaLibrary'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'statusChanged'
        QtMocHelpers::SlotData<void(QMediaPlayer::MediaStatus)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Slot 'displayErrorMessage'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'hasVideoChanged'
        QtMocHelpers::SlotData<void(bool)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'insertFiles'
        QtMocHelpers::SlotData<void(QStringList &)>(26, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 27, 28 },
        }}),
        // Slot 'prepareForProjection'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonGoLive_clicked'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_listWidgetMediaFiles_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_listWidgetMediaFiles_doubleClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(32, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 33, 34 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MediaWidget, qt_meta_tag_ZN11MediaWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MediaWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11MediaWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11MediaWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11MediaWidgetE_t>.metaTypes,
    nullptr
} };

void MediaWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MediaWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->toProjector((*reinterpret_cast<std::add_pointer_t<VideoInfo&>>(_a[1]))); break;
        case 1: _t->addToLibrary(); break;
        case 2: _t->removeFromLibrary(); break;
        case 3: { VideoInfo _r = _t->getMedia();
            if (_a[0]) *reinterpret_cast<VideoInfo*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->setMediaFromSchedule((*reinterpret_cast<std::add_pointer_t<VideoInfo&>>(_a[1]))); break;
        case 5: _t->goLiveFromSchedule(); break;
        case 6: { bool _r = _t->isValidMedia();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->playFile((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 8: _t->updateInfo(); break;
        case 9: _t->handleDrop((*reinterpret_cast<std::add_pointer_t<QDropEvent*>>(_a[1]))); break;
        case 10: _t->loadMediaLibrary(); break;
        case 11: _t->statusChanged((*reinterpret_cast<std::add_pointer_t<QMediaPlayer::MediaStatus>>(_a[1]))); break;
        case 12: _t->displayErrorMessage(); break;
        case 13: _t->hasVideoChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->insertFiles((*reinterpret_cast<std::add_pointer_t<QStringList&>>(_a[1]))); break;
        case 15: _t->prepareForProjection(); break;
        case 16: _t->on_pushButtonGoLive_clicked(); break;
        case 17: _t->on_listWidgetMediaFiles_itemSelectionChanged(); break;
        case 18: _t->on_listWidgetMediaFiles_doubleClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MediaWidget::*)(VideoInfo & )>(_a, &MediaWidget::toProjector, 0))
            return;
    }
}

const QMetaObject *MediaWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MediaWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11MediaWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MediaWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void MediaWidget::toProjector(VideoInfo & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
