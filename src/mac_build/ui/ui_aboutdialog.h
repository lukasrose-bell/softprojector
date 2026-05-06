/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QLabel *version_label;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout;
    QLabel *label_13;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_10;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_8;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_9;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelDonate;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName("AboutDialog");
        AboutDialog->resize(435, 569);
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        horizontalSpacer = new QSpacerItem(13, 108, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 0, 1, 1);

        label = new QLabel(AboutDialog);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label->setFont(font);
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/softprojector_cloud.png")));

        gridLayout_4->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(17, 148, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 2, 2, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        label_3 = new QLabel(AboutDialog);
        label_3->setObjectName("label_3");
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(118, 116, 108, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush1);
        label_3->setPalette(palette);
        QFont font1;
        font1.setPointSize(10);
        label_3->setFont(font1);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        version_label = new QLabel(AboutDialog);
        version_label->setObjectName("version_label");
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush1);
        version_label->setPalette(palette1);
        version_label->setFont(font1);
        version_label->setText(QString::fromUtf8("Version: *gets set later*"));

        gridLayout_3->addWidget(version_label, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 13, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 1, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_4, 0, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName("gridLayout_6");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        label_2 = new QLabel(AboutDialog);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        gridLayout_6->addWidget(label_2, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_6, 0, 2, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_7);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_4 = new QLabel(AboutDialog);
        label_4->setObjectName("label_4");
        QFont font2;
        font2.setBold(true);
        label_4->setFont(font2);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(AboutDialog);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);

        gridLayout_2->addWidget(label_5, 0, 1, 2, 1);

        verticalSpacer_4 = new QSpacerItem(20, 18, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 1, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_13 = new QLabel(AboutDialog);
        label_13->setObjectName("label_13");
        label_13->setFont(font2);

        horizontalLayout->addWidget(label_13);

        label_12 = new QLabel(AboutDialog);
        label_12->setObjectName("label_12");
        label_12->setFont(font1);

        horizontalLayout->addWidget(label_12);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_10 = new QLabel(AboutDialog);
        label_10->setObjectName("label_10");
        label_10->setFont(font2);

        horizontalLayout_3->addWidget(label_10);

        label_11 = new QLabel(AboutDialog);
        label_11->setObjectName("label_11");
        label_11->setFont(font1);

        horizontalLayout_3->addWidget(label_11);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_6 = new QLabel(AboutDialog);
        label_6->setObjectName("label_6");
        label_6->setFont(font2);

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        label_7 = new QLabel(AboutDialog);
        label_7->setObjectName("label_7");
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 0, 1, 2, 1);

        label_8 = new QLabel(AboutDialog);
        label_8->setObjectName("label_8");
        label_8->setFont(font1);

        gridLayout->addWidget(label_8, 0, 2, 2, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 3, 2, 1);

        verticalSpacer_3 = new QSpacerItem(20, 18, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_6 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_6);

        label_9 = new QLabel(AboutDialog);
        label_9->setObjectName("label_9");
        label_9->setFont(font1);
        label_9->setOpenExternalLinks(true);

        verticalLayout->addWidget(label_9);

        verticalSpacer = new QSpacerItem(125, 27, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelDonate = new QLabel(AboutDialog);
        labelDonate->setObjectName("labelDonate");
        labelDonate->setFont(font2);
        labelDonate->setOpenExternalLinks(true);

        horizontalLayout_2->addWidget(labelDonate);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        pushButton = new QPushButton(AboutDialog);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(AboutDialog);

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About softProjecor", nullptr));
        label->setText(QString());
        label_3->setText(QCoreApplication::translate("AboutDialog", "Version:", nullptr));
        label_2->setText(QCoreApplication::translate("AboutDialog", "an open souce media projection software", nullptr));
        label_4->setText(QCoreApplication::translate("AboutDialog", "Developers:", nullptr));
        label_5->setText(QCoreApplication::translate("AboutDialog", "Vladislav Kobzar\n"
"-------------------\n"
"Ilya Spivakov\n"
"Matvey Adzhigirey", nullptr));
        label_13->setText(QCoreApplication::translate("AboutDialog", "Mac Build:", nullptr));
        label_12->setText(QCoreApplication::translate("AboutDialog", "Volodimir Vasuk", nullptr));
        label_10->setText(QCoreApplication::translate("AboutDialog", "Special Thanks To:", nullptr));
        label_11->setText(QCoreApplication::translate("AboutDialog", "Vitaliy Zhaborovskyy", nullptr));
        label_6->setText(QCoreApplication::translate("AboutDialog", "Translators:", nullptr));
        label_7->setText(QCoreApplication::translate("AboutDialog", "Russian:\n"
"German:\n"
"Czech:\n"
"Ukranian:", nullptr));
        label_8->setText(QCoreApplication::translate("AboutDialog", "Vladimir Zinchenko\n"
"Eduard Schlak\n"
"Pavel Fric\n"
"Vitaliy Zhaborovskyy", nullptr));
        label_9->setText(QCoreApplication::translate("AboutDialog", "If you would like to help developing this program<br>\n"
"or would like to contribute data, please visit:<br>\n"
"<a href=\"http://softprojector.org/\">http://softprojector.org/</a>\n"
"<br>\n"
"<a href=\"http://sourceforge.net/projects/softprojector/\">http://sourceforge.net/projects/softprojector/</a>", nullptr));
        labelDonate->setText(QCoreApplication::translate("AboutDialog", "<a href=\"https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=FPCLPXFMH9XP4\">Donate</a>", nullptr));
        pushButton->setText(QCoreApplication::translate("AboutDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
