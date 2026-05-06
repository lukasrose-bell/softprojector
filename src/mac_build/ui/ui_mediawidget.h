/********************************************************************************
** Form generated from reading UI file 'mediawidget.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDIAWIDGET_H
#define UI_MEDIAWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MediaWidget
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *layoutWidgetMedia;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelMediaLibrary;
    QListWidget *listWidgetMediaFiles;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonGoLive;
    QVBoxLayout *verticalLayoutMedia;
    QLabel *labelInfo;
    QWidget *widget;
    QHBoxLayout *horizontalLayoutControls;

    void setupUi(QWidget *MediaWidget)
    {
        if (MediaWidget->objectName().isEmpty())
            MediaWidget->setObjectName("MediaWidget");
        MediaWidget->resize(712, 491);
        gridLayout = new QGridLayout(MediaWidget);
        gridLayout->setObjectName("gridLayout");
        splitter = new QSplitter(MediaWidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        layoutWidgetMedia = new QWidget(splitter);
        layoutWidgetMedia->setObjectName("layoutWidgetMedia");
        verticalLayout_3 = new QVBoxLayout(layoutWidgetMedia);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelMediaLibrary = new QLabel(layoutWidgetMedia);
        labelMediaLibrary->setObjectName("labelMediaLibrary");
        labelMediaLibrary->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(labelMediaLibrary);

        listWidgetMediaFiles = new QListWidget(layoutWidgetMedia);
        listWidgetMediaFiles->setObjectName("listWidgetMediaFiles");

        verticalLayout_3->addWidget(listWidgetMediaFiles);

        splitter->addWidget(layoutWidgetMedia);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName("layoutWidget");
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButtonGoLive = new QPushButton(layoutWidget);
        pushButtonGoLive->setObjectName("pushButtonGoLive");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/go_live.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonGoLive->setIcon(icon);

        horizontalLayout->addWidget(pushButtonGoLive);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayoutMedia = new QVBoxLayout();
        verticalLayoutMedia->setObjectName("verticalLayoutMedia");
        labelInfo = new QLabel(layoutWidget);
        labelInfo->setObjectName("labelInfo");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelInfo->sizePolicy().hasHeightForWidth());
        labelInfo->setSizePolicy(sizePolicy);
        labelInfo->setMinimumSize(QSize(0, 70));
        labelInfo->setAutoFillBackground(true);
        labelInfo->setMargin(10);

        verticalLayoutMedia->addWidget(labelInfo);


        verticalLayout->addLayout(verticalLayoutMedia);

        widget = new QWidget(layoutWidget);
        widget->setObjectName("widget");

        verticalLayout->addWidget(widget);

        horizontalLayoutControls = new QHBoxLayout();
        horizontalLayoutControls->setObjectName("horizontalLayoutControls");

        verticalLayout->addLayout(horizontalLayoutControls);

        splitter->addWidget(layoutWidget);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        QWidget::setTabOrder(listWidgetMediaFiles, pushButtonGoLive);

        retranslateUi(MediaWidget);

        QMetaObject::connectSlotsByName(MediaWidget);
    } // setupUi

    void retranslateUi(QWidget *MediaWidget)
    {
        MediaWidget->setWindowTitle(QCoreApplication::translate("MediaWidget", "Form", nullptr));
        labelMediaLibrary->setText(QCoreApplication::translate("MediaWidget", "- Media Library -", nullptr));
        pushButtonGoLive->setText(QCoreApplication::translate("MediaWidget", "Go Live (F5)", nullptr));
#if QT_CONFIG(shortcut)
        pushButtonGoLive->setShortcut(QCoreApplication::translate("MediaWidget", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class MediaWidget: public Ui_MediaWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDIAWIDGET_H
