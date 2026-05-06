/********************************************************************************
** Form generated from reading UI file 'announcementsettingwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANNOUNCEMENTSETTINGWIDGET_H
#define UI_ANNOUNCEMENTSETTINGWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnnouncementSettingWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBoxEffects;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxUseFading;
    QCheckBox *checkBoxUseShadow;
    QCheckBox *checkBoxUseBlurredShadow;
    QGroupBox *groupBoxBackground;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEditBackground;
    QPushButton *buttonBackground;
    QPushButton *pushButtonApplyToAll;
    QGroupBox *groupBoxTextProperties;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *toolButtonColor;
    QGraphicsView *graphicViewTextColor;
    QFrame *line;
    QToolButton *toolButtonFont;
    QLabel *labelFont;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labelAlignment;
    QComboBox *comboBoxVerticalAling;
    QComboBox *comboBoxHorizontalAling;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBoxUseDisp2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxEffects2;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *checkBoxUseFading2;
    QCheckBox *checkBoxUseShadow2;
    QCheckBox *checkBoxUseBlurredShadow2;
    QGroupBox *groupBoxBackground2;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEditBackground2;
    QPushButton *buttonBackground2;
    QGroupBox *groupBoxTextProperties2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QToolButton *toolButtonColor2;
    QGraphicsView *graphicViewTextColor2;
    QFrame *line2;
    QToolButton *toolButtonFont2;
    QLabel *labelFont2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *labelAlignmentl2;
    QComboBox *comboBoxVerticalAling2;
    QComboBox *comboBoxHorizontalAling2;
    QSpacerItem *horizontalSpacer15;
    QGroupBox *groupBoxUseDisp3;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBoxEffects3;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *checkBoxUseFading3;
    QCheckBox *checkBoxUseShadow3;
    QCheckBox *checkBoxUseBlurredShadow3;
    QGroupBox *groupBoxBackground3;
    QHBoxLayout *horizontalLayout_12;
    QLineEdit *lineEditBackground3;
    QPushButton *buttonBackground3;
    QGroupBox *groupBoxTextProperties3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_14;
    QToolButton *toolButtonColor3;
    QGraphicsView *graphicViewTextColor3;
    QFrame *line_3;
    QToolButton *toolButtonFont3;
    QLabel *labelFont3;
    QHBoxLayout *horizontalLayout_15;
    QLabel *labelAlignmentl3;
    QComboBox *comboBoxVerticalAling3;
    QComboBox *comboBoxHorizontalAling3;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBoxUseDisp4;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBoxEffects4;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *checkBoxUseFading4;
    QCheckBox *checkBoxUseShadow4;
    QCheckBox *checkBoxUseBlurredShadow4;
    QGroupBox *groupBoxBackground4;
    QHBoxLayout *horizontalLayout_13;
    QLineEdit *lineEditBackground4;
    QPushButton *buttonBackground4;
    QGroupBox *groupBoxTextProperties4;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_16;
    QToolButton *toolButtonColor4;
    QGraphicsView *graphicViewTextColor4;
    QFrame *line_2;
    QToolButton *toolButtonFont4;
    QLabel *labelFont4;
    QHBoxLayout *horizontalLayout_17;
    QLabel *labelAlignmentl4;
    QComboBox *comboBoxVerticalAling4;
    QComboBox *comboBoxHorizontalAling4;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonDefault;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *AnnouncementSettingWidget)
    {
        if (AnnouncementSettingWidget->objectName().isEmpty())
            AnnouncementSettingWidget->setObjectName("AnnouncementSettingWidget");
        AnnouncementSettingWidget->resize(437, 1100);
        verticalLayout_2 = new QVBoxLayout(AnnouncementSettingWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBoxEffects = new QGroupBox(AnnouncementSettingWidget);
        groupBoxEffects->setObjectName("groupBoxEffects");
        horizontalLayout_2 = new QHBoxLayout(groupBoxEffects);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        checkBoxUseFading = new QCheckBox(groupBoxEffects);
        checkBoxUseFading->setObjectName("checkBoxUseFading");

        horizontalLayout_2->addWidget(checkBoxUseFading);

        checkBoxUseShadow = new QCheckBox(groupBoxEffects);
        checkBoxUseShadow->setObjectName("checkBoxUseShadow");

        horizontalLayout_2->addWidget(checkBoxUseShadow);

        checkBoxUseBlurredShadow = new QCheckBox(groupBoxEffects);
        checkBoxUseBlurredShadow->setObjectName("checkBoxUseBlurredShadow");
        checkBoxUseBlurredShadow->setEnabled(false);

        horizontalLayout_2->addWidget(checkBoxUseBlurredShadow);


        verticalLayout_2->addWidget(groupBoxEffects);

        groupBoxBackground = new QGroupBox(AnnouncementSettingWidget);
        groupBoxBackground->setObjectName("groupBoxBackground");
        groupBoxBackground->setCheckable(true);
        horizontalLayout_4 = new QHBoxLayout(groupBoxBackground);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        lineEditBackground = new QLineEdit(groupBoxBackground);
        lineEditBackground->setObjectName("lineEditBackground");
        lineEditBackground->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEditBackground);

        buttonBackground = new QPushButton(groupBoxBackground);
        buttonBackground->setObjectName("buttonBackground");

        horizontalLayout_4->addWidget(buttonBackground);

        pushButtonApplyToAll = new QPushButton(groupBoxBackground);
        pushButtonApplyToAll->setObjectName("pushButtonApplyToAll");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/common.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonApplyToAll->setIcon(icon);

        horizontalLayout_4->addWidget(pushButtonApplyToAll);


        verticalLayout_2->addWidget(groupBoxBackground);

        groupBoxTextProperties = new QGroupBox(AnnouncementSettingWidget);
        groupBoxTextProperties->setObjectName("groupBoxTextProperties");
        verticalLayout_3 = new QVBoxLayout(groupBoxTextProperties);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        toolButtonColor = new QToolButton(groupBoxTextProperties);
        toolButtonColor->setObjectName("toolButtonColor");

        horizontalLayout_3->addWidget(toolButtonColor);

        graphicViewTextColor = new QGraphicsView(groupBoxTextProperties);
        graphicViewTextColor->setObjectName("graphicViewTextColor");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphicViewTextColor->sizePolicy().hasHeightForWidth());
        graphicViewTextColor->setSizePolicy(sizePolicy);
        graphicViewTextColor->setMinimumSize(QSize(50, 20));
        graphicViewTextColor->setMaximumSize(QSize(50, 20));

        horizontalLayout_3->addWidget(graphicViewTextColor);

        line = new QFrame(groupBoxTextProperties);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_3->addWidget(line);

        toolButtonFont = new QToolButton(groupBoxTextProperties);
        toolButtonFont->setObjectName("toolButtonFont");

        horizontalLayout_3->addWidget(toolButtonFont);

        labelFont = new QLabel(groupBoxTextProperties);
        labelFont->setObjectName("labelFont");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelFont->sizePolicy().hasHeightForWidth());
        labelFont->setSizePolicy(sizePolicy1);
        labelFont->setWordWrap(true);

        horizontalLayout_3->addWidget(labelFont);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        labelAlignment = new QLabel(groupBoxTextProperties);
        labelAlignment->setObjectName("labelAlignment");

        horizontalLayout_8->addWidget(labelAlignment);

        comboBoxVerticalAling = new QComboBox(groupBoxTextProperties);
        comboBoxVerticalAling->addItem(QString());
        comboBoxVerticalAling->addItem(QString());
        comboBoxVerticalAling->addItem(QString());
        comboBoxVerticalAling->setObjectName("comboBoxVerticalAling");

        horizontalLayout_8->addWidget(comboBoxVerticalAling);

        comboBoxHorizontalAling = new QComboBox(groupBoxTextProperties);
        comboBoxHorizontalAling->addItem(QString());
        comboBoxHorizontalAling->addItem(QString());
        comboBoxHorizontalAling->addItem(QString());
        comboBoxHorizontalAling->setObjectName("comboBoxHorizontalAling");

        horizontalLayout_8->addWidget(comboBoxHorizontalAling);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_8);


        verticalLayout_2->addWidget(groupBoxTextProperties);

        groupBoxUseDisp2 = new QGroupBox(AnnouncementSettingWidget);
        groupBoxUseDisp2->setObjectName("groupBoxUseDisp2");
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
        QBrush brush4(QColor(51, 153, 255, 255));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush4);
        QBrush brush5(QColor(85, 0, 127, 128));
        brush5.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        groupBoxUseDisp2->setPalette(palette);
        groupBoxUseDisp2->setFlat(true);
        groupBoxUseDisp2->setCheckable(true);
        verticalLayout = new QVBoxLayout(groupBoxUseDisp2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, -1, 0, 0);
        groupBoxEffects2 = new QGroupBox(groupBoxUseDisp2);
        groupBoxEffects2->setObjectName("groupBoxEffects2");
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        groupBoxEffects2->setPalette(palette1);
        horizontalLayout_7 = new QHBoxLayout(groupBoxEffects2);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        checkBoxUseFading2 = new QCheckBox(groupBoxEffects2);
        checkBoxUseFading2->setObjectName("checkBoxUseFading2");

        horizontalLayout_7->addWidget(checkBoxUseFading2);

        checkBoxUseShadow2 = new QCheckBox(groupBoxEffects2);
        checkBoxUseShadow2->setObjectName("checkBoxUseShadow2");

        horizontalLayout_7->addWidget(checkBoxUseShadow2);

        checkBoxUseBlurredShadow2 = new QCheckBox(groupBoxEffects2);
        checkBoxUseBlurredShadow2->setObjectName("checkBoxUseBlurredShadow2");
        checkBoxUseBlurredShadow2->setEnabled(false);

        horizontalLayout_7->addWidget(checkBoxUseBlurredShadow2);


        verticalLayout->addWidget(groupBoxEffects2);

        groupBoxBackground2 = new QGroupBox(groupBoxUseDisp2);
        groupBoxBackground2->setObjectName("groupBoxBackground2");
        QPalette palette2;
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        groupBoxBackground2->setPalette(palette2);
        groupBoxBackground2->setCheckable(true);
        horizontalLayout_5 = new QHBoxLayout(groupBoxBackground2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        lineEditBackground2 = new QLineEdit(groupBoxBackground2);
        lineEditBackground2->setObjectName("lineEditBackground2");
        lineEditBackground2->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEditBackground2);

        buttonBackground2 = new QPushButton(groupBoxBackground2);
        buttonBackground2->setObjectName("buttonBackground2");

        horizontalLayout_5->addWidget(buttonBackground2);


        verticalLayout->addWidget(groupBoxBackground2);

        groupBoxTextProperties2 = new QGroupBox(groupBoxUseDisp2);
        groupBoxTextProperties2->setObjectName("groupBoxTextProperties2");
        QPalette palette3;
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        groupBoxTextProperties2->setPalette(palette3);
        verticalLayout_4 = new QVBoxLayout(groupBoxTextProperties2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        toolButtonColor2 = new QToolButton(groupBoxTextProperties2);
        toolButtonColor2->setObjectName("toolButtonColor2");

        horizontalLayout_6->addWidget(toolButtonColor2);

        graphicViewTextColor2 = new QGraphicsView(groupBoxTextProperties2);
        graphicViewTextColor2->setObjectName("graphicViewTextColor2");
        sizePolicy.setHeightForWidth(graphicViewTextColor2->sizePolicy().hasHeightForWidth());
        graphicViewTextColor2->setSizePolicy(sizePolicy);
        graphicViewTextColor2->setMinimumSize(QSize(50, 20));
        graphicViewTextColor2->setMaximumSize(QSize(50, 20));

        horizontalLayout_6->addWidget(graphicViewTextColor2);

        line2 = new QFrame(groupBoxTextProperties2);
        line2->setObjectName("line2");
        line2->setFrameShape(QFrame::Shape::VLine);
        line2->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_6->addWidget(line2);

        toolButtonFont2 = new QToolButton(groupBoxTextProperties2);
        toolButtonFont2->setObjectName("toolButtonFont2");

        horizontalLayout_6->addWidget(toolButtonFont2);

        labelFont2 = new QLabel(groupBoxTextProperties2);
        labelFont2->setObjectName("labelFont2");
        sizePolicy1.setHeightForWidth(labelFont2->sizePolicy().hasHeightForWidth());
        labelFont2->setSizePolicy(sizePolicy1);
        labelFont2->setWordWrap(true);

        horizontalLayout_6->addWidget(labelFont2);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        labelAlignmentl2 = new QLabel(groupBoxTextProperties2);
        labelAlignmentl2->setObjectName("labelAlignmentl2");

        horizontalLayout_9->addWidget(labelAlignmentl2);

        comboBoxVerticalAling2 = new QComboBox(groupBoxTextProperties2);
        comboBoxVerticalAling2->addItem(QString());
        comboBoxVerticalAling2->addItem(QString());
        comboBoxVerticalAling2->addItem(QString());
        comboBoxVerticalAling2->setObjectName("comboBoxVerticalAling2");

        horizontalLayout_9->addWidget(comboBoxVerticalAling2);

        comboBoxHorizontalAling2 = new QComboBox(groupBoxTextProperties2);
        comboBoxHorizontalAling2->addItem(QString());
        comboBoxHorizontalAling2->addItem(QString());
        comboBoxHorizontalAling2->addItem(QString());
        comboBoxHorizontalAling2->setObjectName("comboBoxHorizontalAling2");

        horizontalLayout_9->addWidget(comboBoxHorizontalAling2);

        horizontalSpacer15 = new QSpacerItem(59, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer15);


        verticalLayout_4->addLayout(horizontalLayout_9);


        verticalLayout->addWidget(groupBoxTextProperties2);


        verticalLayout_2->addWidget(groupBoxUseDisp2);

        groupBoxUseDisp3 = new QGroupBox(AnnouncementSettingWidget);
        groupBoxUseDisp3->setObjectName("groupBoxUseDisp3");
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
        QBrush brush6(QColor(0, 120, 215, 255));
        brush6.setStyle(Qt::BrushStyle::SolidPattern);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush6);
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush7);
#endif
        groupBoxUseDisp3->setPalette(palette4);
        groupBoxUseDisp3->setFlat(true);
        groupBoxUseDisp3->setCheckable(true);
        verticalLayout_5 = new QVBoxLayout(groupBoxUseDisp3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 9, 0, 0);
        groupBoxEffects3 = new QGroupBox(groupBoxUseDisp3);
        groupBoxEffects3->setObjectName("groupBoxEffects3");
        QPalette palette5;
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        groupBoxEffects3->setPalette(palette5);
        groupBoxEffects3->setCheckable(false);
        horizontalLayout_10 = new QHBoxLayout(groupBoxEffects3);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(9, 9, 9, 9);
        checkBoxUseFading3 = new QCheckBox(groupBoxEffects3);
        checkBoxUseFading3->setObjectName("checkBoxUseFading3");

        horizontalLayout_10->addWidget(checkBoxUseFading3);

        checkBoxUseShadow3 = new QCheckBox(groupBoxEffects3);
        checkBoxUseShadow3->setObjectName("checkBoxUseShadow3");

        horizontalLayout_10->addWidget(checkBoxUseShadow3);

        checkBoxUseBlurredShadow3 = new QCheckBox(groupBoxEffects3);
        checkBoxUseBlurredShadow3->setObjectName("checkBoxUseBlurredShadow3");
        checkBoxUseBlurredShadow3->setEnabled(false);

        horizontalLayout_10->addWidget(checkBoxUseBlurredShadow3);


        verticalLayout_5->addWidget(groupBoxEffects3);

        groupBoxBackground3 = new QGroupBox(groupBoxUseDisp3);
        groupBoxBackground3->setObjectName("groupBoxBackground3");
        QPalette palette6;
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        groupBoxBackground3->setPalette(palette6);
        groupBoxBackground3->setCheckable(true);
        horizontalLayout_12 = new QHBoxLayout(groupBoxBackground3);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(9, 9, 9, 9);
        lineEditBackground3 = new QLineEdit(groupBoxBackground3);
        lineEditBackground3->setObjectName("lineEditBackground3");

        horizontalLayout_12->addWidget(lineEditBackground3);

        buttonBackground3 = new QPushButton(groupBoxBackground3);
        buttonBackground3->setObjectName("buttonBackground3");

        horizontalLayout_12->addWidget(buttonBackground3);


        verticalLayout_5->addWidget(groupBoxBackground3);

        groupBoxTextProperties3 = new QGroupBox(groupBoxUseDisp3);
        groupBoxTextProperties3->setObjectName("groupBoxTextProperties3");
        QPalette palette7;
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        groupBoxTextProperties3->setPalette(palette7);
        verticalLayout_7 = new QVBoxLayout(groupBoxTextProperties3);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(9, 9, 9, 9);
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_14->setContentsMargins(-1, 0, -1, 0);
        toolButtonColor3 = new QToolButton(groupBoxTextProperties3);
        toolButtonColor3->setObjectName("toolButtonColor3");

        horizontalLayout_14->addWidget(toolButtonColor3);

        graphicViewTextColor3 = new QGraphicsView(groupBoxTextProperties3);
        graphicViewTextColor3->setObjectName("graphicViewTextColor3");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(graphicViewTextColor3->sizePolicy().hasHeightForWidth());
        graphicViewTextColor3->setSizePolicy(sizePolicy2);
        graphicViewTextColor3->setMinimumSize(QSize(50, 20));
        graphicViewTextColor3->setMaximumSize(QSize(50, 20));

        horizontalLayout_14->addWidget(graphicViewTextColor3);

        line_3 = new QFrame(groupBoxTextProperties3);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_14->addWidget(line_3);

        toolButtonFont3 = new QToolButton(groupBoxTextProperties3);
        toolButtonFont3->setObjectName("toolButtonFont3");

        horizontalLayout_14->addWidget(toolButtonFont3);

        labelFont3 = new QLabel(groupBoxTextProperties3);
        labelFont3->setObjectName("labelFont3");

        horizontalLayout_14->addWidget(labelFont3);


        verticalLayout_7->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(-1, 0, -1, 0);
        labelAlignmentl3 = new QLabel(groupBoxTextProperties3);
        labelAlignmentl3->setObjectName("labelAlignmentl3");

        horizontalLayout_15->addWidget(labelAlignmentl3);

        comboBoxVerticalAling3 = new QComboBox(groupBoxTextProperties3);
        comboBoxVerticalAling3->addItem(QString());
        comboBoxVerticalAling3->addItem(QString());
        comboBoxVerticalAling3->addItem(QString());
        comboBoxVerticalAling3->setObjectName("comboBoxVerticalAling3");

        horizontalLayout_15->addWidget(comboBoxVerticalAling3);

        comboBoxHorizontalAling3 = new QComboBox(groupBoxTextProperties3);
        comboBoxHorizontalAling3->addItem(QString());
        comboBoxHorizontalAling3->addItem(QString());
        comboBoxHorizontalAling3->addItem(QString());
        comboBoxHorizontalAling3->setObjectName("comboBoxHorizontalAling3");

        horizontalLayout_15->addWidget(comboBoxHorizontalAling3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_3);


        verticalLayout_7->addLayout(horizontalLayout_15);


        verticalLayout_5->addWidget(groupBoxTextProperties3);


        verticalLayout_2->addWidget(groupBoxUseDisp3);

        groupBoxUseDisp4 = new QGroupBox(AnnouncementSettingWidget);
        groupBoxUseDisp4->setObjectName("groupBoxUseDisp4");
        QPalette palette8;
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush3);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush3);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush7);
#endif
        groupBoxUseDisp4->setPalette(palette8);
        groupBoxUseDisp4->setFlat(true);
        groupBoxUseDisp4->setCheckable(true);
        verticalLayout_6 = new QVBoxLayout(groupBoxUseDisp4);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 9, 0, 0);
        groupBoxEffects4 = new QGroupBox(groupBoxUseDisp4);
        groupBoxEffects4->setObjectName("groupBoxEffects4");
        QPalette palette9;
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        groupBoxEffects4->setPalette(palette9);
        groupBoxEffects4->setCheckable(false);
        horizontalLayout_11 = new QHBoxLayout(groupBoxEffects4);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(9, 9, 9, 9);
        checkBoxUseFading4 = new QCheckBox(groupBoxEffects4);
        checkBoxUseFading4->setObjectName("checkBoxUseFading4");

        horizontalLayout_11->addWidget(checkBoxUseFading4);

        checkBoxUseShadow4 = new QCheckBox(groupBoxEffects4);
        checkBoxUseShadow4->setObjectName("checkBoxUseShadow4");

        horizontalLayout_11->addWidget(checkBoxUseShadow4);

        checkBoxUseBlurredShadow4 = new QCheckBox(groupBoxEffects4);
        checkBoxUseBlurredShadow4->setObjectName("checkBoxUseBlurredShadow4");
        checkBoxUseBlurredShadow4->setEnabled(false);

        horizontalLayout_11->addWidget(checkBoxUseBlurredShadow4);


        verticalLayout_6->addWidget(groupBoxEffects4);

        groupBoxBackground4 = new QGroupBox(groupBoxUseDisp4);
        groupBoxBackground4->setObjectName("groupBoxBackground4");
        QPalette palette10;
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        groupBoxBackground4->setPalette(palette10);
        groupBoxBackground4->setCheckable(true);
        horizontalLayout_13 = new QHBoxLayout(groupBoxBackground4);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(9, 9, 9, 9);
        lineEditBackground4 = new QLineEdit(groupBoxBackground4);
        lineEditBackground4->setObjectName("lineEditBackground4");

        horizontalLayout_13->addWidget(lineEditBackground4);

        buttonBackground4 = new QPushButton(groupBoxBackground4);
        buttonBackground4->setObjectName("buttonBackground4");

        horizontalLayout_13->addWidget(buttonBackground4);


        verticalLayout_6->addWidget(groupBoxBackground4);

        groupBoxTextProperties4 = new QGroupBox(groupBoxUseDisp4);
        groupBoxTextProperties4->setObjectName("groupBoxTextProperties4");
        QPalette palette11;
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        groupBoxTextProperties4->setPalette(palette11);
        verticalLayout_8 = new QVBoxLayout(groupBoxTextProperties4);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(9, 9, 9, 9);
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalLayout_16->setContentsMargins(-1, 0, -1, 0);
        toolButtonColor4 = new QToolButton(groupBoxTextProperties4);
        toolButtonColor4->setObjectName("toolButtonColor4");

        horizontalLayout_16->addWidget(toolButtonColor4);

        graphicViewTextColor4 = new QGraphicsView(groupBoxTextProperties4);
        graphicViewTextColor4->setObjectName("graphicViewTextColor4");
        sizePolicy2.setHeightForWidth(graphicViewTextColor4->sizePolicy().hasHeightForWidth());
        graphicViewTextColor4->setSizePolicy(sizePolicy2);
        graphicViewTextColor4->setMinimumSize(QSize(50, 20));
        graphicViewTextColor4->setMaximumSize(QSize(50, 20));

        horizontalLayout_16->addWidget(graphicViewTextColor4);

        line_2 = new QFrame(groupBoxTextProperties4);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_16->addWidget(line_2);

        toolButtonFont4 = new QToolButton(groupBoxTextProperties4);
        toolButtonFont4->setObjectName("toolButtonFont4");

        horizontalLayout_16->addWidget(toolButtonFont4);

        labelFont4 = new QLabel(groupBoxTextProperties4);
        labelFont4->setObjectName("labelFont4");

        horizontalLayout_16->addWidget(labelFont4);


        verticalLayout_8->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalLayout_17->setContentsMargins(-1, 0, -1, 0);
        labelAlignmentl4 = new QLabel(groupBoxTextProperties4);
        labelAlignmentl4->setObjectName("labelAlignmentl4");

        horizontalLayout_17->addWidget(labelAlignmentl4);

        comboBoxVerticalAling4 = new QComboBox(groupBoxTextProperties4);
        comboBoxVerticalAling4->addItem(QString());
        comboBoxVerticalAling4->addItem(QString());
        comboBoxVerticalAling4->addItem(QString());
        comboBoxVerticalAling4->setObjectName("comboBoxVerticalAling4");

        horizontalLayout_17->addWidget(comboBoxVerticalAling4);

        comboBoxHorizontalAling4 = new QComboBox(groupBoxTextProperties4);
        comboBoxHorizontalAling4->addItem(QString());
        comboBoxHorizontalAling4->addItem(QString());
        comboBoxHorizontalAling4->addItem(QString());
        comboBoxHorizontalAling4->setObjectName("comboBoxHorizontalAling4");

        horizontalLayout_17->addWidget(comboBoxHorizontalAling4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_4);


        verticalLayout_8->addLayout(horizontalLayout_17);


        verticalLayout_6->addWidget(groupBoxTextProperties4);


        verticalLayout_2->addWidget(groupBoxUseDisp4);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonDefault = new QPushButton(AnnouncementSettingWidget);
        pushButtonDefault->setObjectName("pushButtonDefault");

        horizontalLayout->addWidget(pushButtonDefault);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        QWidget::setTabOrder(checkBoxUseFading, checkBoxUseShadow);
        QWidget::setTabOrder(checkBoxUseShadow, checkBoxUseBlurredShadow);
        QWidget::setTabOrder(checkBoxUseBlurredShadow, groupBoxBackground);
        QWidget::setTabOrder(groupBoxBackground, buttonBackground);
        QWidget::setTabOrder(buttonBackground, lineEditBackground);
        QWidget::setTabOrder(lineEditBackground, toolButtonColor);
        QWidget::setTabOrder(toolButtonColor, graphicViewTextColor);
        QWidget::setTabOrder(graphicViewTextColor, toolButtonFont);
        QWidget::setTabOrder(toolButtonFont, comboBoxVerticalAling);
        QWidget::setTabOrder(comboBoxVerticalAling, comboBoxHorizontalAling);
        QWidget::setTabOrder(comboBoxHorizontalAling, groupBoxUseDisp2);
        QWidget::setTabOrder(groupBoxUseDisp2, checkBoxUseFading2);
        QWidget::setTabOrder(checkBoxUseFading2, checkBoxUseShadow2);
        QWidget::setTabOrder(checkBoxUseShadow2, checkBoxUseBlurredShadow2);
        QWidget::setTabOrder(checkBoxUseBlurredShadow2, groupBoxBackground2);
        QWidget::setTabOrder(groupBoxBackground2, buttonBackground2);
        QWidget::setTabOrder(buttonBackground2, lineEditBackground2);
        QWidget::setTabOrder(lineEditBackground2, toolButtonColor2);
        QWidget::setTabOrder(toolButtonColor2, graphicViewTextColor2);
        QWidget::setTabOrder(graphicViewTextColor2, toolButtonFont2);
        QWidget::setTabOrder(toolButtonFont2, comboBoxVerticalAling2);
        QWidget::setTabOrder(comboBoxVerticalAling2, comboBoxHorizontalAling2);
        QWidget::setTabOrder(comboBoxHorizontalAling2, pushButtonDefault);

        retranslateUi(AnnouncementSettingWidget);

        QMetaObject::connectSlotsByName(AnnouncementSettingWidget);
    } // setupUi

    void retranslateUi(QWidget *AnnouncementSettingWidget)
    {
        groupBoxEffects->setTitle(QCoreApplication::translate("AnnouncementSettingWidget", "Effects", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxUseFading->setToolTip(QCoreApplication::translate("AnnouncementSettingWidget", "If checked, when switching displayed text, fades the old text out and fades the new text in .", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxUseFading->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Use fading effects", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxUseShadow->setToolTip(QCoreApplication::translate("AnnouncementSettingWidget", "Useful when using a wallpaper image. Displays a fancy shadow effect.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxUseShadow->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Use shadow", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxUseBlurredShadow->setToolTip(QCoreApplication::translate("AnnouncementSettingWidget", "Useful when using a wallpaper image. Displays a fancy shadow effect.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxUseBlurredShadow->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Use blurred shadow", nullptr));
        groupBoxBackground->setTitle(QCoreApplication::translate("AnnouncementSettingWidget", "Use Background Image", nullptr));
        buttonBackground->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Browse...", nullptr));
#if QT_CONFIG(tooltip)
        pushButtonApplyToAll->setToolTip(QCoreApplication::translate("AnnouncementSettingWidget", "Apply this background to all active backgrounds.", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxTextProperties->setTitle(QCoreApplication::translate("AnnouncementSettingWidget", "Text Properties", nullptr));
        toolButtonColor->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Color...", nullptr));
        toolButtonFont->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Font...", nullptr));
        labelAlignment->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Alignment:", nullptr));
        comboBoxVerticalAling->setItemText(0, QCoreApplication::translate("AnnouncementSettingWidget", "Top", nullptr));
        comboBoxVerticalAling->setItemText(1, QCoreApplication::translate("AnnouncementSettingWidget", "Middle", nullptr));
        comboBoxVerticalAling->setItemText(2, QCoreApplication::translate("AnnouncementSettingWidget", "Bottom", nullptr));

        comboBoxHorizontalAling->setItemText(0, QCoreApplication::translate("AnnouncementSettingWidget", "Left", nullptr));
        comboBoxHorizontalAling->setItemText(1, QCoreApplication::translate("AnnouncementSettingWidget", "Center", nullptr));
        comboBoxHorizontalAling->setItemText(2, QCoreApplication::translate("AnnouncementSettingWidget", "Right", nullptr));

        groupBoxUseDisp2->setTitle(QCoreApplication::translate("AnnouncementSettingWidget", "Use Separate Secondary Display Screen Settings", nullptr));
        groupBoxEffects2->setTitle(QCoreApplication::translate("AnnouncementSettingWidget", "Effects", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxUseFading2->setToolTip(QCoreApplication::translate("AnnouncementSettingWidget", "If checked, when switching displayed text, fades the old text out and fades the new text in .", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxUseFading2->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Use fading effects", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxUseShadow2->setToolTip(QCoreApplication::translate("AnnouncementSettingWidget", "Useful when using a wallpaper image. Displays a fancy shadow effect.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxUseShadow2->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Use shadow", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxUseBlurredShadow2->setToolTip(QCoreApplication::translate("AnnouncementSettingWidget", "Useful when using a wallpaper image. Displays a fancy shadow effect.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxUseBlurredShadow2->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Use blurred shadow", nullptr));
        groupBoxBackground2->setTitle(QCoreApplication::translate("AnnouncementSettingWidget", "Use Background Image", nullptr));
        buttonBackground2->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Browse...", nullptr));
        groupBoxTextProperties2->setTitle(QCoreApplication::translate("AnnouncementSettingWidget", "Text Properties", nullptr));
        toolButtonColor2->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Color...", nullptr));
        toolButtonFont2->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Font...", nullptr));
        labelAlignmentl2->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Alignment:", nullptr));
        comboBoxVerticalAling2->setItemText(0, QCoreApplication::translate("AnnouncementSettingWidget", "Top", nullptr));
        comboBoxVerticalAling2->setItemText(1, QCoreApplication::translate("AnnouncementSettingWidget", "Middle", nullptr));
        comboBoxVerticalAling2->setItemText(2, QCoreApplication::translate("AnnouncementSettingWidget", "Bottom", nullptr));

        comboBoxHorizontalAling2->setItemText(0, QCoreApplication::translate("AnnouncementSettingWidget", "Left", nullptr));
        comboBoxHorizontalAling2->setItemText(1, QCoreApplication::translate("AnnouncementSettingWidget", "Center", nullptr));
        comboBoxHorizontalAling2->setItemText(2, QCoreApplication::translate("AnnouncementSettingWidget", "Right", nullptr));

        groupBoxUseDisp3->setTitle(QCoreApplication::translate("AnnouncementSettingWidget", "Use Separate Tertiary Display Screen Settings", nullptr));
        groupBoxEffects3->setTitle(QCoreApplication::translate("AnnouncementSettingWidget", "Effects", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxUseFading3->setToolTip(QCoreApplication::translate("AnnouncementSettingWidget", "If checked, when switching displayed text, fades the old text out and fades the new text in .", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxUseFading3->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Use fading effects", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxUseShadow3->setToolTip(QCoreApplication::translate("AnnouncementSettingWidget", "Useful when using a wallpaper image. Displays a fancy shadow effect.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxUseShadow3->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Use shadow", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxUseBlurredShadow3->setToolTip(QCoreApplication::translate("AnnouncementSettingWidget", "Useful when using a wallpaper image. Displays a fancy shadow effect.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxUseBlurredShadow3->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Use blurred shadow", nullptr));
        groupBoxBackground3->setTitle(QCoreApplication::translate("AnnouncementSettingWidget", "Use Background Image", nullptr));
        buttonBackground3->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Browse...", nullptr));
        groupBoxTextProperties3->setTitle(QCoreApplication::translate("AnnouncementSettingWidget", "Text Properties", nullptr));
        toolButtonColor3->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Color...", nullptr));
        toolButtonFont3->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Font...", nullptr));
        labelFont3->setText(QString());
        labelAlignmentl3->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Alignment:", nullptr));
        comboBoxVerticalAling3->setItemText(0, QCoreApplication::translate("AnnouncementSettingWidget", "Top", nullptr));
        comboBoxVerticalAling3->setItemText(1, QCoreApplication::translate("AnnouncementSettingWidget", "Middle", nullptr));
        comboBoxVerticalAling3->setItemText(2, QCoreApplication::translate("AnnouncementSettingWidget", "Bottom", nullptr));

        comboBoxHorizontalAling3->setItemText(0, QCoreApplication::translate("AnnouncementSettingWidget", "Left", nullptr));
        comboBoxHorizontalAling3->setItemText(1, QCoreApplication::translate("AnnouncementSettingWidget", "Center", nullptr));
        comboBoxHorizontalAling3->setItemText(2, QCoreApplication::translate("AnnouncementSettingWidget", "Right", nullptr));

        groupBoxUseDisp4->setTitle(QCoreApplication::translate("AnnouncementSettingWidget", "Use Separate Quaternary Display Screen Settings", nullptr));
        groupBoxEffects4->setTitle(QCoreApplication::translate("AnnouncementSettingWidget", "Effects", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxUseFading4->setToolTip(QCoreApplication::translate("AnnouncementSettingWidget", "If checked, when switching displayed text, fades the old text out and fades the new text in .", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxUseFading4->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Use fading effects", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxUseShadow4->setToolTip(QCoreApplication::translate("AnnouncementSettingWidget", "Useful when using a wallpaper image. Displays a fancy shadow effect.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxUseShadow4->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Use shadow", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxUseBlurredShadow4->setToolTip(QCoreApplication::translate("AnnouncementSettingWidget", "Useful when using a wallpaper image. Displays a fancy shadow effect.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxUseBlurredShadow4->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Use blurred shadow", nullptr));
        groupBoxBackground4->setTitle(QCoreApplication::translate("AnnouncementSettingWidget", "Use Background Image", nullptr));
        buttonBackground4->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Browse...", nullptr));
        groupBoxTextProperties4->setTitle(QCoreApplication::translate("AnnouncementSettingWidget", "Text Properties", nullptr));
        toolButtonColor4->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Color...", nullptr));
        toolButtonFont4->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Font...", nullptr));
        labelFont4->setText(QString());
        labelAlignmentl4->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Alignment:", nullptr));
        comboBoxVerticalAling4->setItemText(0, QCoreApplication::translate("AnnouncementSettingWidget", "Top", nullptr));
        comboBoxVerticalAling4->setItemText(1, QCoreApplication::translate("AnnouncementSettingWidget", "Middle", nullptr));
        comboBoxVerticalAling4->setItemText(2, QCoreApplication::translate("AnnouncementSettingWidget", "Bottom", nullptr));

        comboBoxHorizontalAling4->setItemText(0, QCoreApplication::translate("AnnouncementSettingWidget", "Left", nullptr));
        comboBoxHorizontalAling4->setItemText(1, QCoreApplication::translate("AnnouncementSettingWidget", "Center", nullptr));
        comboBoxHorizontalAling4->setItemText(2, QCoreApplication::translate("AnnouncementSettingWidget", "Right", nullptr));

        pushButtonDefault->setText(QCoreApplication::translate("AnnouncementSettingWidget", "Reset All To Default", nullptr));
        (void)AnnouncementSettingWidget;
    } // retranslateUi

};

namespace Ui {
    class AnnouncementSettingWidget: public Ui_AnnouncementSettingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANNOUNCEMENTSETTINGWIDGET_H
