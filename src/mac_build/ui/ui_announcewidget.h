/********************************************************************************
** Form generated from reading UI file 'announcewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANNOUNCEWIDGET_H
#define UI_ANNOUNCEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnnounceWidget
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTableView *tableViewAnnouncements;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonLive;
    QLabel *labelAnnounceTitle;
    QListWidget *listWidgetAnnouncement;

    void setupUi(QWidget *AnnounceWidget)
    {
        if (AnnounceWidget->objectName().isEmpty())
            AnnounceWidget->setObjectName("AnnounceWidget");
        AnnounceWidget->resize(538, 415);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AnnounceWidget->sizePolicy().hasHeightForWidth());
        AnnounceWidget->setSizePolicy(sizePolicy);
        AnnounceWidget->setMinimumSize(QSize(400, 0));
        gridLayout = new QGridLayout(AnnounceWidget);
        gridLayout->setObjectName("gridLayout");
        splitter = new QSplitter(AnnounceWidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName("layoutWidget");
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        tableViewAnnouncements = new QTableView(layoutWidget);
        tableViewAnnouncements->setObjectName("tableViewAnnouncements");
        tableViewAnnouncements->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewAnnouncements->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewAnnouncements->setSortingEnabled(true);
        tableViewAnnouncements->horizontalHeader()->setStretchLastSection(true);
        tableViewAnnouncements->verticalHeader()->setVisible(false);
        tableViewAnnouncements->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout->addWidget(tableViewAnnouncements);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName("layoutWidget1");
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonLive = new QPushButton(layoutWidget1);
        pushButtonLive->setObjectName("pushButtonLive");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/go_live.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonLive->setIcon(icon);

        horizontalLayout->addWidget(pushButtonLive);


        verticalLayout_2->addLayout(horizontalLayout);

        labelAnnounceTitle = new QLabel(layoutWidget1);
        labelAnnounceTitle->setObjectName("labelAnnounceTitle");

        verticalLayout_2->addWidget(labelAnnounceTitle);

        listWidgetAnnouncement = new QListWidget(layoutWidget1);
        listWidgetAnnouncement->setObjectName("listWidgetAnnouncement");
        listWidgetAnnouncement->setAlternatingRowColors(true);
        listWidgetAnnouncement->setSpacing(3);

        verticalLayout_2->addWidget(listWidgetAnnouncement);

        splitter->addWidget(layoutWidget1);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);


        retranslateUi(AnnounceWidget);

        QMetaObject::connectSlotsByName(AnnounceWidget);
    } // setupUi

    void retranslateUi(QWidget *AnnounceWidget)
    {
        AnnounceWidget->setWindowTitle(QCoreApplication::translate("AnnounceWidget", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("AnnounceWidget", "Announcements:", nullptr));
#if QT_CONFIG(tooltip)
        pushButtonLive->setToolTip(QCoreApplication::translate("AnnounceWidget", "Quickly display announcement", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonLive->setText(QCoreApplication::translate("AnnounceWidget", "Go Live (F5)", nullptr));
#if QT_CONFIG(shortcut)
        pushButtonLive->setShortcut(QCoreApplication::translate("AnnounceWidget", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        labelAnnounceTitle->setText(QCoreApplication::translate("AnnounceWidget", "Announcement Preview:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnnounceWidget: public Ui_AnnounceWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANNOUNCEWIDGET_H
