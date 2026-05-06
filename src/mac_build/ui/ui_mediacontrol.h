/********************************************************************************
** Form generated from reading UI file 'mediacontrol.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDIACONTROL_H
#define UI_MEDIACONTROL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MediaControl
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSlider *horizontalSliderTime;
    QLabel *labelTime;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonStop;
    QPushButton *pushButtonPlayPause;
    QPushButton *pushButtonMute;
    QSlider *horizontalSliderVolume;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *MediaControl)
    {
        if (MediaControl->objectName().isEmpty())
            MediaControl->setObjectName("MediaControl");
        MediaControl->resize(502, 69);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MediaControl->sizePolicy().hasHeightForWidth());
        MediaControl->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(MediaControl);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSliderTime = new QSlider(MediaControl);
        horizontalSliderTime->setObjectName("horizontalSliderTime");
        horizontalSliderTime->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSliderTime);

        labelTime = new QLabel(MediaControl);
        labelTime->setObjectName("labelTime");

        horizontalLayout->addWidget(labelTime);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButtonStop = new QPushButton(MediaControl);
        pushButtonStop->setObjectName("pushButtonStop");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/stop.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonStop->setIcon(icon);

        horizontalLayout_2->addWidget(pushButtonStop);

        pushButtonPlayPause = new QPushButton(MediaControl);
        pushButtonPlayPause->setObjectName("pushButtonPlayPause");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/play.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonPlayPause->setIcon(icon1);

        horizontalLayout_2->addWidget(pushButtonPlayPause);

        pushButtonMute = new QPushButton(MediaControl);
        pushButtonMute->setObjectName("pushButtonMute");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/speaker.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonMute->setIcon(icon2);
        pushButtonMute->setCheckable(true);

        horizontalLayout_2->addWidget(pushButtonMute);

        horizontalSliderVolume = new QSlider(MediaControl);
        horizontalSliderVolume->setObjectName("horizontalSliderVolume");
        horizontalSliderVolume->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSliderVolume);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(MediaControl);

        QMetaObject::connectSlotsByName(MediaControl);
    } // setupUi

    void retranslateUi(QWidget *MediaControl)
    {
        MediaControl->setWindowTitle(QCoreApplication::translate("MediaControl", "Form", nullptr));
        pushButtonStop->setText(QString());
        pushButtonPlayPause->setText(QString());
        pushButtonMute->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MediaControl: public Ui_MediaControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDIACONTROL_H
