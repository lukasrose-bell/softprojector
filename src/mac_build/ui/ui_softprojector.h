/********************************************************************************
** Form generated from reading UI file 'softprojector.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOFTPROJECTOR_H
#define UI_SOFTPROJECTOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SoftProjectorClass
{
public:
    QAction *actionAbout;
    QAction *actionSettings;
    QAction *actionClose;
    QAction *actionManage_Database;
    QAction *action_Help;
    QAction *actionSong_Counter;
    QAction *actionOpenSchedule;
    QAction *actionSaveSchedule;
    QAction *actionSaveScheduleAs;
    QAction *actionNewSchedule;
    QAction *actionCloseSchedule;
    QAction *actionPrint;
    QAction *actionPrintSchedule;
    QAction *actionNew;
    QAction *actionEdit;
    QAction *actionCopy;
    QAction *actionDelete;
    QAction *actionDonate;
    QAction *actionScheduleAdd;
    QAction *actionScheduleRemove;
    QAction *actionScheduleClear;
    QAction *actionMoveScheduleTop;
    QAction *actionMoveScheduleUp;
    QAction *actionMoveScheduleDown;
    QAction *actionMoveScheduleBottom;
    QAction *actionShow;
    QAction *actionHide;
    QAction *actionClear;
    QAction *actionCloseDisplay;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QListWidget *listWidgetSchedule;
    QTabWidget *projectTab;
    QWidget *Tab;
    QGridLayout *gridLayout_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayoutDisplayControls;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelIcon;
    QLabel *labelShow;
    QWidget *widgetMultiVerse;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *rbMultiVerse;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelSongNotes;
    QListWidget *listShow;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QMenu *menuLanguage;
    QMenu *menuSongs;
    QMenu *menuSchedule;
    QMenu *menuDisplay_Screen;
    QToolBar *toolBarFile;
    QToolBar *toolBarSchedule;
    QToolBar *toolBarEdit;
    QToolBar *toolBarShow;

    void setupUi(QMainWindow *SoftProjectorClass)
    {
        if (SoftProjectorClass->objectName().isEmpty())
            SoftProjectorClass->setObjectName("SoftProjectorClass");
        SoftProjectorClass->resize(1055, 666);
        SoftProjectorClass->setMinimumSize(QSize(700, 550));
        SoftProjectorClass->setWindowTitle(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/softprojector.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SoftProjectorClass->setWindowIcon(icon);
        SoftProjectorClass->setToolButtonStyle(Qt::ToolButtonIconOnly);
        SoftProjectorClass->setDockNestingEnabled(false);
        actionAbout = new QAction(SoftProjectorClass);
        actionAbout->setObjectName("actionAbout");
        actionSettings = new QAction(SoftProjectorClass);
        actionSettings->setObjectName("actionSettings");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/settings.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSettings->setIcon(icon1);
        actionClose = new QAction(SoftProjectorClass);
        actionClose->setObjectName("actionClose");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/base-22x22-actions-application-exit.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionClose->setIcon(icon2);
        actionManage_Database = new QAction(SoftProjectorClass);
        actionManage_Database->setObjectName("actionManage_Database");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/database.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionManage_Database->setIcon(icon3);
        action_Help = new QAction(SoftProjectorClass);
        action_Help->setObjectName("action_Help");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/help.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_Help->setIcon(icon4);
        actionSong_Counter = new QAction(SoftProjectorClass);
        actionSong_Counter->setObjectName("actionSong_Counter");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/song_count.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSong_Counter->setIcon(icon5);
        actionOpenSchedule = new QAction(SoftProjectorClass);
        actionOpenSchedule->setObjectName("actionOpenSchedule");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/icons/scheduleOpen.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionOpenSchedule->setIcon(icon6);
        actionSaveSchedule = new QAction(SoftProjectorClass);
        actionSaveSchedule->setObjectName("actionSaveSchedule");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/icons/scheduleSave.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSaveSchedule->setIcon(icon7);
        actionSaveScheduleAs = new QAction(SoftProjectorClass);
        actionSaveScheduleAs->setObjectName("actionSaveScheduleAs");
        actionNewSchedule = new QAction(SoftProjectorClass);
        actionNewSchedule->setObjectName("actionNewSchedule");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/icons/scheduleNew.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionNewSchedule->setIcon(icon8);
        actionCloseSchedule = new QAction(SoftProjectorClass);
        actionCloseSchedule->setObjectName("actionCloseSchedule");
        actionPrint = new QAction(SoftProjectorClass);
        actionPrint->setObjectName("actionPrint");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/icons/print.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionPrint->setIcon(icon9);
        actionPrintSchedule = new QAction(SoftProjectorClass);
        actionPrintSchedule->setObjectName("actionPrintSchedule");
        actionNew = new QAction(SoftProjectorClass);
        actionNew->setObjectName("actionNew");
        actionEdit = new QAction(SoftProjectorClass);
        actionEdit->setObjectName("actionEdit");
        actionCopy = new QAction(SoftProjectorClass);
        actionCopy->setObjectName("actionCopy");
        actionDelete = new QAction(SoftProjectorClass);
        actionDelete->setObjectName("actionDelete");
        actionDonate = new QAction(SoftProjectorClass);
        actionDonate->setObjectName("actionDonate");
        actionScheduleAdd = new QAction(SoftProjectorClass);
        actionScheduleAdd->setObjectName("actionScheduleAdd");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/icons/scheduleAdd.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionScheduleAdd->setIcon(icon10);
        actionScheduleRemove = new QAction(SoftProjectorClass);
        actionScheduleRemove->setObjectName("actionScheduleRemove");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/icons/scheduleRemove.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionScheduleRemove->setIcon(icon11);
        actionScheduleClear = new QAction(SoftProjectorClass);
        actionScheduleClear->setObjectName("actionScheduleClear");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/icons/scheduleClear.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionScheduleClear->setIcon(icon12);
        actionMoveScheduleTop = new QAction(SoftProjectorClass);
        actionMoveScheduleTop->setObjectName("actionMoveScheduleTop");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/icons/scheduleUpM.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionMoveScheduleTop->setIcon(icon13);
        actionMoveScheduleUp = new QAction(SoftProjectorClass);
        actionMoveScheduleUp->setObjectName("actionMoveScheduleUp");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/icons/scheduleUp.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionMoveScheduleUp->setIcon(icon14);
        actionMoveScheduleDown = new QAction(SoftProjectorClass);
        actionMoveScheduleDown->setObjectName("actionMoveScheduleDown");
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/icons/scheduleDown.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionMoveScheduleDown->setIcon(icon15);
        actionMoveScheduleBottom = new QAction(SoftProjectorClass);
        actionMoveScheduleBottom->setObjectName("actionMoveScheduleBottom");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/icons/icons/scheduleDownM.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionMoveScheduleBottom->setIcon(icon16);
        actionShow = new QAction(SoftProjectorClass);
        actionShow->setObjectName("actionShow");
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/icons/icons/show.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionShow->setIcon(icon17);
        actionHide = new QAction(SoftProjectorClass);
        actionHide->setObjectName("actionHide");
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/icons/icons/hide.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionHide->setIcon(icon18);
        actionClear = new QAction(SoftProjectorClass);
        actionClear->setObjectName("actionClear");
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/icons/icons/clear.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionClear->setIcon(icon19);
        actionCloseDisplay = new QAction(SoftProjectorClass);
        actionCloseDisplay->setObjectName("actionCloseDisplay");
        actionCloseDisplay->setCheckable(true);
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/icons/icons/display_off.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCloseDisplay->setIcon(icon20);
        centralWidget = new QWidget(SoftProjectorClass);
        centralWidget->setObjectName("centralWidget");
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName("layoutWidget");
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout_3->addWidget(label);

        listWidgetSchedule = new QListWidget(layoutWidget);
        listWidgetSchedule->setObjectName("listWidgetSchedule");
        listWidgetSchedule->setIconSize(QSize(16, 16));
        listWidgetSchedule->setSpacing(1);

        verticalLayout_3->addWidget(listWidgetSchedule);

        splitter->addWidget(layoutWidget);
        projectTab = new QTabWidget(splitter);
        projectTab->setObjectName("projectTab");
        projectTab->setMinimumSize(QSize(0, 0));
        Tab = new QWidget();
        Tab->setObjectName("Tab");
        gridLayout_2 = new QGridLayout(Tab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        projectTab->addTab(Tab, QString());
        splitter->addWidget(projectTab);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName("layoutWidget1");
        verticalLayoutDisplayControls = new QVBoxLayout(layoutWidget1);
        verticalLayoutDisplayControls->setSpacing(6);
        verticalLayoutDisplayControls->setContentsMargins(11, 11, 11, 11);
        verticalLayoutDisplayControls->setObjectName("verticalLayoutDisplayControls");
        verticalLayoutDisplayControls->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelIcon = new QLabel(layoutWidget1);
        labelIcon->setObjectName("labelIcon");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelIcon->sizePolicy().hasHeightForWidth());
        labelIcon->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(labelIcon);

        labelShow = new QLabel(layoutWidget1);
        labelShow->setObjectName("labelShow");

        horizontalLayout_2->addWidget(labelShow);


        verticalLayoutDisplayControls->addLayout(horizontalLayout_2);

        widgetMultiVerse = new QWidget(layoutWidget1);
        widgetMultiVerse->setObjectName("widgetMultiVerse");
        horizontalLayout_4 = new QHBoxLayout(widgetMultiVerse);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        rbMultiVerse = new QRadioButton(widgetMultiVerse);
        rbMultiVerse->setObjectName("rbMultiVerse");

        horizontalLayout_4->addWidget(rbMultiVerse);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayoutDisplayControls->addWidget(widgetMultiVerse);

        labelSongNotes = new QLabel(layoutWidget1);
        labelSongNotes->setObjectName("labelSongNotes");
        QPalette palette;
        QBrush brush(QColor(255, 0, 4, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush1);
        labelSongNotes->setPalette(palette);
        QFont font;
        font.setBold(true);
        labelSongNotes->setFont(font);
        labelSongNotes->setWordWrap(true);

        verticalLayoutDisplayControls->addWidget(labelSongNotes);

        listShow = new QListWidget(layoutWidget1);
        listShow->setObjectName("listShow");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listShow->sizePolicy().hasHeightForWidth());
        listShow->setSizePolicy(sizePolicy1);
        listShow->setAlternatingRowColors(false);

        verticalLayoutDisplayControls->addWidget(listShow);

        splitter->addWidget(layoutWidget1);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        SoftProjectorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SoftProjectorClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1055, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName("menuEdit");
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName("menuHelp");
        menuLanguage = new QMenu(menuBar);
        menuLanguage->setObjectName("menuLanguage");
        menuSongs = new QMenu(menuBar);
        menuSongs->setObjectName("menuSongs");
        menuSchedule = new QMenu(menuBar);
        menuSchedule->setObjectName("menuSchedule");
        menuDisplay_Screen = new QMenu(menuBar);
        menuDisplay_Screen->setObjectName("menuDisplay_Screen");
        SoftProjectorClass->setMenuBar(menuBar);
        toolBarFile = new QToolBar(SoftProjectorClass);
        toolBarFile->setObjectName("toolBarFile");
        toolBarFile->setToolButtonStyle(Qt::ToolButtonIconOnly);
        SoftProjectorClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBarFile);
        toolBarSchedule = new QToolBar(SoftProjectorClass);
        toolBarSchedule->setObjectName("toolBarSchedule");
        SoftProjectorClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBarSchedule);
        toolBarEdit = new QToolBar(SoftProjectorClass);
        toolBarEdit->setObjectName("toolBarEdit");
        SoftProjectorClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBarEdit);
        toolBarShow = new QToolBar(SoftProjectorClass);
        toolBarShow->setObjectName("toolBarShow");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toolBarShow->sizePolicy().hasHeightForWidth());
        toolBarShow->setSizePolicy(sizePolicy2);
        toolBarShow->setLayoutDirection(Qt::RightToLeft);
        SoftProjectorClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBarShow);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuSchedule->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuSongs->menuAction());
        menuBar->addAction(menuDisplay_Screen->menuAction());
        menuBar->addAction(menuLanguage->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNewSchedule);
        menuFile->addAction(actionOpenSchedule);
        menuFile->addAction(actionSaveSchedule);
        menuFile->addAction(actionSaveScheduleAs);
        menuFile->addAction(actionCloseSchedule);
        menuFile->addSeparator();
        menuFile->addAction(actionPrint);
        menuFile->addAction(actionPrintSchedule);
        menuFile->addSeparator();
        menuFile->addAction(actionClose);
        menuEdit->addAction(actionNew);
        menuEdit->addAction(actionEdit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionDelete);
        menuEdit->addSeparator();
        menuEdit->addAction(actionManage_Database);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSettings);
        menuHelp->addAction(actionDonate);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(action_Help);
        menuSongs->addAction(actionSong_Counter);
        menuSongs->addSeparator();
        menuSchedule->addAction(actionScheduleAdd);
        menuSchedule->addAction(actionScheduleRemove);
        menuSchedule->addAction(actionScheduleClear);
        menuSchedule->addSeparator();
        menuSchedule->addAction(actionMoveScheduleTop);
        menuSchedule->addAction(actionMoveScheduleUp);
        menuSchedule->addAction(actionMoveScheduleDown);
        menuSchedule->addAction(actionMoveScheduleBottom);
        menuDisplay_Screen->addAction(actionShow);
        menuDisplay_Screen->addAction(actionClear);
        menuDisplay_Screen->addAction(actionHide);
        menuDisplay_Screen->addAction(actionCloseDisplay);

        retranslateUi(SoftProjectorClass);

        QMetaObject::connectSlotsByName(SoftProjectorClass);
    } // setupUi

    void retranslateUi(QMainWindow *SoftProjectorClass)
    {
        actionAbout->setText(QCoreApplication::translate("SoftProjectorClass", "&About", nullptr));
        actionSettings->setText(QCoreApplication::translate("SoftProjectorClass", "&Settings...", nullptr));
#if QT_CONFIG(tooltip)
        actionSettings->setToolTip(QCoreApplication::translate("SoftProjectorClass", "Open settings dialog", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSettings->setShortcut(QCoreApplication::translate("SoftProjectorClass", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClose->setText(QCoreApplication::translate("SoftProjectorClass", "E&xit", nullptr));
#if QT_CONFIG(tooltip)
        actionClose->setToolTip(QCoreApplication::translate("SoftProjectorClass", "Exit SoftProjector", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionClose->setShortcut(QCoreApplication::translate("SoftProjectorClass", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionManage_Database->setText(QCoreApplication::translate("SoftProjectorClass", "&Manage Database...", nullptr));
#if QT_CONFIG(tooltip)
        actionManage_Database->setToolTip(QCoreApplication::translate("SoftProjectorClass", "Import and export Bibles, songbooks and themes", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionManage_Database->setShortcut(QCoreApplication::translate("SoftProjectorClass", "Ctrl+M", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Help->setText(QCoreApplication::translate("SoftProjectorClass", "&Help", nullptr));
#if QT_CONFIG(tooltip)
        action_Help->setToolTip(QCoreApplication::translate("SoftProjectorClass", "Open Help", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Help->setShortcut(QCoreApplication::translate("SoftProjectorClass", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSong_Counter->setText(QCoreApplication::translate("SoftProjectorClass", "Song Counter...", nullptr));
        actionOpenSchedule->setText(QCoreApplication::translate("SoftProjectorClass", "&Open Schedule", nullptr));
#if QT_CONFIG(shortcut)
        actionOpenSchedule->setShortcut(QCoreApplication::translate("SoftProjectorClass", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSaveSchedule->setText(QCoreApplication::translate("SoftProjectorClass", "&Save Schedule", nullptr));
#if QT_CONFIG(shortcut)
        actionSaveSchedule->setShortcut(QCoreApplication::translate("SoftProjectorClass", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSaveScheduleAs->setText(QCoreApplication::translate("SoftProjectorClass", "Save Schedule &As", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveScheduleAs->setToolTip(QCoreApplication::translate("SoftProjectorClass", "Save Schedule with different name", nullptr));
#endif // QT_CONFIG(tooltip)
        actionNewSchedule->setText(QCoreApplication::translate("SoftProjectorClass", "&New Schedule", nullptr));
#if QT_CONFIG(tooltip)
        actionNewSchedule->setToolTip(QCoreApplication::translate("SoftProjectorClass", "Start new Schedule", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNewSchedule->setShortcut(QCoreApplication::translate("SoftProjectorClass", "Ctrl+Shift+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCloseSchedule->setText(QCoreApplication::translate("SoftProjectorClass", "Close Schedule", nullptr));
#if QT_CONFIG(tooltip)
        actionCloseSchedule->setToolTip(QCoreApplication::translate("SoftProjectorClass", "Close Schedule", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPrint->setText(QCoreApplication::translate("SoftProjectorClass", "&Print", nullptr));
#if QT_CONFIG(tooltip)
        actionPrint->setToolTip(QCoreApplication::translate("SoftProjectorClass", "Prints selected Bible chapter, selected song and selected announcement.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPrint->setShortcut(QCoreApplication::translate("SoftProjectorClass", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrintSchedule->setText(QCoreApplication::translate("SoftProjectorClass", "Print Schedule", nullptr));
#if QT_CONFIG(tooltip)
        actionPrintSchedule->setToolTip(QCoreApplication::translate("SoftProjectorClass", "Print Schedule", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPrintSchedule->setShortcut(QCoreApplication::translate("SoftProjectorClass", "Ctrl+Shift+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNew->setText(QString());
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("SoftProjectorClass", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEdit->setText(QString());
#if QT_CONFIG(shortcut)
        actionEdit->setShortcut(QCoreApplication::translate("SoftProjectorClass", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QString());
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("SoftProjectorClass", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDelete->setText(QString());
#if QT_CONFIG(shortcut)
        actionDelete->setShortcut(QCoreApplication::translate("SoftProjectorClass", "Ctrl+Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDonate->setText(QCoreApplication::translate("SoftProjectorClass", "Donate", nullptr));
#if QT_CONFIG(tooltip)
        actionDonate->setToolTip(QCoreApplication::translate("SoftProjectorClass", "Donate to softProjector development team", nullptr));
#endif // QT_CONFIG(tooltip)
        actionScheduleAdd->setText(QCoreApplication::translate("SoftProjectorClass", "Add to Schedule", nullptr));
#if QT_CONFIG(shortcut)
        actionScheduleAdd->setShortcut(QCoreApplication::translate("SoftProjectorClass", "F2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionScheduleRemove->setText(QCoreApplication::translate("SoftProjectorClass", "Remove from Schedule", nullptr));
#if QT_CONFIG(shortcut)
        actionScheduleRemove->setShortcut(QCoreApplication::translate("SoftProjectorClass", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionScheduleClear->setText(QCoreApplication::translate("SoftProjectorClass", "Clear Schedule", nullptr));
        actionMoveScheduleTop->setText(QCoreApplication::translate("SoftProjectorClass", "Move Item To Top", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveScheduleTop->setToolTip(QCoreApplication::translate("SoftProjectorClass", "Move Schedule item to top of the list", nullptr));
#endif // QT_CONFIG(tooltip)
        actionMoveScheduleUp->setText(QCoreApplication::translate("SoftProjectorClass", "Move Item Up", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveScheduleUp->setToolTip(QCoreApplication::translate("SoftProjectorClass", "Move Schedule item up", nullptr));
#endif // QT_CONFIG(tooltip)
        actionMoveScheduleDown->setText(QCoreApplication::translate("SoftProjectorClass", "Mode Item Down", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveScheduleDown->setToolTip(QCoreApplication::translate("SoftProjectorClass", "Move Schedule item down", nullptr));
#endif // QT_CONFIG(tooltip)
        actionMoveScheduleBottom->setText(QCoreApplication::translate("SoftProjectorClass", "Move Item To Bottom", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveScheduleBottom->setToolTip(QCoreApplication::translate("SoftProjectorClass", "Move Schedule item to bottom of the list", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShow->setText(QCoreApplication::translate("SoftProjectorClass", "Show", nullptr));
#if QT_CONFIG(tooltip)
        actionShow->setToolTip(QCoreApplication::translate("SoftProjectorClass", "Display to the screen (F4)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionShow->setShortcut(QCoreApplication::translate("SoftProjectorClass", "F4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionHide->setText(QCoreApplication::translate("SoftProjectorClass", "Hide", nullptr));
#if QT_CONFIG(tooltip)
        actionHide->setToolTip(QCoreApplication::translate("SoftProjectorClass", "Show Passive Screen (Stop displaying to the screen) (Esc)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionHide->setShortcut(QCoreApplication::translate("SoftProjectorClass", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClear->setText(QCoreApplication::translate("SoftProjectorClass", "Clear", nullptr));
#if QT_CONFIG(tooltip)
        actionClear->setToolTip(QCoreApplication::translate("SoftProjectorClass", "Clear Display Text (Shift+Esc)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionClear->setShortcut(QCoreApplication::translate("SoftProjectorClass", "Shift+Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCloseDisplay->setText(QCoreApplication::translate("SoftProjectorClass", "On / Off", nullptr));
#if QT_CONFIG(tooltip)
        actionCloseDisplay->setToolTip(QCoreApplication::translate("SoftProjectorClass", "Turn Display Screen On/Off", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("SoftProjectorClass", "Service Schedule:", nullptr));
        projectTab->setTabText(projectTab->indexOf(Tab), QCoreApplication::translate("SoftProjectorClass", "Tab", nullptr));
        labelShow->setText(QString());
#if QT_CONFIG(tooltip)
        rbMultiVerse->setToolTip(QCoreApplication::translate("SoftProjectorClass", "If selected, this will allow to select multiple verses at one time. Will need to press \"Show\" each time.", nullptr));
#endif // QT_CONFIG(tooltip)
        rbMultiVerse->setText(QCoreApplication::translate("SoftProjectorClass", "Use Multi Verse", nullptr));
        labelSongNotes->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("SoftProjectorClass", "&File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("SoftProjectorClass", "&Edit", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("SoftProjectorClass", "&Help", nullptr));
#if QT_CONFIG(tooltip)
        menuLanguage->setToolTip(QCoreApplication::translate("SoftProjectorClass", "Select Language", nullptr));
#endif // QT_CONFIG(tooltip)
        menuLanguage->setTitle(QCoreApplication::translate("SoftProjectorClass", "Language", nullptr));
        menuSongs->setTitle(QCoreApplication::translate("SoftProjectorClass", "View", nullptr));
        menuSchedule->setTitle(QCoreApplication::translate("SoftProjectorClass", "Schedule", nullptr));
        menuDisplay_Screen->setTitle(QCoreApplication::translate("SoftProjectorClass", "Display Screen", nullptr));
        toolBarFile->setWindowTitle(QCoreApplication::translate("SoftProjectorClass", "File Tool Bar", nullptr));
        toolBarSchedule->setWindowTitle(QCoreApplication::translate("SoftProjectorClass", "Schedule Tool Bar", nullptr));
        toolBarEdit->setWindowTitle(QCoreApplication::translate("SoftProjectorClass", "Edit Tool Bar", nullptr));
        toolBarShow->setWindowTitle(QCoreApplication::translate("SoftProjectorClass", "Display Control Tool Bar", nullptr));
        (void)SoftProjectorClass;
    } // retranslateUi

};

namespace Ui {
    class SoftProjectorClass: public Ui_SoftProjectorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOFTPROJECTOR_H
