/****************************************************************************
** Meta object code from reading C++ file 'biblewidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../headers/biblewidget.hpp"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'biblewidget.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11BibleWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto BibleWidget::qt_create_metaobjectdata<qt_meta_tag_ZN11BibleWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "BibleWidget",
        "setWaitCursor",
        "",
        "setArrowCursor",
        "goLive",
        "chapter_list",
        "caption",
        "QItemSelection",
        "selectItems",
        "getHiddenSplitterState",
        "getShownSplitterState",
        "setHiddenSplitterState",
        "QByteArray&",
        "state",
        "setShownSplitterState",
        "loadBibles",
        "initialId",
        "sendToProjector",
        "add_to_history",
        "setSettings",
        "BibleVersionSettings&",
        "sets",
        "getCurrentVerse",
        "BibleHistory",
        "addToHistory",
        "BibleHistory&",
        "b",
        "clearHistory",
        "setSelectedHistory",
        "isVerseSelected",
        "setBibleBookActive",
        "setBibleSearchActive",
        "on_history_listWidget_doubleClicked",
        "QModelIndex",
        "index",
        "on_history_listWidget_currentRowChanged",
        "currentRow",
        "on_search_results_list_doubleClicked",
        "on_search_results_list_currentRowChanged",
        "on_hide_result_button_clicked",
        "on_search_button_clicked",
        "on_chapter_ef_textChanged",
        "new_string",
        "on_verse_ef_textChanged",
        "on_btnLive_clicked",
        "on_lineEditBook_textChanged",
        "on_chapter_preview_list_doubleClicked",
        "on_chapter_preview_list_currentRowChanged",
        "on_listChapterNum_currentTextChanged",
        "currentText",
        "on_listBook_currentTextChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'setWaitCursor'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'setArrowCursor'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'goLive'
        QtMocHelpers::SignalData<void(QStringList, QString, QItemSelection)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 5 }, { QMetaType::QString, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Slot 'getHiddenSplitterState'
        QtMocHelpers::SlotData<QByteArray()>(9, 2, QMC::AccessPublic, QMetaType::QByteArray),
        // Slot 'getShownSplitterState'
        QtMocHelpers::SlotData<QByteArray()>(10, 2, QMC::AccessPublic, QMetaType::QByteArray),
        // Slot 'setHiddenSplitterState'
        QtMocHelpers::SlotData<void(QByteArray &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'setShownSplitterState'
        QtMocHelpers::SlotData<void(QByteArray &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'loadBibles'
        QtMocHelpers::SlotData<void(QString)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 16 },
        }}),
        // Slot 'sendToProjector'
        QtMocHelpers::SlotData<void(bool)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Slot 'setSettings'
        QtMocHelpers::SlotData<void(BibleVersionSettings &)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 20, 21 },
        }}),
        // Slot 'getCurrentVerse'
        QtMocHelpers::SlotData<BibleHistory()>(22, 2, QMC::AccessPublic, 0x80000000 | 23),
        // Slot 'addToHistory'
        QtMocHelpers::SlotData<void(BibleHistory &)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 25, 26 },
        }}),
        // Slot 'clearHistory'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setSelectedHistory'
        QtMocHelpers::SlotData<void(BibleHistory &)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 25, 26 },
        }}),
        // Slot 'isVerseSelected'
        QtMocHelpers::SlotData<bool()>(29, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'setBibleBookActive'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setBibleSearchActive'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_history_listWidget_doubleClicked'
        QtMocHelpers::SlotData<void(QModelIndex)>(32, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 33, 34 },
        }}),
        // Slot 'on_history_listWidget_currentRowChanged'
        QtMocHelpers::SlotData<void(int)>(35, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 36 },
        }}),
        // Slot 'on_search_results_list_doubleClicked'
        QtMocHelpers::SlotData<void(QModelIndex)>(37, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 33, 34 },
        }}),
        // Slot 'on_search_results_list_currentRowChanged'
        QtMocHelpers::SlotData<void(int)>(38, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 36 },
        }}),
        // Slot 'on_hide_result_button_clicked'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_search_button_clicked'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_chapter_ef_textChanged'
        QtMocHelpers::SlotData<void(QString)>(41, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 42 },
        }}),
        // Slot 'on_verse_ef_textChanged'
        QtMocHelpers::SlotData<void(QString)>(43, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 42 },
        }}),
        // Slot 'on_btnLive_clicked'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_lineEditBook_textChanged'
        QtMocHelpers::SlotData<void(QString)>(45, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'on_chapter_preview_list_doubleClicked'
        QtMocHelpers::SlotData<void(QModelIndex)>(46, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 33, 34 },
        }}),
        // Slot 'on_chapter_preview_list_currentRowChanged'
        QtMocHelpers::SlotData<void(int)>(47, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 36 },
        }}),
        // Slot 'on_listChapterNum_currentTextChanged'
        QtMocHelpers::SlotData<void(QString)>(48, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 49 },
        }}),
        // Slot 'on_listBook_currentTextChanged'
        QtMocHelpers::SlotData<void(QString)>(50, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 49 },
        }}),
        // Slot 'addToHistory'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BibleWidget, qt_meta_tag_ZN11BibleWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject BibleWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11BibleWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11BibleWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11BibleWidgetE_t>.metaTypes,
    nullptr
} };

void BibleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BibleWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setWaitCursor(); break;
        case 1: _t->setArrowCursor(); break;
        case 2: _t->goLive((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QItemSelection>>(_a[3]))); break;
        case 3: { QByteArray _r = _t->getHiddenSplitterState();
            if (_a[0]) *reinterpret_cast<QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 4: { QByteArray _r = _t->getShownSplitterState();
            if (_a[0]) *reinterpret_cast<QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setHiddenSplitterState((*reinterpret_cast<std::add_pointer_t<QByteArray&>>(_a[1]))); break;
        case 6: _t->setShownSplitterState((*reinterpret_cast<std::add_pointer_t<QByteArray&>>(_a[1]))); break;
        case 7: _t->loadBibles((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->sendToProjector((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->setSettings((*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[1]))); break;
        case 10: { BibleHistory _r = _t->getCurrentVerse();
            if (_a[0]) *reinterpret_cast<BibleHistory*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->addToHistory((*reinterpret_cast<std::add_pointer_t<BibleHistory&>>(_a[1]))); break;
        case 12: _t->clearHistory(); break;
        case 13: _t->setSelectedHistory((*reinterpret_cast<std::add_pointer_t<BibleHistory&>>(_a[1]))); break;
        case 14: { bool _r = _t->isVerseSelected();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->setBibleBookActive(); break;
        case 16: _t->setBibleSearchActive(); break;
        case 17: _t->on_history_listWidget_doubleClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 18: _t->on_history_listWidget_currentRowChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->on_search_results_list_doubleClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 20: _t->on_search_results_list_currentRowChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->on_hide_result_button_clicked(); break;
        case 22: _t->on_search_button_clicked(); break;
        case 23: _t->on_chapter_ef_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->on_verse_ef_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 25: _t->on_btnLive_clicked(); break;
        case 26: _t->on_lineEditBook_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->on_chapter_preview_list_doubleClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 28: _t->on_chapter_preview_list_currentRowChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 29: _t->on_listChapterNum_currentTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 30: _t->on_listBook_currentTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 31: _t->addToHistory(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (BibleWidget::*)()>(_a, &BibleWidget::setWaitCursor, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (BibleWidget::*)()>(_a, &BibleWidget::setArrowCursor, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (BibleWidget::*)(QStringList , QString , QItemSelection )>(_a, &BibleWidget::goLive, 2))
            return;
    }
}

const QMetaObject *BibleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BibleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11BibleWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BibleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void BibleWidget::setWaitCursor()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BibleWidget::setArrowCursor()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void BibleWidget::goLive(QStringList _t1, QString _t2, QItemSelection _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2, _t3);
}
QT_WARNING_POP
