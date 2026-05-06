/****************************************************************************
** Meta object code from reading C++ file 'generalsettingwidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../headers/generalsettingwidget.hpp"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'generalsettingwidget.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN20GeneralSettingWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto GeneralSettingWidget::qt_create_metaobjectdata<qt_meta_tag_ZN20GeneralSettingWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GeneralSettingWidget",
        "setDisp2Use",
        "",
        "toUse",
        "setDisp3Use",
        "setDisp4Use",
        "themeChanged",
        "theme_id",
        "setSettings",
        "GeneralSettings",
        "settings",
        "updateSecondaryDisplayScreen",
        "getSettings",
        "on_pushButtonDefault_clicked",
        "loadThemes",
        "loadSettings",
        "on_comboBoxDisplayScreen_activated",
        "arg1",
        "on_comboBoxDisplayScreen_2_activated",
        "index",
        "on_comboBoxDisplayScreen_3_activated",
        "on_comboBoxDisplayScreen_4_activated",
        "on_pushButtonAddTheme_clicked",
        "on_comboBoxTheme_activated",
        "on_checkBoxUseDarkTheme_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'setDisp2Use'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'setDisp3Use'
        QtMocHelpers::SignalData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'setDisp4Use'
        QtMocHelpers::SignalData<void(bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'themeChanged'
        QtMocHelpers::SignalData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'setSettings'
        QtMocHelpers::SlotData<void(GeneralSettings)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Slot 'updateSecondaryDisplayScreen'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'getSettings'
        QtMocHelpers::SlotData<GeneralSettings()>(12, 2, QMC::AccessPublic, 0x80000000 | 9),
        // Slot 'on_pushButtonDefault_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'loadThemes'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'loadSettings'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_comboBoxDisplayScreen_activated'
        QtMocHelpers::SlotData<void(const QString &)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Slot 'on_comboBoxDisplayScreen_2_activated'
        QtMocHelpers::SlotData<void(int)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 19 },
        }}),
        // Slot 'on_comboBoxDisplayScreen_3_activated'
        QtMocHelpers::SlotData<void(int)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 19 },
        }}),
        // Slot 'on_comboBoxDisplayScreen_4_activated'
        QtMocHelpers::SlotData<void(int)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 19 },
        }}),
        // Slot 'on_pushButtonAddTheme_clicked'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_comboBoxTheme_activated'
        QtMocHelpers::SlotData<void(int)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 19 },
        }}),
        // Slot 'on_checkBoxUseDarkTheme_clicked'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GeneralSettingWidget, qt_meta_tag_ZN20GeneralSettingWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GeneralSettingWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20GeneralSettingWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20GeneralSettingWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20GeneralSettingWidgetE_t>.metaTypes,
    nullptr
} };

void GeneralSettingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GeneralSettingWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setDisp2Use((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->setDisp3Use((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->setDisp4Use((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->themeChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->setSettings((*reinterpret_cast<std::add_pointer_t<GeneralSettings>>(_a[1]))); break;
        case 5: _t->updateSecondaryDisplayScreen(); break;
        case 6: { GeneralSettings _r = _t->getSettings();
            if (_a[0]) *reinterpret_cast<GeneralSettings*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->on_pushButtonDefault_clicked(); break;
        case 8: _t->loadThemes(); break;
        case 9: _t->loadSettings(); break;
        case 10: _t->on_comboBoxDisplayScreen_activated((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->on_comboBoxDisplayScreen_2_activated((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->on_comboBoxDisplayScreen_3_activated((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->on_comboBoxDisplayScreen_4_activated((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->on_pushButtonAddTheme_clicked(); break;
        case 15: _t->on_comboBoxTheme_activated((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->on_checkBoxUseDarkTheme_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (GeneralSettingWidget::*)(bool )>(_a, &GeneralSettingWidget::setDisp2Use, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (GeneralSettingWidget::*)(bool )>(_a, &GeneralSettingWidget::setDisp3Use, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (GeneralSettingWidget::*)(bool )>(_a, &GeneralSettingWidget::setDisp4Use, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (GeneralSettingWidget::*)(int )>(_a, &GeneralSettingWidget::themeChanged, 3))
            return;
    }
}

const QMetaObject *GeneralSettingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeneralSettingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20GeneralSettingWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GeneralSettingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void GeneralSettingWidget::setDisp2Use(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void GeneralSettingWidget::setDisp3Use(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void GeneralSettingWidget::setDisp4Use(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void GeneralSettingWidget::themeChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
