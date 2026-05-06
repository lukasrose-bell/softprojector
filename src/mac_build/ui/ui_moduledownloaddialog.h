/********************************************************************************
** Form generated from reading UI file 'moduledownloaddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODULEDOWNLOADDIALOG_H
#define UI_MODULEDOWNLOADDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModuleDownloadDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonSelectAll;
    QPushButton *pushButtonDeselectAll;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ModuleDownloadDialog)
    {
        if (ModuleDownloadDialog->objectName().isEmpty())
            ModuleDownloadDialog->setObjectName("ModuleDownloadDialog");
        ModuleDownloadDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(ModuleDownloadDialog);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(ModuleDownloadDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        listWidget = new QListWidget(ModuleDownloadDialog);
        listWidget->setObjectName("listWidget");
        listWidget->setSelectionMode(QAbstractItemView::MultiSelection);

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonSelectAll = new QPushButton(ModuleDownloadDialog);
        pushButtonSelectAll->setObjectName("pushButtonSelectAll");

        horizontalLayout->addWidget(pushButtonSelectAll);

        pushButtonDeselectAll = new QPushButton(ModuleDownloadDialog);
        pushButtonDeselectAll->setObjectName("pushButtonDeselectAll");

        horizontalLayout->addWidget(pushButtonDeselectAll);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(ModuleDownloadDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(listWidget, pushButtonSelectAll);
        QWidget::setTabOrder(pushButtonSelectAll, pushButtonDeselectAll);
        QWidget::setTabOrder(pushButtonDeselectAll, buttonBox);

        retranslateUi(ModuleDownloadDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ModuleDownloadDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ModuleDownloadDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ModuleDownloadDialog);
    } // setupUi

    void retranslateUi(QDialog *ModuleDownloadDialog)
    {
        ModuleDownloadDialog->setWindowTitle(QCoreApplication::translate("ModuleDownloadDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ModuleDownloadDialog", "Select modules you wish to download and import.", nullptr));
        pushButtonSelectAll->setText(QCoreApplication::translate("ModuleDownloadDialog", "Select All", nullptr));
        pushButtonDeselectAll->setText(QCoreApplication::translate("ModuleDownloadDialog", "Deselect All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModuleDownloadDialog: public Ui_ModuleDownloadDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULEDOWNLOADDIALOG_H
