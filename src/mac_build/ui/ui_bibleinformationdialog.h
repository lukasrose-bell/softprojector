/********************************************************************************
** Form generated from reading UI file 'bibleinformationdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIBLEINFORMATIONDIALOG_H
#define UI_BIBLEINFORMATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_BibleInformationDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *bible_name_lineEdit;
    QLabel *label_2;
    QLineEdit *abbr_lineEdit;
    QLabel *label_3;
    QPlainTextEdit *info_TextEdit;
    QSpacerItem *verticalSpacer;
    QCheckBox *rtol_checkBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BibleInformationDialog)
    {
        if (BibleInformationDialog->objectName().isEmpty())
            BibleInformationDialog->setObjectName("BibleInformationDialog");
        BibleInformationDialog->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/book.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        BibleInformationDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(BibleInformationDialog);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(BibleInformationDialog);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        bible_name_lineEdit = new QLineEdit(BibleInformationDialog);
        bible_name_lineEdit->setObjectName("bible_name_lineEdit");

        gridLayout->addWidget(bible_name_lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(BibleInformationDialog);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        abbr_lineEdit = new QLineEdit(BibleInformationDialog);
        abbr_lineEdit->setObjectName("abbr_lineEdit");

        gridLayout->addWidget(abbr_lineEdit, 1, 1, 1, 1);

        label_3 = new QLabel(BibleInformationDialog);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        info_TextEdit = new QPlainTextEdit(BibleInformationDialog);
        info_TextEdit->setObjectName("info_TextEdit");

        gridLayout->addWidget(info_TextEdit, 2, 1, 2, 1);

        verticalSpacer = new QSpacerItem(20, 143, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        rtol_checkBox = new QCheckBox(BibleInformationDialog);
        rtol_checkBox->setObjectName("rtol_checkBox");

        gridLayout->addWidget(rtol_checkBox, 4, 0, 1, 2);

        buttonBox = new QDialogButtonBox(BibleInformationDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 2);


        retranslateUi(BibleInformationDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, BibleInformationDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, BibleInformationDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(BibleInformationDialog);
    } // setupUi

    void retranslateUi(QDialog *BibleInformationDialog)
    {
        BibleInformationDialog->setWindowTitle(QCoreApplication::translate("BibleInformationDialog", "Bible Information", nullptr));
        label->setText(QCoreApplication::translate("BibleInformationDialog", "Bible Name:", nullptr));
        label_2->setText(QCoreApplication::translate("BibleInformationDialog", "Abbreviation:", nullptr));
        label_3->setText(QCoreApplication::translate("BibleInformationDialog", "Information\\\n"
"Copyright:", nullptr));
        rtol_checkBox->setText(QCoreApplication::translate("BibleInformationDialog", "Right to left", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BibleInformationDialog: public Ui_BibleInformationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIBLEINFORMATIONDIALOG_H
