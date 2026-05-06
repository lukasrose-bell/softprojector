/********************************************************************************
** Form generated from reading UI file 'printpreviewdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTPREVIEWDIALOG_H
#define UI_PRINTPREVIEWDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_PrintPreviewDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBoxLeft;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBoxTop;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBoxRight;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBoxBottom;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QFontComboBox *fontComboBox;
    QSpinBox *spinBoxFontSize;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonPDF;
    QPushButton *pushButtonPrint;
    QTextEdit *textEdit;

    void setupUi(QDialog *PrintPreviewDialog)
    {
        if (PrintPreviewDialog->objectName().isEmpty())
            PrintPreviewDialog->setObjectName("PrintPreviewDialog");
        PrintPreviewDialog->resize(493, 475);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/print.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        PrintPreviewDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(PrintPreviewDialog);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(PrintPreviewDialog);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        label_5 = new QLabel(PrintPreviewDialog);
        label_5->setObjectName("label_5");

        horizontalLayout_2->addWidget(label_5);

        doubleSpinBoxLeft = new QDoubleSpinBox(PrintPreviewDialog);
        doubleSpinBoxLeft->setObjectName("doubleSpinBoxLeft");
        doubleSpinBoxLeft->setDecimals(2);
        doubleSpinBoxLeft->setMaximum(1000.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBoxLeft);

        label_4 = new QLabel(PrintPreviewDialog);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        doubleSpinBoxTop = new QDoubleSpinBox(PrintPreviewDialog);
        doubleSpinBoxTop->setObjectName("doubleSpinBoxTop");
        doubleSpinBoxTop->setMaximum(1000.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBoxTop);

        label_6 = new QLabel(PrintPreviewDialog);
        label_6->setObjectName("label_6");

        horizontalLayout_2->addWidget(label_6);

        doubleSpinBoxRight = new QDoubleSpinBox(PrintPreviewDialog);
        doubleSpinBoxRight->setObjectName("doubleSpinBoxRight");
        doubleSpinBoxRight->setMaximum(1000.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBoxRight);

        label_7 = new QLabel(PrintPreviewDialog);
        label_7->setObjectName("label_7");

        horizontalLayout_2->addWidget(label_7);

        doubleSpinBoxBottom = new QDoubleSpinBox(PrintPreviewDialog);
        doubleSpinBoxBottom->setObjectName("doubleSpinBoxBottom");
        doubleSpinBoxBottom->setMaximum(1000.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBoxBottom);

        comboBox = new QComboBox(PrintPreviewDialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout_2->addWidget(comboBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(PrintPreviewDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        fontComboBox = new QFontComboBox(PrintPreviewDialog);
        fontComboBox->setObjectName("fontComboBox");

        horizontalLayout->addWidget(fontComboBox);

        spinBoxFontSize = new QSpinBox(PrintPreviewDialog);
        spinBoxFontSize->setObjectName("spinBoxFontSize");

        horizontalLayout->addWidget(spinBoxFontSize);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonPDF = new QPushButton(PrintPreviewDialog);
        pushButtonPDF->setObjectName("pushButtonPDF");

        horizontalLayout->addWidget(pushButtonPDF);

        pushButtonPrint = new QPushButton(PrintPreviewDialog);
        pushButtonPrint->setObjectName("pushButtonPrint");

        horizontalLayout->addWidget(pushButtonPrint);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        textEdit = new QTextEdit(PrintPreviewDialog);
        textEdit->setObjectName("textEdit");

        gridLayout->addWidget(textEdit, 2, 0, 1, 1);


        retranslateUi(PrintPreviewDialog);

        QMetaObject::connectSlotsByName(PrintPreviewDialog);
    } // setupUi

    void retranslateUi(QDialog *PrintPreviewDialog)
    {
        PrintPreviewDialog->setWindowTitle(QCoreApplication::translate("PrintPreviewDialog", "softProjector Print Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("PrintPreviewDialog", "Margins:", nullptr));
#if QT_CONFIG(tooltip)
        label_5->setToolTip(QCoreApplication::translate("PrintPreviewDialog", "Left Margin", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("PrintPreviewDialog", "L:", nullptr));
#if QT_CONFIG(tooltip)
        label_4->setToolTip(QCoreApplication::translate("PrintPreviewDialog", "Top Margin", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("PrintPreviewDialog", "T:", nullptr));
#if QT_CONFIG(tooltip)
        label_6->setToolTip(QCoreApplication::translate("PrintPreviewDialog", "Right Margin", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("PrintPreviewDialog", "R:", nullptr));
#if QT_CONFIG(tooltip)
        label_7->setToolTip(QCoreApplication::translate("PrintPreviewDialog", "Bottom Margin", nullptr));
#endif // QT_CONFIG(tooltip)
        label_7->setText(QCoreApplication::translate("PrintPreviewDialog", "B:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("PrintPreviewDialog", "Inch", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("PrintPreviewDialog", "Millimeter", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("PrintPreviewDialog", "Pixel", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("PrintPreviewDialog", "Point", nullptr));

        label->setText(QCoreApplication::translate("PrintPreviewDialog", "Font:", nullptr));
        pushButtonPDF->setText(QCoreApplication::translate("PrintPreviewDialog", "To PDF", nullptr));
        pushButtonPrint->setText(QCoreApplication::translate("PrintPreviewDialog", "Print", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrintPreviewDialog: public Ui_PrintPreviewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTPREVIEWDIALOG_H
