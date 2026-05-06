/********************************************************************************
** Form generated from reading UI file 'editannouncementdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITANNOUNCEMENTDIALOG_H
#define UI_EDITANNOUNCEMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditAnnouncementDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelTitle;
    QLineEdit *lineEditTitle;
    QLabel *labelId;
    QLabel *labelIdNum;
    QCheckBox *checkBoxUsePrivateSettings;
    QGroupBox *groupBoxPrivateSettings;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxTimedSlides;
    QSpinBox *spinBoxTimeOut;
    QCheckBox *checkBoxLoop;
    QSpacerItem *horizontalSpacer;
    QTextEdit *textEditAnnouncement;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *EditAnnouncementDialog)
    {
        if (EditAnnouncementDialog->objectName().isEmpty())
            EditAnnouncementDialog->setObjectName("EditAnnouncementDialog");
        EditAnnouncementDialog->resize(377, 449);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/announce_edit.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        EditAnnouncementDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(EditAnnouncementDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelTitle = new QLabel(EditAnnouncementDialog);
        labelTitle->setObjectName("labelTitle");

        horizontalLayout_2->addWidget(labelTitle);

        lineEditTitle = new QLineEdit(EditAnnouncementDialog);
        lineEditTitle->setObjectName("lineEditTitle");

        horizontalLayout_2->addWidget(lineEditTitle);

        labelId = new QLabel(EditAnnouncementDialog);
        labelId->setObjectName("labelId");

        horizontalLayout_2->addWidget(labelId);

        labelIdNum = new QLabel(EditAnnouncementDialog);
        labelIdNum->setObjectName("labelIdNum");
        labelIdNum->setFrameShape(QFrame::Box);
        labelIdNum->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(labelIdNum);


        verticalLayout->addLayout(horizontalLayout_2);

        checkBoxUsePrivateSettings = new QCheckBox(EditAnnouncementDialog);
        checkBoxUsePrivateSettings->setObjectName("checkBoxUsePrivateSettings");

        verticalLayout->addWidget(checkBoxUsePrivateSettings);

        groupBoxPrivateSettings = new QGroupBox(EditAnnouncementDialog);
        groupBoxPrivateSettings->setObjectName("groupBoxPrivateSettings");
        groupBoxPrivateSettings->setFlat(true);
        verticalLayout_2 = new QVBoxLayout(groupBoxPrivateSettings);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 6, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        checkBoxTimedSlides = new QCheckBox(groupBoxPrivateSettings);
        checkBoxTimedSlides->setObjectName("checkBoxTimedSlides");

        horizontalLayout->addWidget(checkBoxTimedSlides);

        spinBoxTimeOut = new QSpinBox(groupBoxPrivateSettings);
        spinBoxTimeOut->setObjectName("spinBoxTimeOut");
        spinBoxTimeOut->setMaximum(1000);

        horizontalLayout->addWidget(spinBoxTimeOut);

        checkBoxLoop = new QCheckBox(groupBoxPrivateSettings);
        checkBoxLoop->setObjectName("checkBoxLoop");

        horizontalLayout->addWidget(checkBoxLoop);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBoxPrivateSettings);

        textEditAnnouncement = new QTextEdit(EditAnnouncementDialog);
        textEditAnnouncement->setObjectName("textEditAnnouncement");
        textEditAnnouncement->setAcceptRichText(false);

        verticalLayout->addWidget(textEditAnnouncement);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButtonSave = new QPushButton(EditAnnouncementDialog);
        pushButtonSave->setObjectName("pushButtonSave");

        horizontalLayout_3->addWidget(pushButtonSave);

        pushButtonCancel = new QPushButton(EditAnnouncementDialog);
        pushButtonCancel->setObjectName("pushButtonCancel");

        horizontalLayout_3->addWidget(pushButtonCancel);


        verticalLayout->addLayout(horizontalLayout_3);

        QWidget::setTabOrder(lineEditTitle, checkBoxUsePrivateSettings);
        QWidget::setTabOrder(checkBoxUsePrivateSettings, checkBoxTimedSlides);
        QWidget::setTabOrder(checkBoxTimedSlides, spinBoxTimeOut);
        QWidget::setTabOrder(spinBoxTimeOut, checkBoxLoop);
        QWidget::setTabOrder(checkBoxLoop, textEditAnnouncement);

        retranslateUi(EditAnnouncementDialog);

        QMetaObject::connectSlotsByName(EditAnnouncementDialog);
    } // setupUi

    void retranslateUi(QDialog *EditAnnouncementDialog)
    {
        EditAnnouncementDialog->setWindowTitle(QCoreApplication::translate("EditAnnouncementDialog", "Edit Announcement", nullptr));
        labelTitle->setText(QCoreApplication::translate("EditAnnouncementDialog", "Title:", nullptr));
        labelId->setText(QCoreApplication::translate("EditAnnouncementDialog", "ID:", nullptr));
        checkBoxUsePrivateSettings->setText(QCoreApplication::translate("EditAnnouncementDialog", "Use Private Settings", nullptr));
        checkBoxTimedSlides->setText(QCoreApplication::translate("EditAnnouncementDialog", "Timed slides:", nullptr));
        spinBoxTimeOut->setSuffix(QCoreApplication::translate("EditAnnouncementDialog", " sec", nullptr));
        checkBoxLoop->setText(QCoreApplication::translate("EditAnnouncementDialog", "Loop", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("EditAnnouncementDialog", "Save", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("EditAnnouncementDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditAnnouncementDialog: public Ui_EditAnnouncementDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITANNOUNCEMENTDIALOG_H
