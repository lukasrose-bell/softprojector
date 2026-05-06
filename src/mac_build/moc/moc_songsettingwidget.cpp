/****************************************************************************
** Meta object code from reading C++ file 'songsettingwidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../headers/songsettingwidget.hpp"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'songsettingwidget.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17SongSettingWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto SongSettingWidget::qt_create_metaobjectdata<qt_meta_tag_ZN17SongSettingWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SongSettingWidget",
        "applyBackToAll",
        "",
        "t",
        "backName",
        "QPixmap",
        "background",
        "getSettings",
        "SongSettings&",
        "settings",
        "settings2",
        "settings3",
        "settings4",
        "setSettings",
        "setDispScreen2Visible",
        "visible",
        "setDispScreen3Visible",
        "setDispScreen4Visible",
        "setBackgroungds",
        "name",
        "back",
        "loadSettings",
        "on_checkBoxUseShadow_stateChanged",
        "arg1",
        "on_checkBoxUseShadow2_stateChanged",
        "on_checkBoxUseShadow3_stateChanged",
        "on_checkBoxUseShadow4_stateChanged",
        "on_toolButtonInfoColor_clicked",
        "on_toolButtonInfoColor2_clicked",
        "on_toolButtonInfoColor3_clicked",
        "on_toolButtonInfoColor4_clicked",
        "on_toolButtonInfoFont_clicked",
        "on_toolButtonInfoFont2_clicked",
        "on_toolButtonInfoFont3_clicked",
        "on_toolButtonInfoFont4_clicked",
        "on_toolButtonEndingColor_clicked",
        "on_toolButtonEndingColor2_clicked",
        "on_toolButtonEndingColor3_clicked",
        "on_toolButtonEndingColor4_clicked",
        "on_toolButtonEndingFont_clicked",
        "on_toolButtonEndingFont2_clicked",
        "on_toolButtonEndingFont3_clicked",
        "on_toolButtonEndingFont4_clicked",
        "on_buttonSongBackground_clicked",
        "on_buttonSongBackground2_clicked",
        "on_buttonSongBackground3_clicked",
        "on_buttonSongBackground4_clicked",
        "on_toolButtonColor_clicked",
        "on_toolButtonColor2_clicked",
        "on_toolButtonColor3_clicked",
        "on_toolButtonColor4_clicked",
        "on_toolButtonFont_clicked",
        "on_toolButtonFont2_clicked",
        "on_toolButtonFont3_clicked",
        "on_toolButtonFont4_clicked",
        "on_groupBoxSongAddBKToText_toggled",
        "on_groupBoxSongAddBKToText2_toggled",
        "on_groupBoxSongAddBKToText3_toggled",
        "on_groupBoxSongAddBKToText4_toggled",
        "on_tBSongAddBKColorText_clicked",
        "on_tBSongAddBKColorText2_clicked",
        "on_tBSongAddBKColorText3_clicked",
        "on_tBSongAddBKColorText4_clicked",
        "on_tBSongChangeGenBKColor_clicked",
        "on_tBSongChangeGenBKColor2_clicked",
        "on_tBSongChangeGenBKColor3_clicked",
        "on_tBSongChangeGenBKColor4_clicked",
        "on_groupBoxDisplay2_toggled",
        "on_groupBoxDisplay3_toggled",
        "on_groupBoxDisplay4_toggled",
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
        // Slot 'getSettings'
        QtMocHelpers::SlotData<void(SongSettings &, SongSettings &, SongSettings &, SongSettings &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { 0x80000000 | 8, 10 }, { 0x80000000 | 8, 11 }, { 0x80000000 | 8, 12 },
        }}),
        // Slot 'setSettings'
        QtMocHelpers::SlotData<void(SongSettings &, SongSettings &, SongSettings &, SongSettings &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
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
        // Slot 'on_checkBoxUseShadow_stateChanged'
        QtMocHelpers::SlotData<void(int)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 23 },
        }}),
        // Slot 'on_checkBoxUseShadow2_stateChanged'
        QtMocHelpers::SlotData<void(int)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 23 },
        }}),
        // Slot 'on_checkBoxUseShadow3_stateChanged'
        QtMocHelpers::SlotData<void(int)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 23 },
        }}),
        // Slot 'on_checkBoxUseShadow4_stateChanged'
        QtMocHelpers::SlotData<void(int)>(26, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 23 },
        }}),
        // Slot 'on_toolButtonInfoColor_clicked'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonInfoColor2_clicked'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonInfoColor3_clicked'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonInfoColor4_clicked'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonInfoFont_clicked'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonInfoFont2_clicked'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonInfoFont3_clicked'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonInfoFont4_clicked'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonEndingColor_clicked'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonEndingColor2_clicked'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonEndingColor3_clicked'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonEndingColor4_clicked'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonEndingFont_clicked'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonEndingFont2_clicked'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonEndingFont3_clicked'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonEndingFont4_clicked'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonSongBackground_clicked'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonSongBackground2_clicked'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonSongBackground3_clicked'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonSongBackground4_clicked'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonColor_clicked'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonColor2_clicked'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonColor3_clicked'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonColor4_clicked'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonFont_clicked'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonFont2_clicked'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonFont3_clicked'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonFont4_clicked'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_groupBoxSongAddBKToText_toggled'
        QtMocHelpers::SlotData<void(bool)>(55, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 23 },
        }}),
        // Slot 'on_groupBoxSongAddBKToText2_toggled'
        QtMocHelpers::SlotData<void(bool)>(56, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 23 },
        }}),
        // Slot 'on_groupBoxSongAddBKToText3_toggled'
        QtMocHelpers::SlotData<void(bool)>(57, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 23 },
        }}),
        // Slot 'on_groupBoxSongAddBKToText4_toggled'
        QtMocHelpers::SlotData<void(bool)>(58, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 23 },
        }}),
        // Slot 'on_tBSongAddBKColorText_clicked'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_tBSongAddBKColorText2_clicked'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_tBSongAddBKColorText3_clicked'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_tBSongAddBKColorText4_clicked'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_tBSongChangeGenBKColor_clicked'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_tBSongChangeGenBKColor2_clicked'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_tBSongChangeGenBKColor3_clicked'
        QtMocHelpers::SlotData<void()>(65, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_tBSongChangeGenBKColor4_clicked'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_groupBoxDisplay2_toggled'
        QtMocHelpers::SlotData<void(bool)>(67, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 23 },
        }}),
        // Slot 'on_groupBoxDisplay3_toggled'
        QtMocHelpers::SlotData<void(bool)>(68, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 23 },
        }}),
        // Slot 'on_groupBoxDisplay4_toggled'
        QtMocHelpers::SlotData<void(bool)>(69, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 23 },
        }}),
        // Slot 'on_pushButtonDefault_clicked'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'getFontText'
        QtMocHelpers::SlotData<QString(QFont)>(71, 2, QMC::AccessPrivate, QMetaType::QString, {{
            { 0x80000000 | 72, 73 },
        }}),
        // Slot 'on_pushButtonApplyToAll_clicked'
        QtMocHelpers::SlotData<void()>(74, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SongSettingWidget, qt_meta_tag_ZN17SongSettingWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SongSettingWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17SongSettingWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17SongSettingWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17SongSettingWidgetE_t>.metaTypes,
    nullptr
} };

void SongSettingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SongSettingWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->applyBackToAll((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QPixmap>>(_a[3]))); break;
        case 1: _t->getSettings((*reinterpret_cast<std::add_pointer_t<SongSettings&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<SongSettings&>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<SongSettings&>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<SongSettings&>>(_a[4]))); break;
        case 2: _t->setSettings((*reinterpret_cast<std::add_pointer_t<SongSettings&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<SongSettings&>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<SongSettings&>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<SongSettings&>>(_a[4]))); break;
        case 3: _t->setDispScreen2Visible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->setDispScreen3Visible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->setDispScreen4Visible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->setBackgroungds((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPixmap>>(_a[2]))); break;
        case 7: _t->loadSettings(); break;
        case 8: _t->on_checkBoxUseShadow_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->on_checkBoxUseShadow2_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->on_checkBoxUseShadow3_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->on_checkBoxUseShadow4_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->on_toolButtonInfoColor_clicked(); break;
        case 13: _t->on_toolButtonInfoColor2_clicked(); break;
        case 14: _t->on_toolButtonInfoColor3_clicked(); break;
        case 15: _t->on_toolButtonInfoColor4_clicked(); break;
        case 16: _t->on_toolButtonInfoFont_clicked(); break;
        case 17: _t->on_toolButtonInfoFont2_clicked(); break;
        case 18: _t->on_toolButtonInfoFont3_clicked(); break;
        case 19: _t->on_toolButtonInfoFont4_clicked(); break;
        case 20: _t->on_toolButtonEndingColor_clicked(); break;
        case 21: _t->on_toolButtonEndingColor2_clicked(); break;
        case 22: _t->on_toolButtonEndingColor3_clicked(); break;
        case 23: _t->on_toolButtonEndingColor4_clicked(); break;
        case 24: _t->on_toolButtonEndingFont_clicked(); break;
        case 25: _t->on_toolButtonEndingFont2_clicked(); break;
        case 26: _t->on_toolButtonEndingFont3_clicked(); break;
        case 27: _t->on_toolButtonEndingFont4_clicked(); break;
        case 28: _t->on_buttonSongBackground_clicked(); break;
        case 29: _t->on_buttonSongBackground2_clicked(); break;
        case 30: _t->on_buttonSongBackground3_clicked(); break;
        case 31: _t->on_buttonSongBackground4_clicked(); break;
        case 32: _t->on_toolButtonColor_clicked(); break;
        case 33: _t->on_toolButtonColor2_clicked(); break;
        case 34: _t->on_toolButtonColor3_clicked(); break;
        case 35: _t->on_toolButtonColor4_clicked(); break;
        case 36: _t->on_toolButtonFont_clicked(); break;
        case 37: _t->on_toolButtonFont2_clicked(); break;
        case 38: _t->on_toolButtonFont3_clicked(); break;
        case 39: _t->on_toolButtonFont4_clicked(); break;
        case 40: _t->on_groupBoxSongAddBKToText_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 41: _t->on_groupBoxSongAddBKToText2_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 42: _t->on_groupBoxSongAddBKToText3_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 43: _t->on_groupBoxSongAddBKToText4_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 44: _t->on_tBSongAddBKColorText_clicked(); break;
        case 45: _t->on_tBSongAddBKColorText2_clicked(); break;
        case 46: _t->on_tBSongAddBKColorText3_clicked(); break;
        case 47: _t->on_tBSongAddBKColorText4_clicked(); break;
        case 48: _t->on_tBSongChangeGenBKColor_clicked(); break;
        case 49: _t->on_tBSongChangeGenBKColor2_clicked(); break;
        case 50: _t->on_tBSongChangeGenBKColor3_clicked(); break;
        case 51: _t->on_tBSongChangeGenBKColor4_clicked(); break;
        case 52: _t->on_groupBoxDisplay2_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 53: _t->on_groupBoxDisplay3_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 54: _t->on_groupBoxDisplay4_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 55: _t->on_pushButtonDefault_clicked(); break;
        case 56: { QString _r = _t->getFontText((*reinterpret_cast<std::add_pointer_t<QFont>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 57: _t->on_pushButtonApplyToAll_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SongSettingWidget::*)(int , QString , QPixmap )>(_a, &SongSettingWidget::applyBackToAll, 0))
            return;
    }
}

const QMetaObject *SongSettingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SongSettingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17SongSettingWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SongSettingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 58)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 58;
    }
    return _id;
}

// SIGNAL 0
void SongSettingWidget::applyBackToAll(int _t1, QString _t2, QPixmap _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}
QT_WARNING_POP
