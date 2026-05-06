/********************************************************************************
** Form generated from reading UI file 'managedatadialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEDATADIALOG_H
#define UI_MANAGEDATADIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageDataDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *ok_pushButton;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QTableView *bibleTableView;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButtonDownBible;
    QPushButton *import_bible_pushButton;
    QPushButton *edit_bible_pushButton;
    QPushButton *export_bible_pushButton;
    QPushButton *delete_bible_pushButton;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_2;
    QTableView *songbookTableView;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonDownSong;
    QPushButton *import_songbook_pushButton;
    QPushButton *edit_songbook_pushButton;
    QPushButton *export_songbook_pushButton;
    QPushButton *delete_songbook_pushButton;
    QSpacerItem *verticalSpacer;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_3;
    QTableView *TableViewTheme;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonDownTheme;
    QPushButton *pushButtonThemeImport;
    QPushButton *pushButtonThemeNew;
    QPushButton *pushButtonThemeEdit;
    QPushButton *pushButtonThemeExport;
    QPushButton *pushButtonThemeExportAll;
    QPushButton *pushButtonThemeDelete;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *ManageDataDialog)
    {
        if (ManageDataDialog->objectName().isEmpty())
            ManageDataDialog->setObjectName("ManageDataDialog");
        ManageDataDialog->resize(657, 404);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/database.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ManageDataDialog->setWindowIcon(icon);
        ManageDataDialog->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(ManageDataDialog);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(216, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        ok_pushButton = new QPushButton(ManageDataDialog);
        ok_pushButton->setObjectName("ok_pushButton");

        gridLayout->addWidget(ok_pushButton, 1, 1, 1, 1);

        tabWidget = new QTabWidget(ManageDataDialog);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setObjectName("horizontalLayout");
        bibleTableView = new QTableView(tab);
        bibleTableView->setObjectName("bibleTableView");
        bibleTableView->horizontalHeader()->setStretchLastSection(true);
        bibleTableView->verticalHeader()->setStretchLastSection(false);

        horizontalLayout->addWidget(bibleTableView);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        pushButtonDownBible = new QPushButton(tab);
        pushButtonDownBible->setObjectName("pushButtonDownBible");
        pushButtonDownBible->setEnabled(true);

        verticalLayout_3->addWidget(pushButtonDownBible);

        import_bible_pushButton = new QPushButton(tab);
        import_bible_pushButton->setObjectName("import_bible_pushButton");
        import_bible_pushButton->setAutoDefault(false);

        verticalLayout_3->addWidget(import_bible_pushButton);

        edit_bible_pushButton = new QPushButton(tab);
        edit_bible_pushButton->setObjectName("edit_bible_pushButton");

        verticalLayout_3->addWidget(edit_bible_pushButton);

        export_bible_pushButton = new QPushButton(tab);
        export_bible_pushButton->setObjectName("export_bible_pushButton");

        verticalLayout_3->addWidget(export_bible_pushButton);

        delete_bible_pushButton = new QPushButton(tab);
        delete_bible_pushButton->setObjectName("delete_bible_pushButton");

        verticalLayout_3->addWidget(delete_bible_pushButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_3);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/book.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        tabWidget->addTab(tab, icon1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        horizontalLayout_2 = new QHBoxLayout(tab_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        songbookTableView = new QTableView(tab_2);
        songbookTableView->setObjectName("songbookTableView");
        songbookTableView->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout_2->addWidget(songbookTableView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pushButtonDownSong = new QPushButton(tab_2);
        pushButtonDownSong->setObjectName("pushButtonDownSong");

        verticalLayout->addWidget(pushButtonDownSong);

        import_songbook_pushButton = new QPushButton(tab_2);
        import_songbook_pushButton->setObjectName("import_songbook_pushButton");

        verticalLayout->addWidget(import_songbook_pushButton);

        edit_songbook_pushButton = new QPushButton(tab_2);
        edit_songbook_pushButton->setObjectName("edit_songbook_pushButton");

        verticalLayout->addWidget(edit_songbook_pushButton);

        export_songbook_pushButton = new QPushButton(tab_2);
        export_songbook_pushButton->setObjectName("export_songbook_pushButton");

        verticalLayout->addWidget(export_songbook_pushButton);

        delete_songbook_pushButton = new QPushButton(tab_2);
        delete_songbook_pushButton->setObjectName("delete_songbook_pushButton");

        verticalLayout->addWidget(delete_songbook_pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/song_tab.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        tabWidget->addTab(tab_2, icon2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        horizontalLayout_3 = new QHBoxLayout(tab_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        TableViewTheme = new QTableView(tab_3);
        TableViewTheme->setObjectName("TableViewTheme");
        TableViewTheme->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout_3->addWidget(TableViewTheme);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButtonDownTheme = new QPushButton(tab_3);
        pushButtonDownTheme->setObjectName("pushButtonDownTheme");

        verticalLayout_2->addWidget(pushButtonDownTheme);

        pushButtonThemeImport = new QPushButton(tab_3);
        pushButtonThemeImport->setObjectName("pushButtonThemeImport");

        verticalLayout_2->addWidget(pushButtonThemeImport);

        pushButtonThemeNew = new QPushButton(tab_3);
        pushButtonThemeNew->setObjectName("pushButtonThemeNew");

        verticalLayout_2->addWidget(pushButtonThemeNew);

        pushButtonThemeEdit = new QPushButton(tab_3);
        pushButtonThemeEdit->setObjectName("pushButtonThemeEdit");

        verticalLayout_2->addWidget(pushButtonThemeEdit);

        pushButtonThemeExport = new QPushButton(tab_3);
        pushButtonThemeExport->setObjectName("pushButtonThemeExport");

        verticalLayout_2->addWidget(pushButtonThemeExport);

        pushButtonThemeExportAll = new QPushButton(tab_3);
        pushButtonThemeExportAll->setObjectName("pushButtonThemeExportAll");

        verticalLayout_2->addWidget(pushButtonThemeExportAll);

        pushButtonThemeDelete = new QPushButton(tab_3);
        pushButtonThemeDelete->setObjectName("pushButtonThemeDelete");

        verticalLayout_2->addWidget(pushButtonThemeDelete);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        horizontalLayout_3->addLayout(verticalLayout_2);

        tabWidget->addTab(tab_3, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 2);

        QWidget::setTabOrder(tabWidget, bibleTableView);
        QWidget::setTabOrder(bibleTableView, pushButtonDownBible);
        QWidget::setTabOrder(pushButtonDownBible, import_bible_pushButton);
        QWidget::setTabOrder(import_bible_pushButton, edit_bible_pushButton);
        QWidget::setTabOrder(edit_bible_pushButton, export_bible_pushButton);
        QWidget::setTabOrder(export_bible_pushButton, delete_bible_pushButton);
        QWidget::setTabOrder(delete_bible_pushButton, ok_pushButton);
        QWidget::setTabOrder(ok_pushButton, songbookTableView);
        QWidget::setTabOrder(songbookTableView, pushButtonDownSong);
        QWidget::setTabOrder(pushButtonDownSong, import_songbook_pushButton);
        QWidget::setTabOrder(import_songbook_pushButton, edit_songbook_pushButton);
        QWidget::setTabOrder(edit_songbook_pushButton, export_songbook_pushButton);
        QWidget::setTabOrder(export_songbook_pushButton, delete_songbook_pushButton);
        QWidget::setTabOrder(delete_songbook_pushButton, TableViewTheme);
        QWidget::setTabOrder(TableViewTheme, pushButtonDownTheme);
        QWidget::setTabOrder(pushButtonDownTheme, pushButtonThemeImport);
        QWidget::setTabOrder(pushButtonThemeImport, pushButtonThemeNew);
        QWidget::setTabOrder(pushButtonThemeNew, pushButtonThemeEdit);
        QWidget::setTabOrder(pushButtonThemeEdit, pushButtonThemeExport);
        QWidget::setTabOrder(pushButtonThemeExport, pushButtonThemeExportAll);
        QWidget::setTabOrder(pushButtonThemeExportAll, pushButtonThemeDelete);

        retranslateUi(ManageDataDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ManageDataDialog);
    } // setupUi

    void retranslateUi(QDialog *ManageDataDialog)
    {
        ManageDataDialog->setWindowTitle(QCoreApplication::translate("ManageDataDialog", "Manage Database", nullptr));
#if QT_CONFIG(tooltip)
        ok_pushButton->setToolTip(QCoreApplication::translate("ManageDataDialog", "Close Manage Database Dialog", nullptr));
#endif // QT_CONFIG(tooltip)
        ok_pushButton->setText(QCoreApplication::translate("ManageDataDialog", "Close", nullptr));
#if QT_CONFIG(shortcut)
        ok_pushButton->setShortcut(QCoreApplication::translate("ManageDataDialog", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButtonDownBible->setText(QCoreApplication::translate("ManageDataDialog", "Download\n"
"&& Import...", nullptr));
#if QT_CONFIG(tooltip)
        import_bible_pushButton->setToolTip(QCoreApplication::translate("ManageDataDialog", "Import a new Bible into your database", nullptr));
#endif // QT_CONFIG(tooltip)
        import_bible_pushButton->setText(QCoreApplication::translate("ManageDataDialog", "&Import...", nullptr));
#if QT_CONFIG(shortcut)
        import_bible_pushButton->setShortcut(QCoreApplication::translate("ManageDataDialog", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        edit_bible_pushButton->setToolTip(QCoreApplication::translate("ManageDataDialog", "Edit Bible title of currently selected Bible.", nullptr));
#endif // QT_CONFIG(tooltip)
        edit_bible_pushButton->setText(QCoreApplication::translate("ManageDataDialog", "&Edit...", nullptr));
#if QT_CONFIG(shortcut)
        edit_bible_pushButton->setShortcut(QCoreApplication::translate("ManageDataDialog", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        export_bible_pushButton->setToolTip(QCoreApplication::translate("ManageDataDialog", "Export currently selected Bible to share with others.", nullptr));
#endif // QT_CONFIG(tooltip)
        export_bible_pushButton->setText(QCoreApplication::translate("ManageDataDialog", "E&xport...", nullptr));
#if QT_CONFIG(shortcut)
        export_bible_pushButton->setShortcut(QCoreApplication::translate("ManageDataDialog", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        delete_bible_pushButton->setToolTip(QCoreApplication::translate("ManageDataDialog", "Delete a Bible that you will no longer want to use in this program.", nullptr));
#endif // QT_CONFIG(tooltip)
        delete_bible_pushButton->setText(QCoreApplication::translate("ManageDataDialog", "&Delete...", nullptr));
#if QT_CONFIG(shortcut)
        delete_bible_pushButton->setShortcut(QCoreApplication::translate("ManageDataDialog", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("ManageDataDialog", "Bibles", nullptr));
        pushButtonDownSong->setText(QCoreApplication::translate("ManageDataDialog", "Download\n"
"&& Import...", nullptr));
#if QT_CONFIG(tooltip)
        import_songbook_pushButton->setToolTip(QCoreApplication::translate("ManageDataDialog", "Import a new Songbook into database.", nullptr));
#endif // QT_CONFIG(tooltip)
        import_songbook_pushButton->setText(QCoreApplication::translate("ManageDataDialog", "&Import...", nullptr));
#if QT_CONFIG(shortcut)
        import_songbook_pushButton->setShortcut(QCoreApplication::translate("ManageDataDialog", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        edit_songbook_pushButton->setToolTip(QCoreApplication::translate("ManageDataDialog", "Edit the title and information about the Songbook.", nullptr));
#endif // QT_CONFIG(tooltip)
        edit_songbook_pushButton->setText(QCoreApplication::translate("ManageDataDialog", "&Edit...", nullptr));
#if QT_CONFIG(shortcut)
        edit_songbook_pushButton->setShortcut(QCoreApplication::translate("ManageDataDialog", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        export_songbook_pushButton->setToolTip(QCoreApplication::translate("ManageDataDialog", "Export currently selected Songbook to be able to share with others and for backup.", nullptr));
#endif // QT_CONFIG(tooltip)
        export_songbook_pushButton->setText(QCoreApplication::translate("ManageDataDialog", "E&xport...", nullptr));
#if QT_CONFIG(shortcut)
        export_songbook_pushButton->setShortcut(QCoreApplication::translate("ManageDataDialog", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        delete_songbook_pushButton->setToolTip(QCoreApplication::translate("ManageDataDialog", "Delete currently selected Songbook from database.", nullptr));
#endif // QT_CONFIG(tooltip)
        delete_songbook_pushButton->setText(QCoreApplication::translate("ManageDataDialog", "&Delete...", nullptr));
#if QT_CONFIG(shortcut)
        delete_songbook_pushButton->setShortcut(QCoreApplication::translate("ManageDataDialog", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("ManageDataDialog", "Songbooks", nullptr));
        pushButtonDownTheme->setText(QCoreApplication::translate("ManageDataDialog", "Download\n"
"&& Import...", nullptr));
#if QT_CONFIG(tooltip)
        pushButtonThemeImport->setToolTip(QCoreApplication::translate("ManageDataDialog", "Import a new Songbook into database.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonThemeImport->setText(QCoreApplication::translate("ManageDataDialog", "&Import...", nullptr));
#if QT_CONFIG(shortcut)
        pushButtonThemeImport->setShortcut(QCoreApplication::translate("ManageDataDialog", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        pushButtonThemeNew->setToolTip(QCoreApplication::translate("ManageDataDialog", "Import a new Songbook into database.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonThemeNew->setText(QCoreApplication::translate("ManageDataDialog", "&New...", nullptr));
#if QT_CONFIG(shortcut)
        pushButtonThemeNew->setShortcut(QCoreApplication::translate("ManageDataDialog", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        pushButtonThemeEdit->setToolTip(QCoreApplication::translate("ManageDataDialog", "Edit the title and information about the Songbook.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonThemeEdit->setText(QCoreApplication::translate("ManageDataDialog", "&Edit...", nullptr));
#if QT_CONFIG(shortcut)
        pushButtonThemeEdit->setShortcut(QCoreApplication::translate("ManageDataDialog", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        pushButtonThemeExport->setToolTip(QCoreApplication::translate("ManageDataDialog", "Export currently selected Songbook to be able to share with others and for backup.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonThemeExport->setText(QCoreApplication::translate("ManageDataDialog", "E&xport...", nullptr));
#if QT_CONFIG(shortcut)
        pushButtonThemeExport->setShortcut(QCoreApplication::translate("ManageDataDialog", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        pushButtonThemeExportAll->setToolTip(QCoreApplication::translate("ManageDataDialog", "Export currently selected Songbook to be able to share with others and for backup.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonThemeExportAll->setText(QCoreApplication::translate("ManageDataDialog", "Export All...", nullptr));
#if QT_CONFIG(shortcut)
        pushButtonThemeExportAll->setShortcut(QCoreApplication::translate("ManageDataDialog", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        pushButtonThemeDelete->setToolTip(QCoreApplication::translate("ManageDataDialog", "Delete currently selected Songbook from database.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonThemeDelete->setText(QCoreApplication::translate("ManageDataDialog", "&Delete...", nullptr));
#if QT_CONFIG(shortcut)
        pushButtonThemeDelete->setShortcut(QCoreApplication::translate("ManageDataDialog", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("ManageDataDialog", "Themes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageDataDialog: public Ui_ManageDataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEDATADIALOG_H
