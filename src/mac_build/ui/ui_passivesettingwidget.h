/********************************************************************************
** Form generated from reading UI file 'passivesettingwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSIVESETTINGWIDGET_H
#define UI_PASSIVESETTINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PassiveSettingWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBoxBackground;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEditBackgroundPath;
    QPushButton *buttonBrowseBackgound;
    QGroupBox *groupBoxDisp2Sets;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxBackground2;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEditBackgroundPath2;
    QPushButton *buttonBrowseBackgound2;
    QGroupBox *groupBoxDisp3Sets;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBoxBackground3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditBackgroundPath3;
    QPushButton *buttonBrowseBackgound3;
    QGroupBox *groupBoxDisp4Sets;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBoxBackground4;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEditBackgroundPath4;
    QPushButton *buttonBrowseBackgound4;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonDefault;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *PassiveSettingWidget)
    {
        if (PassiveSettingWidget->objectName().isEmpty())
            PassiveSettingWidget->setObjectName("PassiveSettingWidget");
        PassiveSettingWidget->resize(441, 419);
        verticalLayout_2 = new QVBoxLayout(PassiveSettingWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBoxBackground = new QGroupBox(PassiveSettingWidget);
        groupBoxBackground->setObjectName("groupBoxBackground");
        groupBoxBackground->setCheckable(true);
        horizontalLayout_2 = new QHBoxLayout(groupBoxBackground);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineEditBackgroundPath = new QLineEdit(groupBoxBackground);
        lineEditBackgroundPath->setObjectName("lineEditBackgroundPath");
        lineEditBackgroundPath->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEditBackgroundPath);

        buttonBrowseBackgound = new QPushButton(groupBoxBackground);
        buttonBrowseBackgound->setObjectName("buttonBrowseBackgound");

        horizontalLayout_2->addWidget(buttonBrowseBackgound);


        verticalLayout_2->addWidget(groupBoxBackground);

        groupBoxDisp2Sets = new QGroupBox(PassiveSettingWidget);
        groupBoxDisp2Sets->setObjectName("groupBoxDisp2Sets");
        QPalette palette;
        QBrush brush(QColor(85, 0, 0, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        QBrush brush1(QColor(118, 50, 50, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush1);
        QBrush brush2(QColor(85, 0, 0, 128));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush3);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush3);
        QBrush brush4(QColor(0, 120, 215, 255));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush4);
        QBrush brush5(QColor(85, 0, 127, 128));
        brush5.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        groupBoxDisp2Sets->setPalette(palette);
        groupBoxDisp2Sets->setFlat(true);
        groupBoxDisp2Sets->setCheckable(true);
        verticalLayout = new QVBoxLayout(groupBoxDisp2Sets);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, -1, 0, 0);
        groupBoxBackground2 = new QGroupBox(groupBoxDisp2Sets);
        groupBoxBackground2->setObjectName("groupBoxBackground2");
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        groupBoxBackground2->setPalette(palette1);
        groupBoxBackground2->setCheckable(true);
        horizontalLayout_4 = new QHBoxLayout(groupBoxBackground2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        lineEditBackgroundPath2 = new QLineEdit(groupBoxBackground2);
        lineEditBackgroundPath2->setObjectName("lineEditBackgroundPath2");
        lineEditBackgroundPath2->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEditBackgroundPath2);

        buttonBrowseBackgound2 = new QPushButton(groupBoxBackground2);
        buttonBrowseBackgound2->setObjectName("buttonBrowseBackgound2");

        horizontalLayout_4->addWidget(buttonBrowseBackgound2);


        verticalLayout->addWidget(groupBoxBackground2);


        verticalLayout_2->addWidget(groupBoxDisp2Sets);

        groupBoxDisp3Sets = new QGroupBox(PassiveSettingWidget);
        groupBoxDisp3Sets->setObjectName("groupBoxDisp3Sets");
        QPalette palette2;
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush3);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush3);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush4);
        QBrush brush6(QColor(0, 0, 0, 128));
        brush6.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush6);
#endif
        groupBoxDisp3Sets->setPalette(palette2);
        groupBoxDisp3Sets->setFlat(true);
        groupBoxDisp3Sets->setCheckable(true);
        verticalLayout_3 = new QVBoxLayout(groupBoxDisp3Sets);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 9, 0, 0);
        groupBoxBackground3 = new QGroupBox(groupBoxDisp3Sets);
        groupBoxBackground3->setObjectName("groupBoxBackground3");
        QPalette palette3;
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        groupBoxBackground3->setPalette(palette3);
        groupBoxBackground3->setCheckable(true);
        horizontalLayout = new QHBoxLayout(groupBoxBackground3);
        horizontalLayout->setObjectName("horizontalLayout");
        lineEditBackgroundPath3 = new QLineEdit(groupBoxBackground3);
        lineEditBackgroundPath3->setObjectName("lineEditBackgroundPath3");

        horizontalLayout->addWidget(lineEditBackgroundPath3);

        buttonBrowseBackgound3 = new QPushButton(groupBoxBackground3);
        buttonBrowseBackgound3->setObjectName("buttonBrowseBackgound3");

        horizontalLayout->addWidget(buttonBrowseBackgound3);


        verticalLayout_3->addWidget(groupBoxBackground3);


        verticalLayout_2->addWidget(groupBoxDisp3Sets);

        groupBoxDisp4Sets = new QGroupBox(PassiveSettingWidget);
        groupBoxDisp4Sets->setObjectName("groupBoxDisp4Sets");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBoxDisp4Sets->sizePolicy().hasHeightForWidth());
        groupBoxDisp4Sets->setSizePolicy(sizePolicy);
        QPalette palette4;
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush3);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush3);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush6);
#endif
        groupBoxDisp4Sets->setPalette(palette4);
        groupBoxDisp4Sets->setFlat(true);
        groupBoxDisp4Sets->setCheckable(true);
        verticalLayout_4 = new QVBoxLayout(groupBoxDisp4Sets);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 9, 0, 0);
        groupBoxBackground4 = new QGroupBox(groupBoxDisp4Sets);
        groupBoxBackground4->setObjectName("groupBoxBackground4");
        QPalette palette5;
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        groupBoxBackground4->setPalette(palette5);
        groupBoxBackground4->setCheckable(true);
        horizontalLayout_3 = new QHBoxLayout(groupBoxBackground4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lineEditBackgroundPath4 = new QLineEdit(groupBoxBackground4);
        lineEditBackgroundPath4->setObjectName("lineEditBackgroundPath4");

        horizontalLayout_3->addWidget(lineEditBackgroundPath4);

        buttonBrowseBackgound4 = new QPushButton(groupBoxBackground4);
        buttonBrowseBackgound4->setObjectName("buttonBrowseBackgound4");

        horizontalLayout_3->addWidget(buttonBrowseBackgound4);


        verticalLayout_4->addWidget(groupBoxBackground4);


        verticalLayout_2->addWidget(groupBoxDisp4Sets);

        verticalSpacer = new QSpacerItem(20, 32, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        pushButtonDefault = new QPushButton(PassiveSettingWidget);
        pushButtonDefault->setObjectName("pushButtonDefault");

        gridLayout_2->addWidget(pushButtonDefault, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        QWidget::setTabOrder(groupBoxBackground, buttonBrowseBackgound);
        QWidget::setTabOrder(buttonBrowseBackgound, lineEditBackgroundPath);
        QWidget::setTabOrder(lineEditBackgroundPath, groupBoxDisp2Sets);
        QWidget::setTabOrder(groupBoxDisp2Sets, groupBoxBackground2);
        QWidget::setTabOrder(groupBoxBackground2, buttonBrowseBackgound2);
        QWidget::setTabOrder(buttonBrowseBackgound2, lineEditBackgroundPath2);
        QWidget::setTabOrder(lineEditBackgroundPath2, pushButtonDefault);

        retranslateUi(PassiveSettingWidget);

        QMetaObject::connectSlotsByName(PassiveSettingWidget);
    } // setupUi

    void retranslateUi(QWidget *PassiveSettingWidget)
    {
        groupBoxBackground->setTitle(QCoreApplication::translate("PassiveSettingWidget", "Use Passive Background Image", nullptr));
        buttonBrowseBackgound->setText(QCoreApplication::translate("PassiveSettingWidget", "Browse...", nullptr));
        groupBoxDisp2Sets->setTitle(QCoreApplication::translate("PassiveSettingWidget", "Use Separate Secondary Display Screen Settings", nullptr));
        groupBoxBackground2->setTitle(QCoreApplication::translate("PassiveSettingWidget", "Use Passive Background Image", nullptr));
        buttonBrowseBackgound2->setText(QCoreApplication::translate("PassiveSettingWidget", "Browse...", nullptr));
        groupBoxDisp3Sets->setTitle(QCoreApplication::translate("PassiveSettingWidget", "Use Separate Tertiary Display Screen Settings", nullptr));
        groupBoxBackground3->setTitle(QCoreApplication::translate("PassiveSettingWidget", "Use Passive Background Image", nullptr));
        buttonBrowseBackgound3->setText(QCoreApplication::translate("PassiveSettingWidget", "Browse...", nullptr));
        groupBoxDisp4Sets->setTitle(QCoreApplication::translate("PassiveSettingWidget", "Use Separate Quaternary Display Screen Settings", nullptr));
        groupBoxBackground4->setTitle(QCoreApplication::translate("PassiveSettingWidget", "Use Passive Background Image", nullptr));
        buttonBrowseBackgound4->setText(QCoreApplication::translate("PassiveSettingWidget", "Browse...", nullptr));
        pushButtonDefault->setText(QCoreApplication::translate("PassiveSettingWidget", "Reset All To Default", nullptr));
        (void)PassiveSettingWidget;
    } // retranslateUi

};

namespace Ui {
    class PassiveSettingWidget: public Ui_PassiveSettingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSIVESETTINGWIDGET_H
