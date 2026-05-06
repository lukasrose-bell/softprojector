/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QGridLayout *gridLayout_2;
    QListWidget *listWidget;
    QFrame *line;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;
    QStackedWidget *stackedWidget;
    QWidget *general;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QFrame *line_2;
    QScrollArea *scrollAreaGeneralSettings;
    QWidget *scrollAreaWidgetContents;
    QWidget *passive;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_8;
    QLabel *label;
    QFrame *line_6;
    QScrollArea *scrollAreaPassiveSettings;
    QWidget *scrollAreaWidgetContents_5;
    QWidget *bible;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QFrame *line_3;
    QScrollArea *scrollAreaBibleSettings;
    QWidget *scrollAreaWidgetContents_2;
    QWidget *song;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QFrame *line_4;
    QScrollArea *scrollAreaSongSettings;
    QWidget *scrollAreaWidgetContents_3;
    QWidget *picture;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_9;
    QFrame *line_7;
    QScrollArea *scrollAreaPicture;
    QWidget *scrollAreaWidgetContents_6;
    QWidget *announce;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QFrame *line_5;
    QScrollArea *scrollAreaAnnouncementSettings;
    QWidget *scrollAreaWidgetContents_4;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName("SettingsDialog");
        SettingsDialog->resize(675, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/settings.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SettingsDialog->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(SettingsDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        listWidget = new QListWidget(SettingsDialog);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/softprojector.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/display.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/book.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/song_tab.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget);
        __qlistwidgetitem3->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/photo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget);
        __qlistwidgetitem4->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/icons/announce.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget);
        __qlistwidgetitem5->setIcon(icon6);
        listWidget->setObjectName("listWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMinimumSize(QSize(150, 0));
        listWidget->setMaximumSize(QSize(150, 16777215));
        listWidget->setIconSize(QSize(24, 24));
        listWidget->setSpacing(1);

        gridLayout_2->addWidget(listWidget, 0, 0, 1, 1);

        line = new QFrame(SettingsDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_2->addWidget(line, 1, 0, 1, 2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_2 = new QSpacerItem(123, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(buttonBox);


        gridLayout_2->addLayout(horizontalLayout_6, 2, 0, 1, 2);

        stackedWidget = new QStackedWidget(SettingsDialog);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setEnabled(true);
        general = new QWidget();
        general->setObjectName("general");
        verticalLayout = new QVBoxLayout(general);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(general);
        label_4->setObjectName("label_4");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        line_2 = new QFrame(general);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_2);

        scrollAreaGeneralSettings = new QScrollArea(general);
        scrollAreaGeneralSettings->setObjectName("scrollAreaGeneralSettings");
        scrollAreaGeneralSettings->setEnabled(true);
        scrollAreaGeneralSettings->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 499, 509));
        scrollAreaGeneralSettings->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollAreaGeneralSettings);

        stackedWidget->addWidget(general);
        passive = new QWidget();
        passive->setObjectName("passive");
        verticalLayout_5 = new QVBoxLayout(passive);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(passive);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        verticalLayout_5->addWidget(label_8);

        label = new QLabel(passive);
        label->setObjectName("label");

        verticalLayout_5->addWidget(label);

        line_6 = new QFrame(passive);
        line_6->setObjectName("line_6");
        line_6->setFrameShape(QFrame::Shape::HLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_5->addWidget(line_6);

        scrollAreaPassiveSettings = new QScrollArea(passive);
        scrollAreaPassiveSettings->setObjectName("scrollAreaPassiveSettings");
        scrollAreaPassiveSettings->setEnabled(true);
        scrollAreaPassiveSettings->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName("scrollAreaWidgetContents_5");
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 424, 464));
        scrollAreaPassiveSettings->setWidget(scrollAreaWidgetContents_5);

        verticalLayout_5->addWidget(scrollAreaPassiveSettings);

        stackedWidget->addWidget(passive);
        bible = new QWidget();
        bible->setObjectName("bible");
        verticalLayout_2 = new QVBoxLayout(bible);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(bible);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        verticalLayout_2->addWidget(label_5);

        line_3 = new QFrame(bible);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_2->addWidget(line_3);

        scrollAreaBibleSettings = new QScrollArea(bible);
        scrollAreaBibleSettings->setObjectName("scrollAreaBibleSettings");
        scrollAreaBibleSettings->setEnabled(true);
        scrollAreaBibleSettings->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 424, 484));
        scrollAreaBibleSettings->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_2->addWidget(scrollAreaBibleSettings);

        stackedWidget->addWidget(bible);
        song = new QWidget();
        song->setObjectName("song");
        verticalLayout_3 = new QVBoxLayout(song);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(song);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        verticalLayout_3->addWidget(label_6);

        line_4 = new QFrame(song);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line_4);

        scrollAreaSongSettings = new QScrollArea(song);
        scrollAreaSongSettings->setObjectName("scrollAreaSongSettings");
        scrollAreaSongSettings->setEnabled(true);
        scrollAreaSongSettings->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 424, 484));
        scrollAreaSongSettings->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_3->addWidget(scrollAreaSongSettings);

        stackedWidget->addWidget(song);
        picture = new QWidget();
        picture->setObjectName("picture");
        verticalLayout_6 = new QVBoxLayout(picture);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(picture);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        verticalLayout_6->addWidget(label_9);

        line_7 = new QFrame(picture);
        line_7->setObjectName("line_7");
        line_7->setFrameShape(QFrame::Shape::HLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_6->addWidget(line_7);

        scrollAreaPicture = new QScrollArea(picture);
        scrollAreaPicture->setObjectName("scrollAreaPicture");
        scrollAreaPicture->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName("scrollAreaWidgetContents_6");
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 424, 484));
        scrollAreaPicture->setWidget(scrollAreaWidgetContents_6);

        verticalLayout_6->addWidget(scrollAreaPicture);

        stackedWidget->addWidget(picture);
        announce = new QWidget();
        announce->setObjectName("announce");
        verticalLayout_4 = new QVBoxLayout(announce);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(announce);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        verticalLayout_4->addWidget(label_7);

        line_5 = new QFrame(announce);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_4->addWidget(line_5);

        scrollAreaAnnouncementSettings = new QScrollArea(announce);
        scrollAreaAnnouncementSettings->setObjectName("scrollAreaAnnouncementSettings");
        scrollAreaAnnouncementSettings->setEnabled(true);
        scrollAreaAnnouncementSettings->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName("scrollAreaWidgetContents_4");
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 424, 484));
        scrollAreaAnnouncementSettings->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_4->addWidget(scrollAreaAnnouncementSettings);

        stackedWidget->addWidget(announce);

        gridLayout_2->addWidget(stackedWidget, 0, 1, 1, 1);


        retranslateUi(SettingsDialog);

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "softProjector - Settings", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("SettingsDialog", "General", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("SettingsDialog", "Passive", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("SettingsDialog", "Bible", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("SettingsDialog", "Songs", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("SettingsDialog", "Picture", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("SettingsDialog", "Announcements", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_4->setText(QCoreApplication::translate("SettingsDialog", "General SoftProjector Settings", nullptr));
        label_8->setText(QCoreApplication::translate("SettingsDialog", "Passive Settings", nullptr));
        label->setText(QCoreApplication::translate("SettingsDialog", "This setting are displayed when nothing is to be projected.", nullptr));
        label_5->setText(QCoreApplication::translate("SettingsDialog", "Bible Settings", nullptr));
        label_6->setText(QCoreApplication::translate("SettingsDialog", "Song Settings", nullptr));
        label_9->setText(QCoreApplication::translate("SettingsDialog", "Picture Settings", nullptr));
        label_7->setText(QCoreApplication::translate("SettingsDialog", "Announcement Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
