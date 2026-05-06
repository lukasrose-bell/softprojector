/****************************************************************************
** Meta object code from reading C++ file 'editwidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../headers/editwidget.hpp"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editwidget.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10EditWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto EditWidget::qt_create_metaobjectdata<qt_meta_tag_ZN10EditWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EditWidget",
        "updateSongFromDatabase",
        "",
        "songid",
        "initial_song_id",
        "addedNew",
        "Song",
        "song",
        "setCopy",
        "copy",
        "setEdit",
        "sEdit",
        "setNew",
        "categories",
        "retranslateUis",
        "addNewSong",
        "msgNewSongbook",
        "msgCaption",
        "addSongbook",
        "on_btnCancel_clicked",
        "on_btnSave_clicked",
        "resetUiItems",
        "setUiItems",
        "setSave",
        "setSongbook",
        "id",
        "loadCategories",
        "ui_update",
        "resetLyric",
        "lyric",
        "setSongText",
        "text",
        "isInDatabase",
        "Song*",
        "on_checkBoxSongSettings_toggled",
        "checked",
        "updateColor",
        "updateInfoColor",
        "updateEndingColor",
        "on_pushButtonPrint_clicked",
        "on_toolButtonMainColor_clicked",
        "on_toolButtonMainFont_clicked",
        "on_toolButtonInfoColor_clicked",
        "on_toolButtonFont_clicked",
        "on_toolButtonEndingColor_clicked",
        "on_toolButtonEndingFont_clicked",
        "on_checkBoxUseBackground_toggled",
        "on_toolButtonBrowseBackground_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'updateSongFromDatabase'
        QtMocHelpers::SignalData<void(int, int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 4 },
        }}),
        // Signal 'addedNew'
        QtMocHelpers::SignalData<void(Song, int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { QMetaType::Int, 4 },
        }}),
        // Slot 'setCopy'
        QtMocHelpers::SlotData<void(Song)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 9 },
        }}),
        // Slot 'setEdit'
        QtMocHelpers::SlotData<void(Song)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 11 },
        }}),
        // Slot 'setNew'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'categories'
        QtMocHelpers::SlotData<QStringList()>(13, 2, QMC::AccessPublic, QMetaType::QStringList),
        // Slot 'retranslateUis'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'addNewSong'
        QtMocHelpers::SlotData<void(Song, QString, QString)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { QMetaType::QString, 16 }, { QMetaType::QString, 17 },
        }}),
        // Slot 'addSongbook'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnCancel_clicked'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnSave_clicked'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'resetUiItems'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setUiItems'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setSave'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setSongbook'
        QtMocHelpers::SlotData<void(int)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 25 },
        }}),
        // Slot 'loadCategories'
        QtMocHelpers::SlotData<void(bool)>(26, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 27 },
        }}),
        // Slot 'resetLyric'
        QtMocHelpers::SlotData<QString(QString)>(28, 2, QMC::AccessPrivate, QMetaType::QString, {{
            { QMetaType::QString, 29 },
        }}),
        // Slot 'setSongText'
        QtMocHelpers::SlotData<QString(QString)>(30, 2, QMC::AccessPrivate, QMetaType::QString, {{
            { QMetaType::QString, 31 },
        }}),
        // Slot 'isInDatabase'
        QtMocHelpers::SlotData<int(Song *)>(32, 2, QMC::AccessPrivate, QMetaType::Int, {{
            { 0x80000000 | 33, 7 },
        }}),
        // Slot 'on_checkBoxSongSettings_toggled'
        QtMocHelpers::SlotData<void(bool)>(34, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 35 },
        }}),
        // Slot 'updateColor'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateInfoColor'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateEndingColor'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonPrint_clicked'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonMainColor_clicked'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonMainFont_clicked'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonInfoColor_clicked'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonFont_clicked'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonEndingColor_clicked'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonEndingFont_clicked'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_checkBoxUseBackground_toggled'
        QtMocHelpers::SlotData<void(bool)>(46, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 35 },
        }}),
        // Slot 'on_toolButtonBrowseBackground_clicked'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EditWidget, qt_meta_tag_ZN10EditWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject EditWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10EditWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10EditWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10EditWidgetE_t>.metaTypes,
    nullptr
} };

void EditWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EditWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->updateSongFromDatabase((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->addedNew((*reinterpret_cast<std::add_pointer_t<Song>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->setCopy((*reinterpret_cast<std::add_pointer_t<Song>>(_a[1]))); break;
        case 3: _t->setEdit((*reinterpret_cast<std::add_pointer_t<Song>>(_a[1]))); break;
        case 4: _t->setNew(); break;
        case 5: { QStringList _r = _t->categories();
            if (_a[0]) *reinterpret_cast<QStringList*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->retranslateUis(); break;
        case 7: _t->addNewSong((*reinterpret_cast<std::add_pointer_t<Song>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 8: _t->addSongbook(); break;
        case 9: _t->on_btnCancel_clicked(); break;
        case 10: _t->on_btnSave_clicked(); break;
        case 11: _t->resetUiItems(); break;
        case 12: _t->setUiItems(); break;
        case 13: _t->setSave(); break;
        case 14: _t->setSongbook((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->loadCategories((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: { QString _r = _t->resetLyric((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 17: { QString _r = _t->setSongText((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 18: { int _r = _t->isInDatabase((*reinterpret_cast<std::add_pointer_t<Song*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 19: _t->on_checkBoxSongSettings_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->updateColor(); break;
        case 21: _t->updateInfoColor(); break;
        case 22: _t->updateEndingColor(); break;
        case 23: _t->on_pushButtonPrint_clicked(); break;
        case 24: _t->on_toolButtonMainColor_clicked(); break;
        case 25: _t->on_toolButtonMainFont_clicked(); break;
        case 26: _t->on_toolButtonInfoColor_clicked(); break;
        case 27: _t->on_toolButtonFont_clicked(); break;
        case 28: _t->on_toolButtonEndingColor_clicked(); break;
        case 29: _t->on_toolButtonEndingFont_clicked(); break;
        case 30: _t->on_checkBoxUseBackground_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 31: _t->on_toolButtonBrowseBackground_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (EditWidget::*)(int , int )>(_a, &EditWidget::updateSongFromDatabase, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (EditWidget::*)(Song , int )>(_a, &EditWidget::addedNew, 1))
            return;
    }
}

const QMetaObject *EditWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10EditWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EditWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void EditWidget::updateSongFromDatabase(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void EditWidget::addedNew(Song _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}
QT_WARNING_POP
