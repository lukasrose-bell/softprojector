/********************************************************************************
** Form generated from reading UI file 'songwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SONGWIDGET_H
#define UI_SONGWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SongWidget
{
public:
    QHBoxLayout *horizontalLayout_6;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *songbook_menu;
    QSpinBox *song_num_spinbox;
    QComboBox *comboBoxCategory;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelFilter;
    QLineEdit *lineEditSearch;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelSearchType;
    QComboBox *comboBoxFilterType;
    QComboBox *comboBoxSearchType;
    QPushButton *pushButtonSearch;
    QHBoxLayout *horizontalLayout_7;
    QListWidget *listWidgetDummy;
    QPushButton *pushButtonClearResults;
    QTableView *songs_view;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnLive;
    QLabel *preview_label;
    QLabel *label_notes;
    QListWidget *listPreview;

    void setupUi(QWidget *SongWidget)
    {
        if (SongWidget->objectName().isEmpty())
            SongWidget->setObjectName("SongWidget");
        SongWidget->resize(575, 528);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SongWidget->sizePolicy().hasHeightForWidth());
        SongWidget->setSizePolicy(sizePolicy);
        SongWidget->setMinimumSize(QSize(400, 0));
        horizontalLayout_6 = new QHBoxLayout(SongWidget);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        splitter = new QSplitter(SongWidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName("layoutWidget");
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        songbook_menu = new QComboBox(layoutWidget);
        songbook_menu->setObjectName("songbook_menu");
        songbook_menu->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);
        songbook_menu->setDuplicatesEnabled(true);

        horizontalLayout_4->addWidget(songbook_menu);

        song_num_spinbox = new QSpinBox(layoutWidget);
        song_num_spinbox->setObjectName("song_num_spinbox");
        song_num_spinbox->setMinimum(1);
        song_num_spinbox->setMaximum(2800);
        song_num_spinbox->setValue(1);

        horizontalLayout_4->addWidget(song_num_spinbox);

        horizontalLayout_4->setStretch(0, 10);

        verticalLayout->addLayout(horizontalLayout_4);

        comboBoxCategory = new QComboBox(layoutWidget);
        comboBoxCategory->setObjectName("comboBoxCategory");

        verticalLayout->addWidget(comboBoxCategory);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        labelFilter = new QLabel(layoutWidget);
        labelFilter->setObjectName("labelFilter");
        labelFilter->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(labelFilter);

        lineEditSearch = new QLineEdit(layoutWidget);
        lineEditSearch->setObjectName("lineEditSearch");
        lineEditSearch->setEnabled(true);
        lineEditSearch->setMinimumSize(QSize(125, 0));

        horizontalLayout_3->addWidget(lineEditSearch);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        labelSearchType = new QLabel(layoutWidget);
        labelSearchType->setObjectName("labelSearchType");

        horizontalLayout_5->addWidget(labelSearchType);

        comboBoxFilterType = new QComboBox(layoutWidget);
        comboBoxFilterType->addItem(QString());
        comboBoxFilterType->addItem(QString());
        comboBoxFilterType->addItem(QString());
        comboBoxFilterType->setObjectName("comboBoxFilterType");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxFilterType->sizePolicy().hasHeightForWidth());
        comboBoxFilterType->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(comboBoxFilterType);

        comboBoxSearchType = new QComboBox(layoutWidget);
        comboBoxSearchType->addItem(QString());
        comboBoxSearchType->addItem(QString());
        comboBoxSearchType->addItem(QString());
        comboBoxSearchType->addItem(QString());
        comboBoxSearchType->addItem(QString());
        comboBoxSearchType->setObjectName("comboBoxSearchType");
        sizePolicy1.setHeightForWidth(comboBoxSearchType->sizePolicy().hasHeightForWidth());
        comboBoxSearchType->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(comboBoxSearchType);

        pushButtonSearch = new QPushButton(layoutWidget);
        pushButtonSearch->setObjectName("pushButtonSearch");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/search.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonSearch->setIcon(icon);

        horizontalLayout_5->addWidget(pushButtonSearch);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        listWidgetDummy = new QListWidget(layoutWidget);
        listWidgetDummy->setObjectName("listWidgetDummy");
        listWidgetDummy->setMaximumSize(QSize(10, 10));
        listWidgetDummy->setAlternatingRowColors(true);
        listWidgetDummy->setSpacing(5);

        horizontalLayout_7->addWidget(listWidgetDummy);

        pushButtonClearResults = new QPushButton(layoutWidget);
        pushButtonClearResults->setObjectName("pushButtonClearResults");
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush1);
        pushButtonClearResults->setPalette(palette);
        QFont font;
        font.setBold(true);
        pushButtonClearResults->setFont(font);

        horizontalLayout_7->addWidget(pushButtonClearResults);


        verticalLayout->addLayout(horizontalLayout_7);

        songs_view = new QTableView(layoutWidget);
        songs_view->setObjectName("songs_view");
        songs_view->setSelectionMode(QAbstractItemView::SingleSelection);
        songs_view->setSelectionBehavior(QAbstractItemView::SelectRows);
        songs_view->setSortingEnabled(true);
        songs_view->horizontalHeader()->setStretchLastSection(true);
        songs_view->verticalHeader()->setVisible(false);
        songs_view->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout->addWidget(songs_view);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName("layoutWidget1");
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        btnLive = new QPushButton(layoutWidget1);
        btnLive->setObjectName("btnLive");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/go_live.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnLive->setIcon(icon1);

        horizontalLayout_2->addWidget(btnLive);


        verticalLayout_2->addLayout(horizontalLayout_2);

        preview_label = new QLabel(layoutWidget1);
        preview_label->setObjectName("preview_label");

        verticalLayout_2->addWidget(preview_label);

        label_notes = new QLabel(layoutWidget1);
        label_notes->setObjectName("label_notes");
        QPalette palette1;
        QBrush brush2(QColor(255, 0, 4, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush2);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush2);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush1);
        label_notes->setPalette(palette1);
        label_notes->setFont(font);
        label_notes->setWordWrap(true);

        verticalLayout_2->addWidget(label_notes);

        listPreview = new QListWidget(layoutWidget1);
        listPreview->setObjectName("listPreview");
        listPreview->setMinimumSize(QSize(150, 0));
        listPreview->setAlternatingRowColors(true);
        listPreview->setSpacing(5);

        verticalLayout_2->addWidget(listPreview);

        splitter->addWidget(layoutWidget1);

        horizontalLayout_6->addWidget(splitter);

        QWidget::setTabOrder(songbook_menu, song_num_spinbox);
        QWidget::setTabOrder(song_num_spinbox, comboBoxCategory);
        QWidget::setTabOrder(comboBoxCategory, lineEditSearch);
        QWidget::setTabOrder(lineEditSearch, comboBoxSearchType);
        QWidget::setTabOrder(comboBoxSearchType, pushButtonSearch);
        QWidget::setTabOrder(pushButtonSearch, listWidgetDummy);
        QWidget::setTabOrder(listWidgetDummy, pushButtonClearResults);
        QWidget::setTabOrder(pushButtonClearResults, songs_view);
        QWidget::setTabOrder(songs_view, listPreview);
        QWidget::setTabOrder(listPreview, btnLive);

        retranslateUi(SongWidget);

        QMetaObject::connectSlotsByName(SongWidget);
    } // setupUi

    void retranslateUi(QWidget *SongWidget)
    {
        SongWidget->setWindowTitle(QCoreApplication::translate("SongWidget", "Form", nullptr));
#if QT_CONFIG(tooltip)
        songbook_menu->setToolTip(QCoreApplication::translate("SongWidget", "Use this menu to show only songs beloning to a particular Songbook", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        songbook_menu->setStatusTip(QCoreApplication::translate("SongWidget", "Select Songbook to use", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        song_num_spinbox->setToolTip(QCoreApplication::translate("SongWidget", "Selects a song by the number in the selected Songbook", nullptr));
#endif // QT_CONFIG(tooltip)
        labelFilter->setText(QCoreApplication::translate("SongWidget", "Filter:", nullptr));
#if QT_CONFIG(tooltip)
        lineEditSearch->setToolTip(QCoreApplication::translate("SongWidget", "Use this field to limit the display of the songs to only the ones that contain the specified text in the song title or song number", nullptr));
#endif // QT_CONFIG(tooltip)
        labelSearchType->setText(QCoreApplication::translate("SongWidget", "Search Type:", nullptr));
        comboBoxFilterType->setItemText(0, QCoreApplication::translate("SongWidget", "Contains", nullptr));
        comboBoxFilterType->setItemText(1, QCoreApplication::translate("SongWidget", "Begins", nullptr));
        comboBoxFilterType->setItemText(2, QCoreApplication::translate("SongWidget", "Exact Match", nullptr));

        comboBoxSearchType->setItemText(0, QCoreApplication::translate("SongWidget", "Contains Phrase", nullptr));
        comboBoxSearchType->setItemText(1, QCoreApplication::translate("SongWidget", "Contains Word Phrase", nullptr));
        comboBoxSearchType->setItemText(2, QCoreApplication::translate("SongWidget", "Line Begins", nullptr));
        comboBoxSearchType->setItemText(3, QCoreApplication::translate("SongWidget", "Contains Any Word", nullptr));
        comboBoxSearchType->setItemText(4, QCoreApplication::translate("SongWidget", "Contains All Words", nullptr));

        pushButtonSearch->setText(QCoreApplication::translate("SongWidget", "Search", nullptr));
#if QT_CONFIG(shortcut)
        pushButtonSearch->setShortcut(QCoreApplication::translate("SongWidget", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButtonClearResults->setText(QCoreApplication::translate("SongWidget", "Done Searching? - Clear Search Results", nullptr));
#if QT_CONFIG(tooltip)
        btnLive->setToolTip(QCoreApplication::translate("SongWidget", "Quickly display the selected song on the screen without adding it to playlist first", nullptr));
#endif // QT_CONFIG(tooltip)
        btnLive->setText(QCoreApplication::translate("SongWidget", "Go Live (F5)", nullptr));
#if QT_CONFIG(shortcut)
        btnLive->setShortcut(QCoreApplication::translate("SongWidget", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        label_notes->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SongWidget: public Ui_SongWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SONGWIDGET_H
