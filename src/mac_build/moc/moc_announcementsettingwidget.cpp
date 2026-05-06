/****************************************************************************
** Meta object code from reading C++ file 'announcementsettingwidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../headers/announcementsettingwidget.hpp"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'announcementsettingwidget.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN25AnnouncementSettingWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto AnnouncementSettingWidget::qt_create_metaobjectdata<qt_meta_tag_ZN25AnnouncementSettingWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "AnnouncementSettingWidget",
        "applyBackToAll",
        "",
        "t",
        "backName",
        "QPixmap",
        "background",
        "setSettings",
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
        "setBackgroungds",
        "name",
        "back",
        "loadSettings",
        "on_buttonBackground_clicked",
        "on_pushButtonDefault_clicked",
        "on_checkBoxUseShadow_stateChanged",
        "arg1",
        "on_groupBoxUseDisp2_toggled",
        "on_groupBoxUseDisp3_toggled",
        "on_groupBoxUseDisp4_toggled",
        "on_checkBoxUseShadow2_stateChanged",
        "on_checkBoxUseShadow3_stateChanged",
        "on_checkBoxUseShadow4_stateChanged",
        "on_buttonBackground2_clicked",
        "on_buttonBackground3_clicked",
        "on_buttonBackground4_clicked",
        "on_toolButtonColor_clicked",
        "on_toolButtonColor2_clicked",
        "on_toolButtonColor3_clicked",
        "on_toolButtonColor4_clicked",
        "on_toolButtonFont_clicked",
        "on_toolButtonFont2_clicked",
        "on_toolButtonFont3_clicked",
        "on_toolButtonFont4_clicked",
        "getFontText",
        "QFont",
        "font",
        "on_pushButtonApplyToAll_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'applyBackToAll'
        QtMocHelpers::SignalData<void(int, QString, QPixmap)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::QString, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Slot 'setSettings'
        QtMocHelpers::SlotData<void(TextSettings &, TextSettings &, TextSettings &, TextSettings &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { 0x80000000 | 8, 10 }, { 0x80000000 | 8, 11 }, { 0x80000000 | 8, 12 },
        }}),
        // Slot 'getSettings'
        QtMocHelpers::SlotData<void(TextSettings &, TextSettings &, TextSettings &, TextSettings &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { 0x80000000 | 8, 10 }, { 0x80000000 | 8, 11 }, { 0x80000000 | 8, 12 },
        }}),
        // Slot 'setDispScreen2Visible'
        QtMocHelpers::SlotData<void(bool)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 15 },
        }}),
        // Slot 'setDispScreen3Visible'
        QtMocHelpers::SlotData<void(bool)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 15 },
        }}),
        // Slot 'setDispScreen4Visible'
        QtMocHelpers::SlotData<void(bool)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 15 },
        }}),
        // Slot 'setBackgroungds'
        QtMocHelpers::SlotData<void(QString, QPixmap)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 19 }, { 0x80000000 | 5, 20 },
        }}),
        // Slot 'loadSettings'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBackground_clicked'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonDefault_clicked'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_checkBoxUseShadow_stateChanged'
        QtMocHelpers::SlotData<void(int)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 25 },
        }}),
        // Slot 'on_groupBoxUseDisp2_toggled'
        QtMocHelpers::SlotData<void(bool)>(26, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 25 },
        }}),
        // Slot 'on_groupBoxUseDisp3_toggled'
        QtMocHelpers::SlotData<void(bool)>(27, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 25 },
        }}),
        // Slot 'on_groupBoxUseDisp4_toggled'
        QtMocHelpers::SlotData<void(bool)>(28, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 25 },
        }}),
        // Slot 'on_checkBoxUseShadow2_stateChanged'
        QtMocHelpers::SlotData<void(int)>(29, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 25 },
        }}),
        // Slot 'on_checkBoxUseShadow3_stateChanged'
        QtMocHelpers::SlotData<void(int)>(30, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 25 },
        }}),
        // Slot 'on_checkBoxUseShadow4_stateChanged'
        QtMocHelpers::SlotData<void(int)>(31, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 25 },
        }}),
        // Slot 'on_buttonBackground2_clicked'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBackground3_clicked'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBackground4_clicked'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonColor_clicked'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonColor2_clicked'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonColor3_clicked'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonColor4_clicked'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonFont_clicked'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonFont2_clicked'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonFont3_clicked'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonFont4_clicked'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'getFontText'
        QtMocHelpers::SlotData<QString(QFont)>(43, 2, QMC::AccessPrivate, QMetaType::QString, {{
            { 0x80000000 | 44, 45 },
        }}),
        // Slot 'on_pushButtonApplyToAll_clicked'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AnnouncementSettingWidget, qt_meta_tag_ZN25AnnouncementSettingWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject AnnouncementSettingWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25AnnouncementSettingWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25AnnouncementSettingWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN25AnnouncementSettingWidgetE_t>.metaTypes,
    nullptr
} };

void AnnouncementSettingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AnnouncementSettingWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->applyBackToAll((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QPixmap>>(_a[3]))); break;
        case 1: _t->setSettings((*reinterpret_cast<std::add_pointer_t<TextSettings&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<TextSettings&>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<TextSettings&>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<TextSettings&>>(_a[4]))); break;
        case 2: _t->getSettings((*reinterpret_cast<std::add_pointer_t<TextSettings&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<TextSettings&>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<TextSettings&>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<TextSettings&>>(_a[4]))); break;
        case 3: _t->setDispScreen2Visible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->setDispScreen3Visible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->setDispScreen4Visible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->setBackgroungds((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPixmap>>(_a[2]))); break;
        case 7: _t->loadSettings(); break;
        case 8: _t->on_buttonBackground_clicked(); break;
        case 9: _t->on_pushButtonDefault_clicked(); break;
        case 10: _t->on_checkBoxUseShadow_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->on_groupBoxUseDisp2_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->on_groupBoxUseDisp3_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->on_groupBoxUseDisp4_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->on_checkBoxUseShadow2_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->on_checkBoxUseShadow3_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->on_checkBoxUseShadow4_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->on_buttonBackground2_clicked(); break;
        case 18: _t->on_buttonBackground3_clicked(); break;
        case 19: _t->on_buttonBackground4_clicked(); break;
        case 20: _t->on_toolButtonColor_clicked(); break;
        case 21: _t->on_toolButtonColor2_clicked(); break;
        case 22: _t->on_toolButtonColor3_clicked(); break;
        case 23: _t->on_toolButtonColor4_clicked(); break;
        case 24: _t->on_toolButtonFont_clicked(); break;
        case 25: _t->on_toolButtonFont2_clicked(); break;
        case 26: _t->on_toolButtonFont3_clicked(); break;
        case 27: _t->on_toolButtonFont4_clicked(); break;
        case 28: { QString _r = _t->getFontText((*reinterpret_cast<std::add_pointer_t<QFont>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 29: _t->on_pushButtonApplyToAll_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AnnouncementSettingWidget::*)(int , QString , QPixmap )>(_a, &AnnouncementSettingWidget::applyBackToAll, 0))
            return;
    }
}

const QMetaObject *AnnouncementSettingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnnouncementSettingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25AnnouncementSettingWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AnnouncementSettingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void AnnouncementSettingWidget::applyBackToAll(int _t1, QString _t2, QPixmap _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}
QT_WARNING_POP
