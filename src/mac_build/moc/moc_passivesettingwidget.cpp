/****************************************************************************
** Meta object code from reading C++ file 'passivesettingwidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../headers/passivesettingwidget.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'passivesettingwidget.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN20PassiveSettingWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto PassiveSettingWidget::qt_create_metaobjectdata<qt_meta_tag_ZN20PassiveSettingWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PassiveSettingWidget",
        "setSetings",
        "",
        "TextSettings&",
        "settings",
        "settings2",
        "settings3",
        "settings4",
        "getSettings",
        "setDispScreen2Visible",
        "visible",
        "setDispScreen3Visible",
        "setDispScreen4Visible",
        "loadSettings",
        "on_buttonBrowseBackgound_clicked",
        "on_groupBoxDisp2Sets_toggled",
        "arg1",
        "on_groupBoxDisp3Sets_toggled",
        "on_groupBoxDisp4Sets_toggled",
        "on_buttonBrowseBackgound2_clicked",
        "on_buttonBrowseBackgound3_clicked",
        "on_buttonBrowseBackgound4_clicked",
        "on_pushButtonDefault_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setSetings'
        QtMocHelpers::SlotData<void(TextSettings &, TextSettings &, TextSettings &, TextSettings &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 3, 5 }, { 0x80000000 | 3, 6 }, { 0x80000000 | 3, 7 },
        }}),
        // Slot 'getSettings'
        QtMocHelpers::SlotData<void(TextSettings &, TextSettings &, TextSettings &, TextSettings &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 3, 5 }, { 0x80000000 | 3, 6 }, { 0x80000000 | 3, 7 },
        }}),
        // Slot 'setDispScreen2Visible'
        QtMocHelpers::SlotData<void(bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 10 },
        }}),
        // Slot 'setDispScreen3Visible'
        QtMocHelpers::SlotData<void(bool)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 10 },
        }}),
        // Slot 'setDispScreen4Visible'
        QtMocHelpers::SlotData<void(bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 10 },
        }}),
        // Slot 'loadSettings'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBrowseBackgound_clicked'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_groupBoxDisp2Sets_toggled'
        QtMocHelpers::SlotData<void(bool)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 16 },
        }}),
        // Slot 'on_groupBoxDisp3Sets_toggled'
        QtMocHelpers::SlotData<void(bool)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 16 },
        }}),
        // Slot 'on_groupBoxDisp4Sets_toggled'
        QtMocHelpers::SlotData<void(bool)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 16 },
        }}),
        // Slot 'on_buttonBrowseBackgound2_clicked'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBrowseBackgound3_clicked'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBrowseBackgound4_clicked'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonDefault_clicked'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PassiveSettingWidget, qt_meta_tag_ZN20PassiveSettingWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PassiveSettingWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20PassiveSettingWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20PassiveSettingWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20PassiveSettingWidgetE_t>.metaTypes,
    nullptr
} };

void PassiveSettingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PassiveSettingWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setSetings((*reinterpret_cast<std::add_pointer_t<TextSettings&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<TextSettings&>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<TextSettings&>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<TextSettings&>>(_a[4]))); break;
        case 1: _t->getSettings((*reinterpret_cast<std::add_pointer_t<TextSettings&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<TextSettings&>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<TextSettings&>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<TextSettings&>>(_a[4]))); break;
        case 2: _t->setDispScreen2Visible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->setDispScreen3Visible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->setDispScreen4Visible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->loadSettings(); break;
        case 6: _t->on_buttonBrowseBackgound_clicked(); break;
        case 7: _t->on_groupBoxDisp2Sets_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->on_groupBoxDisp3Sets_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->on_groupBoxDisp4Sets_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->on_buttonBrowseBackgound2_clicked(); break;
        case 11: _t->on_buttonBrowseBackgound3_clicked(); break;
        case 12: _t->on_buttonBrowseBackgound4_clicked(); break;
        case 13: _t->on_pushButtonDefault_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *PassiveSettingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PassiveSettingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20PassiveSettingWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PassiveSettingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
