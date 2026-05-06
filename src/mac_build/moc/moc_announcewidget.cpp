/****************************************************************************
** Meta object code from reading C++ file 'announcewidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../headers/announcewidget.hpp"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'announcewidget.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14AnnounceWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto AnnounceWidget::qt_create_metaobjectdata<qt_meta_tag_ZN14AnnounceWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "AnnounceWidget",
        "sendAnnounce",
        "",
        "Announcement",
        "announce",
        "row",
        "addToSchedule",
        "Announcement&",
        "loadAnnouncements",
        "newAnnouncement",
        "editAnnouncement",
        "copyAnnouncement",
        "deleteAnnouncement",
        "isAnnounceValid",
        "getAnnouncement",
        "setAnnouncementFromHistory",
        "loadAnnouncement",
        "announceViewRowChanged",
        "QModelIndex",
        "current",
        "previous",
        "setAnnounceList",
        "setPreview",
        "addNewAnnouncement",
        "updateAnnouncement",
        "sendToProjector",
        "on_pushButtonLive_clicked",
        "on_listWidgetAnnouncement_doubleClicked",
        "index",
        "currentAnnouncement",
        "on_tableViewAnnouncements_doubleClicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'sendAnnounce'
        QtMocHelpers::SignalData<void(Announcement, int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 5 },
        }}),
        // Signal 'addToSchedule'
        QtMocHelpers::SignalData<void(Announcement &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 4 },
        }}),
        // Slot 'loadAnnouncements'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'newAnnouncement'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'editAnnouncement'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'copyAnnouncement'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'deleteAnnouncement'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'isAnnounceValid'
        QtMocHelpers::SlotData<bool()>(13, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'getAnnouncement'
        QtMocHelpers::SlotData<Announcement()>(14, 2, QMC::AccessPublic, 0x80000000 | 3),
        // Slot 'setAnnouncementFromHistory'
        QtMocHelpers::SlotData<void(Announcement &)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 4 },
        }}),
        // Slot 'loadAnnouncement'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'announceViewRowChanged'
        QtMocHelpers::SlotData<void(const QModelIndex &, const QModelIndex &)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 18, 19 }, { 0x80000000 | 18, 20 },
        }}),
        // Slot 'setAnnounceList'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setPreview'
        QtMocHelpers::SlotData<void(Announcement)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'addNewAnnouncement'
        QtMocHelpers::SlotData<void(Announcement)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'updateAnnouncement'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'sendToProjector'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonLive_clicked'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_listWidgetAnnouncement_doubleClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(27, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 18, 28 },
        }}),
        // Slot 'currentAnnouncement'
        QtMocHelpers::SlotData<Announcement()>(29, 2, QMC::AccessPrivate, 0x80000000 | 3),
        // Slot 'on_tableViewAnnouncements_doubleClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(30, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 18, 28 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AnnounceWidget, qt_meta_tag_ZN14AnnounceWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject AnnounceWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14AnnounceWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14AnnounceWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14AnnounceWidgetE_t>.metaTypes,
    nullptr
} };

void AnnounceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AnnounceWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->sendAnnounce((*reinterpret_cast<std::add_pointer_t<Announcement>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->addToSchedule((*reinterpret_cast<std::add_pointer_t<Announcement&>>(_a[1]))); break;
        case 2: _t->loadAnnouncements(); break;
        case 3: _t->newAnnouncement(); break;
        case 4: _t->editAnnouncement(); break;
        case 5: _t->copyAnnouncement(); break;
        case 6: _t->deleteAnnouncement(); break;
        case 7: { bool _r = _t->isAnnounceValid();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { Announcement _r = _t->getAnnouncement();
            if (_a[0]) *reinterpret_cast<Announcement*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->setAnnouncementFromHistory((*reinterpret_cast<std::add_pointer_t<Announcement&>>(_a[1]))); break;
        case 10: _t->loadAnnouncement(); break;
        case 11: _t->announceViewRowChanged((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 12: _t->setAnnounceList(); break;
        case 13: _t->setPreview((*reinterpret_cast<std::add_pointer_t<Announcement>>(_a[1]))); break;
        case 14: _t->addNewAnnouncement((*reinterpret_cast<std::add_pointer_t<Announcement>>(_a[1]))); break;
        case 15: _t->updateAnnouncement(); break;
        case 16: _t->sendToProjector(); break;
        case 17: _t->on_pushButtonLive_clicked(); break;
        case 18: _t->on_listWidgetAnnouncement_doubleClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 19: { Announcement _r = _t->currentAnnouncement();
            if (_a[0]) *reinterpret_cast<Announcement*>(_a[0]) = std::move(_r); }  break;
        case 20: _t->on_tableViewAnnouncements_doubleClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AnnounceWidget::*)(Announcement , int )>(_a, &AnnounceWidget::sendAnnounce, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (AnnounceWidget::*)(Announcement & )>(_a, &AnnounceWidget::addToSchedule, 1))
            return;
    }
}

const QMetaObject *AnnounceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnnounceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14AnnounceWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AnnounceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AnnounceWidget::sendAnnounce(Announcement _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void AnnounceWidget::addToSchedule(Announcement & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
