/****************************************************************************
** Meta object code from reading C++ file 'biblesettingwidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../headers/biblesettingwidget.hpp"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'biblesettingwidget.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18BibleSettingWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto BibleSettingWidget::qt_create_metaobjectdata<qt_meta_tag_ZN18BibleSettingWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "BibleSettingWidget",
        "applyBackToAll",
        "",
        "t",
        "backName",
        "QPixmap",
        "background",
        "setSettings",
        "BibleSettings&",
        "settings",
        "settings2",
        "settings3",
        "settings4",
        "getSettings",
        "setBibleVersions",
        "BibleVersionSettings&",
        "bver",
        "bver2",
        "bver3",
        "bver4",
        "getBibleVersions",
        "setDispScreen2Visible",
        "visible",
        "setDispScreen3Visible",
        "setDispScreen4Visible",
        "setBackgroungds",
        "name",
        "back",
        "loadSettings",
        "loadBibleVersions",
        "updateSecondaryBibleMenu",
        "updateSecondaryBibleMenu2",
        "updateSecondaryBibleMenu3",
        "updateSecondaryBibleMenu4",
        "updateTrinaryBibleMenu",
        "updateTrinaryBibleMenu2",
        "updateTrinaryBibleMenu3",
        "updateTrinaryBibleMenu4",
        "updateOperatorBibleMenu",
        "on_comboBoxPrimaryBible_activated",
        "arg1",
        "on_comboBoxPrimaryBible2_activated",
        "on_comboBoxPrimaryBible3_activated",
        "on_comboBoxPrimaryBible4_activated",
        "on_comboBoxSecondaryBible_activated",
        "on_comboBoxSecondaryBible2_activated",
        "on_comboBoxSecondaryBible3_activated",
        "on_comboBoxSecondaryBible4_activated",
        "on_buttonBrowseBackground_clicked",
        "on_buttonBrowseBackground2_clicked",
        "on_buttonBrowseBackground3_clicked",
        "on_buttonBrowseBackground4_clicked",
        "on_checkBoxUseShadow_stateChanged",
        "on_checkBoxUseShadow2_stateChanged",
        "on_checkBoxUseShadow3_stateChanged",
        "on_checkBoxUseShadow4_stateChanged",
        "on_toolButtonTextColor_clicked",
        "on_toolButtonTextColor2_clicked",
        "on_toolButtonTextColor3_clicked",
        "on_toolButtonTextColor4_clicked",
        "on_toolButtonTextFont_clicked",
        "on_toolButtonTextFont2_clicked",
        "on_toolButtonTextFont3_clicked",
        "on_toolButtonTextFont4_clicked",
        "on_toolButtonCaptionColor_clicked",
        "on_toolButtonCaptionColor2_clicked",
        "on_toolButtonCaptionColor3_clicked",
        "on_toolButtonCaptionColor4_clicked",
        "on_toolButtonCaptionFont_clicked",
        "on_toolButtonCaptionFont2_clicked",
        "on_toolButtonCaptionFont3_clicked",
        "on_toolButtonCaptionFont4_clicked",
        "on_groupBoxAddBackgroundToText_toggled",
        "on_groupBoxAddBackgroundToText2_toggled",
        "on_groupBoxAddBackgroundToText3_toggled",
        "on_groupBoxAddBackgroundToText4_toggled",
        "on_toolButtonAddBKColorText_clicked",
        "on_toolButtonChangeGenBKColor_clicked",
        "on_toolButtonAddBKColorText2_clicked",
        "on_toolButtonChangeGenBKColor2_clicked",
        "on_toolButtonAddBKColorText3_clicked",
        "on_toolButtonChangeGenBKColor3_clicked",
        "on_toolButtonAddBKColorText4_clicked",
        "on_toolButtonChangeGenBKColor4_clicked",
        "on_groupBoxUseDisp2_toggled",
        "on_groupBoxUseDisp3_toggled",
        "on_groupBoxUseDisp4_toggled",
        "on_pushButtonDefault_clicked",
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
        QtMocHelpers::SlotData<void(BibleSettings &, BibleSettings &, BibleSettings &, BibleSettings &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { 0x80000000 | 8, 10 }, { 0x80000000 | 8, 11 }, { 0x80000000 | 8, 12 },
        }}),
        // Slot 'getSettings'
        QtMocHelpers::SlotData<void(BibleSettings &, BibleSettings &, BibleSettings &, BibleSettings &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { 0x80000000 | 8, 10 }, { 0x80000000 | 8, 11 }, { 0x80000000 | 8, 12 },
        }}),
        // Slot 'setBibleVersions'
        QtMocHelpers::SlotData<void(BibleVersionSettings &, BibleVersionSettings &, BibleVersionSettings &, BibleVersionSettings &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 16 }, { 0x80000000 | 15, 17 }, { 0x80000000 | 15, 18 }, { 0x80000000 | 15, 19 },
        }}),
        // Slot 'getBibleVersions'
        QtMocHelpers::SlotData<void(BibleVersionSettings &, BibleVersionSettings &, BibleVersionSettings &, BibleVersionSettings &)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 16 }, { 0x80000000 | 15, 17 }, { 0x80000000 | 15, 18 }, { 0x80000000 | 15, 19 },
        }}),
        // Slot 'setDispScreen2Visible'
        QtMocHelpers::SlotData<void(bool)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'setDispScreen3Visible'
        QtMocHelpers::SlotData<void(bool)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'setDispScreen4Visible'
        QtMocHelpers::SlotData<void(bool)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'setBackgroungds'
        QtMocHelpers::SlotData<void(QString, QPixmap)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 26 }, { 0x80000000 | 5, 27 },
        }}),
        // Slot 'loadSettings'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'loadBibleVersions'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateSecondaryBibleMenu'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateSecondaryBibleMenu2'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateSecondaryBibleMenu3'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateSecondaryBibleMenu4'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateTrinaryBibleMenu'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateTrinaryBibleMenu2'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateTrinaryBibleMenu3'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateTrinaryBibleMenu4'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateOperatorBibleMenu'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_comboBoxPrimaryBible_activated'
        QtMocHelpers::SlotData<void(const QString &)>(39, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 40 },
        }}),
        // Slot 'on_comboBoxPrimaryBible2_activated'
        QtMocHelpers::SlotData<void(const QString &)>(41, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 40 },
        }}),
        // Slot 'on_comboBoxPrimaryBible3_activated'
        QtMocHelpers::SlotData<void(const QString &)>(42, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 40 },
        }}),
        // Slot 'on_comboBoxPrimaryBible4_activated'
        QtMocHelpers::SlotData<void(const QString &)>(43, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 40 },
        }}),
        // Slot 'on_comboBoxSecondaryBible_activated'
        QtMocHelpers::SlotData<void(const QString &)>(44, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 40 },
        }}),
        // Slot 'on_comboBoxSecondaryBible2_activated'
        QtMocHelpers::SlotData<void(const QString &)>(45, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 40 },
        }}),
        // Slot 'on_comboBoxSecondaryBible3_activated'
        QtMocHelpers::SlotData<void(const QString &)>(46, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 40 },
        }}),
        // Slot 'on_comboBoxSecondaryBible4_activated'
        QtMocHelpers::SlotData<void(const QString &)>(47, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 40 },
        }}),
        // Slot 'on_buttonBrowseBackground_clicked'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBrowseBackground2_clicked'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBrowseBackground3_clicked'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBrowseBackground4_clicked'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_checkBoxUseShadow_stateChanged'
        QtMocHelpers::SlotData<void(int)>(52, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 40 },
        }}),
        // Slot 'on_checkBoxUseShadow2_stateChanged'
        QtMocHelpers::SlotData<void(int)>(53, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 40 },
        }}),
        // Slot 'on_checkBoxUseShadow3_stateChanged'
        QtMocHelpers::SlotData<void(int)>(54, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 40 },
        }}),
        // Slot 'on_checkBoxUseShadow4_stateChanged'
        QtMocHelpers::SlotData<void(int)>(55, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 40 },
        }}),
        // Slot 'on_toolButtonTextColor_clicked'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonTextColor2_clicked'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonTextColor3_clicked'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonTextColor4_clicked'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonTextFont_clicked'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonTextFont2_clicked'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonTextFont3_clicked'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonTextFont4_clicked'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonCaptionColor_clicked'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonCaptionColor2_clicked'
        QtMocHelpers::SlotData<void()>(65, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonCaptionColor3_clicked'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonCaptionColor4_clicked'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonCaptionFont_clicked'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonCaptionFont2_clicked'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonCaptionFont3_clicked'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonCaptionFont4_clicked'
        QtMocHelpers::SlotData<void()>(71, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_groupBoxAddBackgroundToText_toggled'
        QtMocHelpers::SlotData<void(bool)>(72, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 40 },
        }}),
        // Slot 'on_groupBoxAddBackgroundToText2_toggled'
        QtMocHelpers::SlotData<void(bool)>(73, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 40 },
        }}),
        // Slot 'on_groupBoxAddBackgroundToText3_toggled'
        QtMocHelpers::SlotData<void(bool)>(74, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 40 },
        }}),
        // Slot 'on_groupBoxAddBackgroundToText4_toggled'
        QtMocHelpers::SlotData<void(bool)>(75, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 40 },
        }}),
        // Slot 'on_toolButtonAddBKColorText_clicked'
        QtMocHelpers::SlotData<void()>(76, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonChangeGenBKColor_clicked'
        QtMocHelpers::SlotData<void()>(77, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonAddBKColorText2_clicked'
        QtMocHelpers::SlotData<void()>(78, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonChangeGenBKColor2_clicked'
        QtMocHelpers::SlotData<void()>(79, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonAddBKColorText3_clicked'
        QtMocHelpers::SlotData<void()>(80, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonChangeGenBKColor3_clicked'
        QtMocHelpers::SlotData<void()>(81, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonAddBKColorText4_clicked'
        QtMocHelpers::SlotData<void()>(82, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonChangeGenBKColor4_clicked'
        QtMocHelpers::SlotData<void()>(83, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_groupBoxUseDisp2_toggled'
        QtMocHelpers::SlotData<void(bool)>(84, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 40 },
        }}),
        // Slot 'on_groupBoxUseDisp3_toggled'
        QtMocHelpers::SlotData<void(bool)>(85, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 40 },
        }}),
        // Slot 'on_groupBoxUseDisp4_toggled'
        QtMocHelpers::SlotData<void(bool)>(86, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 40 },
        }}),
        // Slot 'on_pushButtonDefault_clicked'
        QtMocHelpers::SlotData<void()>(87, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'getFontText'
        QtMocHelpers::SlotData<QString(QFont)>(88, 2, QMC::AccessPrivate, QMetaType::QString, {{
            { 0x80000000 | 89, 90 },
        }}),
        // Slot 'on_pushButtonApplyToAll_clicked'
        QtMocHelpers::SlotData<void()>(91, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BibleSettingWidget, qt_meta_tag_ZN18BibleSettingWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject BibleSettingWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18BibleSettingWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18BibleSettingWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18BibleSettingWidgetE_t>.metaTypes,
    nullptr
} };

void BibleSettingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BibleSettingWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->applyBackToAll((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QPixmap>>(_a[3]))); break;
        case 1: _t->setSettings((*reinterpret_cast<std::add_pointer_t<BibleSettings&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<BibleSettings&>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<BibleSettings&>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<BibleSettings&>>(_a[4]))); break;
        case 2: _t->getSettings((*reinterpret_cast<std::add_pointer_t<BibleSettings&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<BibleSettings&>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<BibleSettings&>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<BibleSettings&>>(_a[4]))); break;
        case 3: _t->setBibleVersions((*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[4]))); break;
        case 4: _t->getBibleVersions((*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[4]))); break;
        case 5: _t->setDispScreen2Visible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->setDispScreen3Visible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->setDispScreen4Visible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->setBackgroungds((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPixmap>>(_a[2]))); break;
        case 9: _t->loadSettings(); break;
        case 10: _t->loadBibleVersions(); break;
        case 11: _t->updateSecondaryBibleMenu(); break;
        case 12: _t->updateSecondaryBibleMenu2(); break;
        case 13: _t->updateSecondaryBibleMenu3(); break;
        case 14: _t->updateSecondaryBibleMenu4(); break;
        case 15: _t->updateTrinaryBibleMenu(); break;
        case 16: _t->updateTrinaryBibleMenu2(); break;
        case 17: _t->updateTrinaryBibleMenu3(); break;
        case 18: _t->updateTrinaryBibleMenu4(); break;
        case 19: _t->updateOperatorBibleMenu(); break;
        case 20: _t->on_comboBoxPrimaryBible_activated((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->on_comboBoxPrimaryBible2_activated((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 22: _t->on_comboBoxPrimaryBible3_activated((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: _t->on_comboBoxPrimaryBible4_activated((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->on_comboBoxSecondaryBible_activated((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 25: _t->on_comboBoxSecondaryBible2_activated((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 26: _t->on_comboBoxSecondaryBible3_activated((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->on_comboBoxSecondaryBible4_activated((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 28: _t->on_buttonBrowseBackground_clicked(); break;
        case 29: _t->on_buttonBrowseBackground2_clicked(); break;
        case 30: _t->on_buttonBrowseBackground3_clicked(); break;
        case 31: _t->on_buttonBrowseBackground4_clicked(); break;
        case 32: _t->on_checkBoxUseShadow_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 33: _t->on_checkBoxUseShadow2_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 34: _t->on_checkBoxUseShadow3_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 35: _t->on_checkBoxUseShadow4_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 36: _t->on_toolButtonTextColor_clicked(); break;
        case 37: _t->on_toolButtonTextColor2_clicked(); break;
        case 38: _t->on_toolButtonTextColor3_clicked(); break;
        case 39: _t->on_toolButtonTextColor4_clicked(); break;
        case 40: _t->on_toolButtonTextFont_clicked(); break;
        case 41: _t->on_toolButtonTextFont2_clicked(); break;
        case 42: _t->on_toolButtonTextFont3_clicked(); break;
        case 43: _t->on_toolButtonTextFont4_clicked(); break;
        case 44: _t->on_toolButtonCaptionColor_clicked(); break;
        case 45: _t->on_toolButtonCaptionColor2_clicked(); break;
        case 46: _t->on_toolButtonCaptionColor3_clicked(); break;
        case 47: _t->on_toolButtonCaptionColor4_clicked(); break;
        case 48: _t->on_toolButtonCaptionFont_clicked(); break;
        case 49: _t->on_toolButtonCaptionFont2_clicked(); break;
        case 50: _t->on_toolButtonCaptionFont3_clicked(); break;
        case 51: _t->on_toolButtonCaptionFont4_clicked(); break;
        case 52: _t->on_groupBoxAddBackgroundToText_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 53: _t->on_groupBoxAddBackgroundToText2_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 54: _t->on_groupBoxAddBackgroundToText3_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 55: _t->on_groupBoxAddBackgroundToText4_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 56: _t->on_toolButtonAddBKColorText_clicked(); break;
        case 57: _t->on_toolButtonChangeGenBKColor_clicked(); break;
        case 58: _t->on_toolButtonAddBKColorText2_clicked(); break;
        case 59: _t->on_toolButtonChangeGenBKColor2_clicked(); break;
        case 60: _t->on_toolButtonAddBKColorText3_clicked(); break;
        case 61: _t->on_toolButtonChangeGenBKColor3_clicked(); break;
        case 62: _t->on_toolButtonAddBKColorText4_clicked(); break;
        case 63: _t->on_toolButtonChangeGenBKColor4_clicked(); break;
        case 64: _t->on_groupBoxUseDisp2_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 65: _t->on_groupBoxUseDisp3_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 66: _t->on_groupBoxUseDisp4_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 67: _t->on_pushButtonDefault_clicked(); break;
        case 68: { QString _r = _t->getFontText((*reinterpret_cast<std::add_pointer_t<QFont>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 69: _t->on_pushButtonApplyToAll_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (BibleSettingWidget::*)(int , QString , QPixmap )>(_a, &BibleSettingWidget::applyBackToAll, 0))
            return;
    }
}

const QMetaObject *BibleSettingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BibleSettingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18BibleSettingWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BibleSettingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 70)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 70;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 70)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 70;
    }
    return _id;
}

// SIGNAL 0
void BibleSettingWidget::applyBackToAll(int _t1, QString _t2, QPixmap _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}
QT_WARNING_POP
