/****************************************************************************
** Meta object code from reading C++ file 'editannouncementdialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../headers/editannouncementdialog.hpp"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editannouncementdialog.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN22EditAnnouncementDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto EditAnnouncementDialog::qt_create_metaobjectdata<qt_meta_tag_ZN22EditAnnouncementDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EditAnnouncementDialog",
        "announceToAdd",
        "",
        "Announcement",
        "announce",
        "announceToUpdate",
        "setNewAnnouce",
        "setEditAnnouce",
        "Announcement&",
        "editAnnoucement",
        "setCopyAnnouce",
        "copyAnnoucement",
        "on_checkBoxUsePrivateSettings_stateChanged",
        "arg1",
        "on_checkBoxTimedSlides_stateChanged",
        "on_pushButtonSave_clicked",
        "on_pushButtonCancel_clicked",
        "resetUiItems",
        "setUiItems",
        "setSave"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'announceToAdd'
        QtMocHelpers::SignalData<void(Announcement)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'announceToUpdate'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setNewAnnouce'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setEditAnnouce'
        QtMocHelpers::SlotData<void(Announcement &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'setCopyAnnouce'
        QtMocHelpers::SlotData<void(Announcement &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 11 },
        }}),
        // Slot 'on_checkBoxUsePrivateSettings_stateChanged'
        QtMocHelpers::SlotData<void(int)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 13 },
        }}),
        // Slot 'on_checkBoxTimedSlides_stateChanged'
        QtMocHelpers::SlotData<void(int)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 13 },
        }}),
        // Slot 'on_pushButtonSave_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonCancel_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'resetUiItems'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setUiItems'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setSave'
        QtMocHelpers::SlotData<bool()>(19, 2, QMC::AccessPrivate, QMetaType::Bool),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EditAnnouncementDialog, qt_meta_tag_ZN22EditAnnouncementDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject EditAnnouncementDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22EditAnnouncementDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22EditAnnouncementDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22EditAnnouncementDialogE_t>.metaTypes,
    nullptr
} };

void EditAnnouncementDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EditAnnouncementDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->announceToAdd((*reinterpret_cast<std::add_pointer_t<Announcement>>(_a[1]))); break;
        case 1: _t->announceToUpdate(); break;
        case 2: _t->setNewAnnouce(); break;
        case 3: _t->setEditAnnouce((*reinterpret_cast<std::add_pointer_t<Announcement&>>(_a[1]))); break;
        case 4: _t->setCopyAnnouce((*reinterpret_cast<std::add_pointer_t<Announcement&>>(_a[1]))); break;
        case 5: _t->on_checkBoxUsePrivateSettings_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_checkBoxTimedSlides_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->on_pushButtonSave_clicked(); break;
        case 8: _t->on_pushButtonCancel_clicked(); break;
        case 9: _t->resetUiItems(); break;
        case 10: _t->setUiItems(); break;
        case 11: { bool _r = _t->setSave();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (EditAnnouncementDialog::*)(Announcement )>(_a, &EditAnnouncementDialog::announceToAdd, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (EditAnnouncementDialog::*)()>(_a, &EditAnnouncementDialog::announceToUpdate, 1))
            return;
    }
}

const QMetaObject *EditAnnouncementDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditAnnouncementDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22EditAnnouncementDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EditAnnouncementDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void EditAnnouncementDialog::announceToAdd(Announcement _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void EditAnnouncementDialog::announceToUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
