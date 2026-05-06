/********************************************************************************
** Form generated from reading UI file 'picturesettingwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTURESETTINGWIDGET_H
#define UI_PICTURESETTINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PictureSettingWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxExpand;
    QLabel *labelExpand;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButtonFit;
    QLabel *labelFit;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButtonFitExpand;
    QLabel *labelFitExpand;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBoxResize;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QComboBox *comboBoxBoundAmount;
    QLineEdit *lineEditBound;
    QLabel *labelBoundBy;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PictureSettingWidget)
    {
        if (PictureSettingWidget->objectName().isEmpty())
            PictureSettingWidget->setObjectName("PictureSettingWidget");
        PictureSettingWidget->resize(381, 456);
        verticalLayout_2 = new QVBoxLayout(PictureSettingWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(PictureSettingWidget);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        checkBoxExpand = new QCheckBox(PictureSettingWidget);
        checkBoxExpand->setObjectName("checkBoxExpand");

        horizontalLayout->addWidget(checkBoxExpand);

        labelExpand = new QLabel(PictureSettingWidget);
        labelExpand->setObjectName("labelExpand");
        labelExpand->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/ExpandSmall.png")));

        horizontalLayout->addWidget(labelExpand);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        radioButtonFit = new QRadioButton(PictureSettingWidget);
        radioButtonFit->setObjectName("radioButtonFit");

        horizontalLayout_2->addWidget(radioButtonFit);

        labelFit = new QLabel(PictureSettingWidget);
        labelFit->setObjectName("labelFit");
        labelFit->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/FitToScreen.png")));

        horizontalLayout_2->addWidget(labelFit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        radioButtonFitExpand = new QRadioButton(PictureSettingWidget);
        radioButtonFitExpand->setObjectName("radioButtonFitExpand");

        horizontalLayout_3->addWidget(radioButtonFitExpand);

        labelFitExpand = new QLabel(PictureSettingWidget);
        labelFitExpand->setObjectName("labelFitExpand");
        labelFitExpand->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/FitToScreenByExpanding.png")));

        horizontalLayout_3->addWidget(labelFitExpand);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_3);

        groupBoxResize = new QGroupBox(PictureSettingWidget);
        groupBoxResize->setObjectName("groupBoxResize");
        groupBoxResize->setCheckable(true);
        verticalLayout = new QVBoxLayout(groupBoxResize);
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(groupBoxResize);
        label_3->setObjectName("label_3");
        label_3->setWordWrap(true);

        verticalLayout->addWidget(label_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_2 = new QLabel(groupBoxResize);
        label_2->setObjectName("label_2");

        horizontalLayout_4->addWidget(label_2);

        comboBoxBoundAmount = new QComboBox(groupBoxResize);
        comboBoxBoundAmount->addItem(QString());
        comboBoxBoundAmount->addItem(QString());
        comboBoxBoundAmount->addItem(QString());
        comboBoxBoundAmount->addItem(QString());
        comboBoxBoundAmount->addItem(QString());
        comboBoxBoundAmount->addItem(QString());
        comboBoxBoundAmount->addItem(QString());
        comboBoxBoundAmount->addItem(QString());
        comboBoxBoundAmount->setObjectName("comboBoxBoundAmount");

        horizontalLayout_4->addWidget(comboBoxBoundAmount);

        lineEditBound = new QLineEdit(groupBoxResize);
        lineEditBound->setObjectName("lineEditBound");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditBound->sizePolicy().hasHeightForWidth());
        lineEditBound->setSizePolicy(sizePolicy);
        lineEditBound->setMaximumSize(QSize(100, 20));

        horizontalLayout_4->addWidget(lineEditBound);

        labelBoundBy = new QLabel(groupBoxResize);
        labelBoundBy->setObjectName("labelBoundBy");

        horizontalLayout_4->addWidget(labelBoundBy);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(groupBoxResize);

        verticalSpacer = new QSpacerItem(20, 90, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        QWidget::setTabOrder(checkBoxExpand, radioButtonFit);
        QWidget::setTabOrder(radioButtonFit, radioButtonFitExpand);
        QWidget::setTabOrder(radioButtonFitExpand, groupBoxResize);
        QWidget::setTabOrder(groupBoxResize, comboBoxBoundAmount);
        QWidget::setTabOrder(comboBoxBoundAmount, lineEditBound);

        retranslateUi(PictureSettingWidget);

        QMetaObject::connectSlotsByName(PictureSettingWidget);
    } // setupUi

    void retranslateUi(QWidget *PictureSettingWidget)
    {
        label->setText(QCoreApplication::translate("PictureSettingWidget", "When Displaying Slideshows:", nullptr));
        checkBoxExpand->setText(QCoreApplication::translate("PictureSettingWidget", "Expand Small Images", nullptr));
        radioButtonFit->setText(QCoreApplication::translate("PictureSettingWidget", "Fit Images To Screen", nullptr));
        radioButtonFitExpand->setText(QCoreApplication::translate("PictureSettingWidget", "Fit Images To Screen By Expanding", nullptr));
        groupBoxResize->setTitle(QCoreApplication::translate("PictureSettingWidget", "Resize Large Images on Import", nullptr));
        label_3->setText(QCoreApplication::translate("PictureSettingWidget", "It is highly recommended to reduce large images on import. This will improve load, save and display time of slideshows.\n"
"We recommend to resize images to display screen size.", nullptr));
        label_2->setText(QCoreApplication::translate("PictureSettingWidget", "Bound Box:", nullptr));
        comboBoxBoundAmount->setItemText(0, QCoreApplication::translate("PictureSettingWidget", "800 x 800", nullptr));
        comboBoxBoundAmount->setItemText(1, QCoreApplication::translate("PictureSettingWidget", "1024 x 1024", nullptr));
        comboBoxBoundAmount->setItemText(2, QCoreApplication::translate("PictureSettingWidget", "1280 x 1280", nullptr));
        comboBoxBoundAmount->setItemText(3, QCoreApplication::translate("PictureSettingWidget", "1366 x 1366", nullptr));
        comboBoxBoundAmount->setItemText(4, QCoreApplication::translate("PictureSettingWidget", "1440 x 1440", nullptr));
        comboBoxBoundAmount->setItemText(5, QCoreApplication::translate("PictureSettingWidget", "1600 x 1600", nullptr));
        comboBoxBoundAmount->setItemText(6, QCoreApplication::translate("PictureSettingWidget", "1920 x 1920", nullptr));
        comboBoxBoundAmount->setItemText(7, QCoreApplication::translate("PictureSettingWidget", "Custom", nullptr));

        (void)PictureSettingWidget;
    } // retranslateUi

};

namespace Ui {
    class PictureSettingWidget: public Ui_PictureSettingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTURESETTINGWIDGET_H
