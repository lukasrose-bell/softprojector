/****************************************************************************
** Meta object code from reading C++ file 'picturewidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../headers/picturewidget.hpp"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'picturewidget.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13PictureWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto PictureWidget::qt_create_metaobjectdata<qt_meta_tag_ZN13PictureWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PictureWidget",
        "sendSlideShow",
        "",
        "QList<SlideShowItem>&",
        "slideShow",
        "row",
        "name",
        "sendToSchedule",
        "SlideShow&",
        "sshow",
        "loadSlideShows",
        "getCurrentSlideshow",
        "SlideShow",
        "isSlideShowSelected",
        "deleteSlideShow",
        "sendToPreviewFromSchedule",
        "setSettings",
        "SlideShowSettings&",
        "settings",
        "on_listWidgetSlides_doubleClicked",
        "QModelIndex",
        "index",
        "on_pushButtonAddImages_clicked",
        "on_pushButtonRemoveImage_clicked",
        "on_pushButtonMoveUp_clicked",
        "on_pushButtonMoveDown_clicked",
        "on_pushButtonGoLive_clicked",
        "sendToProjector",
        "on_pushButtonClearImages_clicked",
        "on_listWidgetSlideShow_itemSelectionChanged",
        "on_listWidgetSlides_currentRowChanged",
        "currentRow",
        "loadSlideShow",
        "ss_id",
        "sendToPreview",
        "on_listWidgetSlideShow_doubleClicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'sendSlideShow'
        QtMocHelpers::SignalData<void(QList<SlideShowItem> &, int, QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 5 }, { QMetaType::QString, 6 },
        }}),
        // Signal 'sendToSchedule'
        QtMocHelpers::SignalData<void(SlideShow &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'loadSlideShows'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'getCurrentSlideshow'
        QtMocHelpers::SlotData<SlideShow()>(11, 2, QMC::AccessPublic, 0x80000000 | 12),
        // Slot 'isSlideShowSelected'
        QtMocHelpers::SlotData<bool()>(13, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'deleteSlideShow'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'sendToPreviewFromSchedule'
        QtMocHelpers::SlotData<void(SlideShow &)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'setSettings'
        QtMocHelpers::SlotData<void(SlideShowSettings &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Slot 'on_listWidgetSlides_doubleClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 20, 21 },
        }}),
        // Slot 'on_pushButtonAddImages_clicked'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonRemoveImage_clicked'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonMoveUp_clicked'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonMoveDown_clicked'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonGoLive_clicked'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'sendToProjector'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonClearImages_clicked'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_listWidgetSlideShow_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_listWidgetSlides_currentRowChanged'
        QtMocHelpers::SlotData<void(int)>(30, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 31 },
        }}),
        // Slot 'loadSlideShow'
        QtMocHelpers::SlotData<void(int)>(32, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 33 },
        }}),
        // Slot 'sendToPreview'
        QtMocHelpers::SlotData<void(SlideShow &)>(34, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'on_listWidgetSlideShow_doubleClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(35, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 20, 21 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PictureWidget, qt_meta_tag_ZN13PictureWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PictureWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13PictureWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13PictureWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13PictureWidgetE_t>.metaTypes,
    nullptr
} };

void PictureWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PictureWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->sendSlideShow((*reinterpret_cast<std::add_pointer_t<QList<SlideShowItem>&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 1: _t->sendToSchedule((*reinterpret_cast<std::add_pointer_t<SlideShow&>>(_a[1]))); break;
        case 2: _t->loadSlideShows(); break;
        case 3: { SlideShow _r = _t->getCurrentSlideshow();
            if (_a[0]) *reinterpret_cast<SlideShow*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->isSlideShowSelected();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->deleteSlideShow(); break;
        case 6: _t->sendToPreviewFromSchedule((*reinterpret_cast<std::add_pointer_t<SlideShow&>>(_a[1]))); break;
        case 7: _t->setSettings((*reinterpret_cast<std::add_pointer_t<SlideShowSettings&>>(_a[1]))); break;
        case 8: _t->on_listWidgetSlides_doubleClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 9: _t->on_pushButtonAddImages_clicked(); break;
        case 10: _t->on_pushButtonRemoveImage_clicked(); break;
        case 11: _t->on_pushButtonMoveUp_clicked(); break;
        case 12: _t->on_pushButtonMoveDown_clicked(); break;
        case 13: _t->on_pushButtonGoLive_clicked(); break;
        case 14: _t->sendToProjector(); break;
        case 15: _t->on_pushButtonClearImages_clicked(); break;
        case 16: _t->on_listWidgetSlideShow_itemSelectionChanged(); break;
        case 17: _t->on_listWidgetSlides_currentRowChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->loadSlideShow((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->sendToPreview((*reinterpret_cast<std::add_pointer_t<SlideShow&>>(_a[1]))); break;
        case 20: _t->on_listWidgetSlideShow_doubleClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PictureWidget::*)(QList<SlideShowItem> & , int , QString )>(_a, &PictureWidget::sendSlideShow, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PictureWidget::*)(SlideShow & )>(_a, &PictureWidget::sendToSchedule, 1))
            return;
    }
}

const QMetaObject *PictureWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PictureWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13PictureWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PictureWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void PictureWidget::sendSlideShow(QList<SlideShowItem> & _t1, int _t2, QString _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}

// SIGNAL 1
void PictureWidget::sendToSchedule(SlideShow & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
