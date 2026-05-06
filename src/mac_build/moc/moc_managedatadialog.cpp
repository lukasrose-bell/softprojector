/****************************************************************************
** Meta object code from reading C++ file 'managedatadialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../headers/managedatadialog.hpp"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'managedatadialog.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16ManageDataDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto ManageDataDialog::qt_create_metaobjectdata<qt_meta_tag_ZN16ManageDataDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ManageDataDialog",
        "setMainWaitCursor",
        "",
        "setMainArrowCursor",
        "load_songbooks",
        "loadThemes",
        "setDataDir",
        "QDir&",
        "d",
        "get3",
        "i",
        "getVerseId",
        "book",
        "chapter",
        "verse",
        "setWaitCursor",
        "setArrowCursor",
        "on_songbookTableView_clicked",
        "QModelIndex",
        "index",
        "on_bibleTableView_clicked",
        "updateBibleButtons",
        "updateSongbookButtons",
        "updateThemeButtons",
        "on_edit_bible_pushButton_clicked",
        "on_edit_songbook_pushButton_clicked",
        "on_delete_bible_pushButton_clicked",
        "on_export_bible_pushButton_clicked",
        "on_import_bible_pushButton_clicked",
        "on_ok_pushButton_clicked",
        "on_delete_songbook_pushButton_clicked",
        "on_export_songbook_pushButton_clicked",
        "on_import_songbook_pushButton_clicked",
        "deleteBible",
        "Bibles",
        "bilbe",
        "importBible",
        "path",
        "exportBible",
        "bible",
        "deleteSongbook",
        "Songbook",
        "songbook",
        "importSongbook",
        "exportSongbook",
        "load_bibles",
        "toMultiLine",
        "QString&",
        "mline",
        "toSingleLine",
        "sline",
        "on_pushButtonThemeNew_clicked",
        "on_pushButtonThemeImport_clicked",
        "on_pushButtonThemeEdit_clicked",
        "on_pushButtonThemeExport_clicked",
        "on_pushButtonThemeDelete_clicked",
        "on_TableViewTheme_clicked",
        "deleteTheme",
        "ThemeInfo",
        "tme",
        "on_pushButtonThemeExportAll_clicked",
        "exportTheme",
        "all",
        "transferTheme",
        "QSqlQuery&",
        "sqf",
        "sqt",
        "transferThemeAnnounce",
        "tmId",
        "transferThemeBible",
        "transferThemePassive",
        "transferThemeSong",
        "importTheme",
        "on_pushButtonDownBible_clicked",
        "on_pushButtonDownSong_clicked",
        "on_pushButtonDownTheme_clicked",
        "downloadModList",
        "QUrl",
        "url",
        "downloadNextMod",
        "getSaveFileName",
        "saveModFile",
        "downloadModListCompleted",
        "downloadCompleted",
        "dowloadProgress",
        "recBytes",
        "totBytes",
        "getModList",
        "filepath",
        "importNextModule",
        "importModules",
        "cleanSongLines",
        "songText"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'setMainWaitCursor'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'setMainArrowCursor'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'load_songbooks'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'loadThemes'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setDataDir'
        QtMocHelpers::SlotData<void(QDir &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Slot 'get3'
        QtMocHelpers::SlotData<QString(int)>(9, 2, QMC::AccessPrivate, QMetaType::QString, {{
            { QMetaType::Int, 10 },
        }}),
        // Slot 'getVerseId'
        QtMocHelpers::SlotData<QString(QString, QString, QString)>(11, 2, QMC::AccessPrivate, QMetaType::QString, {{
            { QMetaType::QString, 12 }, { QMetaType::QString, 13 }, { QMetaType::QString, 14 },
        }}),
        // Slot 'setWaitCursor'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setArrowCursor'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_songbookTableView_clicked'
        QtMocHelpers::SlotData<void(QModelIndex)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Slot 'on_bibleTableView_clicked'
        QtMocHelpers::SlotData<void(QModelIndex)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Slot 'updateBibleButtons'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateSongbookButtons'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateThemeButtons'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_edit_bible_pushButton_clicked'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_edit_songbook_pushButton_clicked'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_delete_bible_pushButton_clicked'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_export_bible_pushButton_clicked'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_import_bible_pushButton_clicked'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_ok_pushButton_clicked'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_delete_songbook_pushButton_clicked'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_export_songbook_pushButton_clicked'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_import_songbook_pushButton_clicked'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'deleteBible'
        QtMocHelpers::SlotData<void(Bibles)>(33, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 34, 35 },
        }}),
        // Slot 'importBible'
        QtMocHelpers::SlotData<void(QString)>(36, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 37 },
        }}),
        // Slot 'exportBible'
        QtMocHelpers::SlotData<void(QString, Bibles)>(38, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 37 }, { 0x80000000 | 34, 39 },
        }}),
        // Slot 'deleteSongbook'
        QtMocHelpers::SlotData<void(Songbook)>(40, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 41, 42 },
        }}),
        // Slot 'importSongbook'
        QtMocHelpers::SlotData<void(QString)>(43, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 37 },
        }}),
        // Slot 'exportSongbook'
        QtMocHelpers::SlotData<void(QString)>(44, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 37 },
        }}),
        // Slot 'load_bibles'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'toMultiLine'
        QtMocHelpers::SlotData<void(QString &)>(46, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 47, 48 },
        }}),
        // Slot 'toSingleLine'
        QtMocHelpers::SlotData<void(QString &)>(49, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 47, 50 },
        }}),
        // Slot 'on_pushButtonThemeNew_clicked'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonThemeImport_clicked'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonThemeEdit_clicked'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonThemeExport_clicked'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonThemeDelete_clicked'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_TableViewTheme_clicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(56, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Slot 'deleteTheme'
        QtMocHelpers::SlotData<void(ThemeInfo)>(57, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 58, 59 },
        }}),
        // Slot 'on_pushButtonThemeExportAll_clicked'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'exportTheme'
        QtMocHelpers::SlotData<void(QString, bool)>(61, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 37 }, { QMetaType::Bool, 62 },
        }}),
        // Slot 'transferTheme'
        QtMocHelpers::SlotData<void(QSqlQuery &, QSqlQuery &)>(63, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 64, 65 }, { 0x80000000 | 64, 66 },
        }}),
        // Slot 'transferThemeAnnounce'
        QtMocHelpers::SlotData<void(QSqlQuery &, QSqlQuery &, int)>(67, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 64, 65 }, { 0x80000000 | 64, 66 }, { QMetaType::Int, 68 },
        }}),
        // Slot 'transferThemeBible'
        QtMocHelpers::SlotData<void(QSqlQuery &, QSqlQuery &, int)>(69, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 64, 65 }, { 0x80000000 | 64, 66 }, { QMetaType::Int, 68 },
        }}),
        // Slot 'transferThemePassive'
        QtMocHelpers::SlotData<void(QSqlQuery &, QSqlQuery &, int)>(70, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 64, 65 }, { 0x80000000 | 64, 66 }, { QMetaType::Int, 68 },
        }}),
        // Slot 'transferThemeSong'
        QtMocHelpers::SlotData<void(QSqlQuery &, QSqlQuery &, int)>(71, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 64, 65 }, { 0x80000000 | 64, 66 }, { QMetaType::Int, 68 },
        }}),
        // Slot 'importTheme'
        QtMocHelpers::SlotData<void(QString)>(72, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 37 },
        }}),
        // Slot 'on_pushButtonDownBible_clicked'
        QtMocHelpers::SlotData<void()>(73, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonDownSong_clicked'
        QtMocHelpers::SlotData<void()>(74, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonDownTheme_clicked'
        QtMocHelpers::SlotData<void()>(75, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'downloadModList'
        QtMocHelpers::SlotData<void(QUrl)>(76, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 77, 78 },
        }}),
        // Slot 'downloadNextMod'
        QtMocHelpers::SlotData<void()>(79, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'getSaveFileName'
        QtMocHelpers::SlotData<QString(QUrl)>(80, 2, QMC::AccessPrivate, QMetaType::QString, {{
            { 0x80000000 | 77, 78 },
        }}),
        // Slot 'saveModFile'
        QtMocHelpers::SlotData<void()>(81, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'downloadModListCompleted'
        QtMocHelpers::SlotData<void()>(82, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'downloadCompleted'
        QtMocHelpers::SlotData<void()>(83, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'dowloadProgress'
        QtMocHelpers::SlotData<void(qint64, qint64)>(84, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::LongLong, 85 }, { QMetaType::LongLong, 86 },
        }}),
        // Slot 'getModList'
        QtMocHelpers::SlotData<QStringList(QString)>(87, 2, QMC::AccessPrivate, QMetaType::QStringList, {{
            { QMetaType::QString, 88 },
        }}),
        // Slot 'importNextModule'
        QtMocHelpers::SlotData<void()>(89, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'importModules'
        QtMocHelpers::SlotData<void()>(90, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'cleanSongLines'
        QtMocHelpers::SlotData<QString(QString)>(91, 2, QMC::AccessPrivate, QMetaType::QString, {{
            { QMetaType::QString, 92 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ManageDataDialog, qt_meta_tag_ZN16ManageDataDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ManageDataDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16ManageDataDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16ManageDataDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16ManageDataDialogE_t>.metaTypes,
    nullptr
} };

void ManageDataDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ManageDataDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setMainWaitCursor(); break;
        case 1: _t->setMainArrowCursor(); break;
        case 2: _t->load_songbooks(); break;
        case 3: _t->loadThemes(); break;
        case 4: _t->setDataDir((*reinterpret_cast<std::add_pointer_t<QDir&>>(_a[1]))); break;
        case 5: { QString _r = _t->get3((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->getVerseId((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->setWaitCursor(); break;
        case 8: _t->setArrowCursor(); break;
        case 9: _t->on_songbookTableView_clicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 10: _t->on_bibleTableView_clicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 11: _t->updateBibleButtons(); break;
        case 12: _t->updateSongbookButtons(); break;
        case 13: _t->updateThemeButtons(); break;
        case 14: _t->on_edit_bible_pushButton_clicked(); break;
        case 15: _t->on_edit_songbook_pushButton_clicked(); break;
        case 16: _t->on_delete_bible_pushButton_clicked(); break;
        case 17: _t->on_export_bible_pushButton_clicked(); break;
        case 18: _t->on_import_bible_pushButton_clicked(); break;
        case 19: _t->on_ok_pushButton_clicked(); break;
        case 20: _t->on_delete_songbook_pushButton_clicked(); break;
        case 21: _t->on_export_songbook_pushButton_clicked(); break;
        case 22: _t->on_import_songbook_pushButton_clicked(); break;
        case 23: _t->deleteBible((*reinterpret_cast<std::add_pointer_t<Bibles>>(_a[1]))); break;
        case 24: _t->importBible((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 25: _t->exportBible((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Bibles>>(_a[2]))); break;
        case 26: _t->deleteSongbook((*reinterpret_cast<std::add_pointer_t<Songbook>>(_a[1]))); break;
        case 27: _t->importSongbook((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 28: _t->exportSongbook((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 29: _t->load_bibles(); break;
        case 30: _t->toMultiLine((*reinterpret_cast<std::add_pointer_t<QString&>>(_a[1]))); break;
        case 31: _t->toSingleLine((*reinterpret_cast<std::add_pointer_t<QString&>>(_a[1]))); break;
        case 32: _t->on_pushButtonThemeNew_clicked(); break;
        case 33: _t->on_pushButtonThemeImport_clicked(); break;
        case 34: _t->on_pushButtonThemeEdit_clicked(); break;
        case 35: _t->on_pushButtonThemeExport_clicked(); break;
        case 36: _t->on_pushButtonThemeDelete_clicked(); break;
        case 37: _t->on_TableViewTheme_clicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 38: _t->deleteTheme((*reinterpret_cast<std::add_pointer_t<ThemeInfo>>(_a[1]))); break;
        case 39: _t->on_pushButtonThemeExportAll_clicked(); break;
        case 40: _t->exportTheme((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 41: _t->transferTheme((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[2]))); break;
        case 42: _t->transferThemeAnnounce((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 43: _t->transferThemeBible((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 44: _t->transferThemePassive((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 45: _t->transferThemeSong((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 46: _t->importTheme((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 47: _t->on_pushButtonDownBible_clicked(); break;
        case 48: _t->on_pushButtonDownSong_clicked(); break;
        case 49: _t->on_pushButtonDownTheme_clicked(); break;
        case 50: _t->downloadModList((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 51: _t->downloadNextMod(); break;
        case 52: { QString _r = _t->getSaveFileName((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 53: _t->saveModFile(); break;
        case 54: _t->downloadModListCompleted(); break;
        case 55: _t->downloadCompleted(); break;
        case 56: _t->dowloadProgress((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qint64>>(_a[2]))); break;
        case 57: { QStringList _r = _t->getModList((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QStringList*>(_a[0]) = std::move(_r); }  break;
        case 58: _t->importNextModule(); break;
        case 59: _t->importModules(); break;
        case 60: { QString _r = _t->cleanSongLines((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ManageDataDialog::*)()>(_a, &ManageDataDialog::setMainWaitCursor, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ManageDataDialog::*)()>(_a, &ManageDataDialog::setMainArrowCursor, 1))
            return;
    }
}

const QMetaObject *ManageDataDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ManageDataDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16ManageDataDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ManageDataDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 61)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 61;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 61)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 61;
    }
    return _id;
}

// SIGNAL 0
void ManageDataDialog::setMainWaitCursor()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ManageDataDialog::setMainArrowCursor()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
