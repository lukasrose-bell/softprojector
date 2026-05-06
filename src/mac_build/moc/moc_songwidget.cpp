/****************************************************************************
** Meta object code from reading C++ file 'songwidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../headers/songwidget.hpp"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'songwidget.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10SongWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto SongWidget::qt_create_metaobjectdata<qt_meta_tag_ZN10SongWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SongWidget",
        "setWaitCursor",
        "",
        "setArrowCursor",
        "sendSong",
        "Song",
        "song",
        "currentItem",
        "addToSchedule",
        "Song&",
        "retranslateUis",
        "deleteSong",
        "getSongToEdit",
        "updateSongbooks",
        "isSongSelected",
        "updateSongFromDatabase",
        "songid",
        "initial_sid",
        "addNewSong",
        "getSplitterState",
        "setSplitterState",
        "QByteArray&",
        "state",
        "sendToPreviewFromSchedule",
        "sendToProjector",
        "row",
        "songsViewRowChanged",
        "QModelIndex",
        "current",
        "previous",
        "setSearchActive",
        "on_comboBoxCategory_currentIndexChanged",
        "index",
        "on_listPreview_doubleClicked",
        "on_songs_view_clicked",
        "on_song_num_spinbox_editingFinished",
        "on_songs_view_doubleClicked",
        "on_lineEditSearch_textEdited",
        "Text",
        "on_btnLive_clicked",
        "on_song_num_spinbox_valueChanged",
        "value",
        "on_songbook_menu_currentIndexChanged",
        "selectMatchingSong",
        "title",
        "sendToPreview",
        "loadSongbooks",
        "updateButtonStates",
        "filterModeChanged",
        "loadCategories",
        "ui_update",
        "on_pushButtonSearch_clicked",
        "on_pushButtonClearResults_clicked",
        "on_comboBoxFilterType_currentIndexChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'setWaitCursor'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'setArrowCursor'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sendSong'
        QtMocHelpers::SignalData<void(Song, int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 }, { QMetaType::Int, 7 },
        }}),
        // Signal 'addToSchedule'
        QtMocHelpers::SignalData<void(Song &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 6 },
        }}),
        // Slot 'retranslateUis'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'deleteSong'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'getSongToEdit'
        QtMocHelpers::SlotData<Song()>(12, 2, QMC::AccessPublic, 0x80000000 | 5),
        // Slot 'updateSongbooks'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'isSongSelected'
        QtMocHelpers::SlotData<bool()>(14, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'updateSongFromDatabase'
        QtMocHelpers::SlotData<void(int, int)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'addNewSong'
        QtMocHelpers::SlotData<void(Song, int)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'getSplitterState'
        QtMocHelpers::SlotData<QByteArray()>(19, 2, QMC::AccessPublic, QMetaType::QByteArray),
        // Slot 'setSplitterState'
        QtMocHelpers::SlotData<void(QByteArray &)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 22 },
        }}),
        // Slot 'sendToPreviewFromSchedule'
        QtMocHelpers::SlotData<void(Song &)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 6 },
        }}),
        // Slot 'sendToProjector'
        QtMocHelpers::SlotData<void(Song, int)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 }, { QMetaType::Int, 25 },
        }}),
        // Slot 'songsViewRowChanged'
        QtMocHelpers::SlotData<void(const QModelIndex &, const QModelIndex &)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 27, 28 }, { 0x80000000 | 27, 29 },
        }}),
        // Slot 'setSearchActive'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_comboBoxCategory_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(31, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 32 },
        }}),
        // Slot 'on_listPreview_doubleClicked'
        QtMocHelpers::SlotData<void(QModelIndex)>(33, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 27, 32 },
        }}),
        // Slot 'on_songs_view_clicked'
        QtMocHelpers::SlotData<void(QModelIndex)>(34, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 27, 32 },
        }}),
        // Slot 'on_song_num_spinbox_editingFinished'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_songs_view_doubleClicked'
        QtMocHelpers::SlotData<void(QModelIndex)>(36, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 27, 32 },
        }}),
        // Slot 'on_lineEditSearch_textEdited'
        QtMocHelpers::SlotData<void(QString)>(37, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 38 },
        }}),
        // Slot 'on_btnLive_clicked'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_song_num_spinbox_valueChanged'
        QtMocHelpers::SlotData<void(int)>(40, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 41 },
        }}),
        // Slot 'on_songbook_menu_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(42, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 32 },
        }}),
        // Slot 'selectMatchingSong'
        QtMocHelpers::SlotData<void(QString)>(43, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 44 },
        }}),
        // Slot 'sendToPreview'
        QtMocHelpers::SlotData<void(Song)>(45, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'loadSongbooks'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateButtonStates'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'filterModeChanged'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'loadCategories'
        QtMocHelpers::SlotData<void(bool)>(49, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 50 },
        }}),
        // Slot 'on_pushButtonSearch_clicked'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonClearResults_clicked'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_comboBoxFilterType_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(53, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 32 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SongWidget, qt_meta_tag_ZN10SongWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SongWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10SongWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10SongWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10SongWidgetE_t>.metaTypes,
    nullptr
} };

void SongWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SongWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setWaitCursor(); break;
        case 1: _t->setArrowCursor(); break;
        case 2: _t->sendSong((*reinterpret_cast<std::add_pointer_t<Song>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->addToSchedule((*reinterpret_cast<std::add_pointer_t<Song&>>(_a[1]))); break;
        case 4: _t->retranslateUis(); break;
        case 5: _t->deleteSong(); break;
        case 6: { Song _r = _t->getSongToEdit();
            if (_a[0]) *reinterpret_cast<Song*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->updateSongbooks(); break;
        case 8: { bool _r = _t->isSongSelected();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->updateSongFromDatabase((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 10: _t->addNewSong((*reinterpret_cast<std::add_pointer_t<Song>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 11: { QByteArray _r = _t->getSplitterState();
            if (_a[0]) *reinterpret_cast<QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->setSplitterState((*reinterpret_cast<std::add_pointer_t<QByteArray&>>(_a[1]))); break;
        case 13: _t->sendToPreviewFromSchedule((*reinterpret_cast<std::add_pointer_t<Song&>>(_a[1]))); break;
        case 14: _t->sendToProjector((*reinterpret_cast<std::add_pointer_t<Song>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 15: _t->songsViewRowChanged((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 16: _t->setSearchActive(); break;
        case 17: _t->on_comboBoxCategory_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->on_listPreview_doubleClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 19: _t->on_songs_view_clicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 20: _t->on_song_num_spinbox_editingFinished(); break;
        case 21: _t->on_songs_view_doubleClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 22: _t->on_lineEditSearch_textEdited((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: _t->on_btnLive_clicked(); break;
        case 24: _t->on_song_num_spinbox_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 25: _t->on_songbook_menu_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 26: _t->selectMatchingSong((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->sendToPreview((*reinterpret_cast<std::add_pointer_t<Song>>(_a[1]))); break;
        case 28: _t->loadSongbooks(); break;
        case 29: _t->updateButtonStates(); break;
        case 30: _t->filterModeChanged(); break;
        case 31: _t->loadCategories((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 32: _t->on_pushButtonSearch_clicked(); break;
        case 33: _t->on_pushButtonClearResults_clicked(); break;
        case 34: _t->on_comboBoxFilterType_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SongWidget::*)()>(_a, &SongWidget::setWaitCursor, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SongWidget::*)()>(_a, &SongWidget::setArrowCursor, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SongWidget::*)(Song , int )>(_a, &SongWidget::sendSong, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SongWidget::*)(Song & )>(_a, &SongWidget::addToSchedule, 3))
            return;
    }
}

const QMetaObject *SongWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SongWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10SongWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SongWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 35;
    }
    return _id;
}

// SIGNAL 0
void SongWidget::setWaitCursor()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SongWidget::setArrowCursor()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SongWidget::sendSong(Song _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void SongWidget::addToSchedule(Song & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
