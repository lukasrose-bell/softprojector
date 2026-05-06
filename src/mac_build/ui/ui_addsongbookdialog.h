/********************************************************************************
** Form generated from reading UI file 'addsongbookdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSONGBOOKDIALOG_H
#define UI_ADDSONGBOOKDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddSongbookDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *sbonik_title_label;
    QLineEdit *songbook_title_box;
    QVBoxLayout *verticalLayout;
    QLabel *songbook_info_label;
    QSpacerItem *verticalSpacer;
    QTextEdit *songbook_info_box;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddSongbookDialog)
    {
        if (AddSongbookDialog->objectName().isEmpty())
            AddSongbookDialog->setObjectName("AddSongbookDialog");
        AddSongbookDialog->resize(436, 314);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/add_songbook.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        AddSongbookDialog->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(AddSongbookDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        sbonik_title_label = new QLabel(AddSongbookDialog);
        sbonik_title_label->setObjectName("sbonik_title_label");
        sbonik_title_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(sbonik_title_label, 0, 0, 1, 1);

        songbook_title_box = new QLineEdit(AddSongbookDialog);
        songbook_title_box->setObjectName("songbook_title_box");

        gridLayout->addWidget(songbook_title_box, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        songbook_info_label = new QLabel(AddSongbookDialog);
        songbook_info_label->setObjectName("songbook_info_label");
        songbook_info_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(songbook_info_label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        songbook_info_box = new QTextEdit(AddSongbookDialog);
        songbook_info_box->setObjectName("songbook_info_box");

        gridLayout->addWidget(songbook_info_box, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(AddSongbookDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        QWidget::setTabOrder(songbook_title_box, songbook_info_box);
        QWidget::setTabOrder(songbook_info_box, buttonBox);

        retranslateUi(AddSongbookDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AddSongbookDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AddSongbookDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AddSongbookDialog);
    } // setupUi

    void retranslateUi(QDialog *AddSongbookDialog)
    {
        AddSongbookDialog->setWindowTitle(QCoreApplication::translate("AddSongbookDialog", "Add songbook", nullptr));
        sbonik_title_label->setText(QCoreApplication::translate("AddSongbookDialog", "Songbook Title:", nullptr));
        songbook_info_label->setText(QCoreApplication::translate("AddSongbookDialog", "Description:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddSongbookDialog: public Ui_AddSongbookDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSONGBOOKDIALOG_H
