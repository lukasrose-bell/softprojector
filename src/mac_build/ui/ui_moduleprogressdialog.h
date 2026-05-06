/********************************************************************************
** Form generated from reading UI file 'moduleprogressdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODULEPROGRESSDIALOG_H
#define UI_MODULEPROGRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModuleProgressDialog
{
public:
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QProgressBar *progressBarCurrent;
    QLabel *labelSpeed;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QProgressBar *progressBarTotal;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *ModuleProgressDialog)
    {
        if (ModuleProgressDialog->objectName().isEmpty())
            ModuleProgressDialog->setObjectName("ModuleProgressDialog");
        ModuleProgressDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(ModuleProgressDialog);
        verticalLayout->setObjectName("verticalLayout");
        plainTextEdit = new QPlainTextEdit(ModuleProgressDialog);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setAcceptDrops(false);
        plainTextEdit->setReadOnly(true);

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(ModuleProgressDialog);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        progressBarCurrent = new QProgressBar(ModuleProgressDialog);
        progressBarCurrent->setObjectName("progressBarCurrent");

        horizontalLayout->addWidget(progressBarCurrent);

        labelSpeed = new QLabel(ModuleProgressDialog);
        labelSpeed->setObjectName("labelSpeed");

        horizontalLayout->addWidget(labelSpeed);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(ModuleProgressDialog);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        progressBarTotal = new QProgressBar(ModuleProgressDialog);
        progressBarTotal->setObjectName("progressBarTotal");

        horizontalLayout_2->addWidget(progressBarTotal);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton = new QPushButton(ModuleProgressDialog);
        pushButton->setObjectName("pushButton");

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(ModuleProgressDialog);

        QMetaObject::connectSlotsByName(ModuleProgressDialog);
    } // setupUi

    void retranslateUi(QDialog *ModuleProgressDialog)
    {
        ModuleProgressDialog->setWindowTitle(QCoreApplication::translate("ModuleProgressDialog", "Download / Import Progress Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("ModuleProgressDialog", "Current Progress:", nullptr));
        labelSpeed->setText(QString());
        label_3->setText(QCoreApplication::translate("ModuleProgressDialog", "Total Progress:", nullptr));
        pushButton->setText(QCoreApplication::translate("ModuleProgressDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModuleProgressDialog: public Ui_ModuleProgressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULEPROGRESSDIALOG_H
