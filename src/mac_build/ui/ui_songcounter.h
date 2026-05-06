/********************************************************************************
** Form generated from reading UI file 'songcounter.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SONGCOUNTER_H
#define UI_SONGCOUNTER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_SongCounter
{
public:
    QGridLayout *gridLayout;
    QTableView *countTable;
    QHBoxLayout *horizontalLayout;
    QPushButton *resetOneButton;
    QPushButton *resetButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;

    void setupUi(QDialog *SongCounter)
    {
        if (SongCounter->objectName().isEmpty())
            SongCounter->setObjectName("SongCounter");
        SongCounter->resize(676, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/song_count.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SongCounter->setWindowIcon(icon);
        gridLayout = new QGridLayout(SongCounter);
        gridLayout->setObjectName("gridLayout");
        countTable = new QTableView(SongCounter);
        countTable->setObjectName("countTable");
        countTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        countTable->setSortingEnabled(true);
        countTable->setWordWrap(false);
        countTable->horizontalHeader()->setStretchLastSection(true);
        countTable->verticalHeader()->setVisible(false);
        countTable->verticalHeader()->setDefaultSectionSize(20);

        gridLayout->addWidget(countTable, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        resetOneButton = new QPushButton(SongCounter);
        resetOneButton->setObjectName("resetOneButton");

        horizontalLayout->addWidget(resetOneButton);

        resetButton = new QPushButton(SongCounter);
        resetButton->setObjectName("resetButton");

        horizontalLayout->addWidget(resetButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeButton = new QPushButton(SongCounter);
        closeButton->setObjectName("closeButton");

        horizontalLayout->addWidget(closeButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(SongCounter);

        QMetaObject::connectSlotsByName(SongCounter);
    } // setupUi

    void retranslateUi(QDialog *SongCounter)
    {
        SongCounter->setWindowTitle(QCoreApplication::translate("SongCounter", "Song Counter", nullptr));
        resetOneButton->setText(QCoreApplication::translate("SongCounter", "Reset Selected", nullptr));
        resetButton->setText(QCoreApplication::translate("SongCounter", "Reset All", nullptr));
        closeButton->setText(QCoreApplication::translate("SongCounter", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SongCounter: public Ui_SongCounter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SONGCOUNTER_H
