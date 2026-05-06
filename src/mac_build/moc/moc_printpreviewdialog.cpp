/****************************************************************************
** Meta object code from reading C++ file 'printpreviewdialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../headers/printpreviewdialog.hpp"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'printpreviewdialog.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18PrintPreviewDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto PrintPreviewDialog::qt_create_metaobjectdata<qt_meta_tag_ZN18PrintPreviewDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PrintPreviewDialog",
        "setText",
        "",
        "Song",
        "song",
        "bible",
        "book",
        "chapter",
        "Announcement",
        "announce",
        "setSchedule",
        "scheduleName",
        "QList<Schedule>",
        "schedule",
        "printDetail",
        "on_fontComboBox_currentFontChanged",
        "QFont",
        "f",
        "on_spinBoxFontSize_valueChanged",
        "arg1",
        "on_pushButtonPDF_clicked",
        "on_pushButtonPrint_clicked",
        "on_comboBox_currentIndexChanged",
        "index",
        "updateMargins",
        "on_doubleSpinBoxLeft_editingFinished",
        "on_doubleSpinBoxTop_editingFinished",
        "on_doubleSpinBoxRight_editingFinished",
        "on_doubleSpinBoxBottom_editingFinished"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setText'
        QtMocHelpers::SlotData<void(Song)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'setText'
        QtMocHelpers::SlotData<void(QString, QString, int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 }, { QMetaType::QString, 6 }, { QMetaType::Int, 7 },
        }}),
        // Slot 'setText'
        QtMocHelpers::SlotData<void(Announcement)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'setSchedule'
        QtMocHelpers::SlotData<void(QString, const QList<Schedule> &, bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 11 }, { 0x80000000 | 12, 13 }, { QMetaType::Bool, 14 },
        }}),
        // Slot 'on_fontComboBox_currentFontChanged'
        QtMocHelpers::SlotData<void(const QFont &)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 16, 17 },
        }}),
        // Slot 'on_spinBoxFontSize_valueChanged'
        QtMocHelpers::SlotData<void(int)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 19 },
        }}),
        // Slot 'on_pushButtonPDF_clicked'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonPrint_clicked'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_comboBox_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 23 },
        }}),
        // Slot 'updateMargins'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_doubleSpinBoxLeft_editingFinished'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_doubleSpinBoxTop_editingFinished'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_doubleSpinBoxRight_editingFinished'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_doubleSpinBoxBottom_editingFinished'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PrintPreviewDialog, qt_meta_tag_ZN18PrintPreviewDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PrintPreviewDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18PrintPreviewDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18PrintPreviewDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18PrintPreviewDialogE_t>.metaTypes,
    nullptr
} };

void PrintPreviewDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PrintPreviewDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setText((*reinterpret_cast<std::add_pointer_t<Song>>(_a[1]))); break;
        case 1: _t->setText((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 2: _t->setText((*reinterpret_cast<std::add_pointer_t<Announcement>>(_a[1]))); break;
        case 3: _t->setSchedule((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QList<Schedule>>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        case 4: _t->on_fontComboBox_currentFontChanged((*reinterpret_cast<std::add_pointer_t<QFont>>(_a[1]))); break;
        case 5: _t->on_spinBoxFontSize_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_pushButtonPDF_clicked(); break;
        case 7: _t->on_pushButtonPrint_clicked(); break;
        case 8: _t->on_comboBox_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->updateMargins(); break;
        case 10: _t->on_doubleSpinBoxLeft_editingFinished(); break;
        case 11: _t->on_doubleSpinBoxTop_editingFinished(); break;
        case 12: _t->on_doubleSpinBoxRight_editingFinished(); break;
        case 13: _t->on_doubleSpinBoxBottom_editingFinished(); break;
        default: ;
        }
    }
}

const QMetaObject *PrintPreviewDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrintPreviewDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18PrintPreviewDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PrintPreviewDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
