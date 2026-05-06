/********************************************************************************
** Form generated from reading UI file 'biblewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIBLEWIDGET_H
#define UI_BIBLEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BibleWidget
{
public:
    QVBoxLayout *verticalLayout_9;
    QSplitter *results_splitter;
    QWidget *layoutWidget;
    QVBoxLayout *search_layout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblBook_2;
    QLineEdit *search_ef;
    QComboBox *comboBoxSearchRange;
    QComboBox *comboBoxSearchType;
    QPushButton *search_button;
    QHBoxLayout *results_layout;
    QVBoxLayout *verticalLayout_7;
    QLabel *result_label;
    QLabel *result_count_label;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_8;
    QListWidget *search_results_list;
    QVBoxLayout *verticalLayout_6;
    QPushButton *hide_result_button;
    QSpacerItem *verticalSpacer;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblBook;
    QLineEdit *lineEditBook;
    QListWidget *listBook;
    QVBoxLayout *verticalLayout;
    QLabel *lblChapter;
    QLineEdit *chapter_ef;
    QListWidget *listChapterNum;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *lblVerse;
    QLineEdit *verse_ef;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnLive;
    QVBoxLayout *verticalLayout_5;
    QListWidget *chapter_preview_list;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout;
    QListWidget *history_listWidget;

    void setupUi(QWidget *BibleWidget)
    {
        if (BibleWidget->objectName().isEmpty())
            BibleWidget->setObjectName("BibleWidget");
        BibleWidget->resize(488, 772);
        BibleWidget->setMinimumSize(QSize(400, 0));
        verticalLayout_9 = new QVBoxLayout(BibleWidget);
        verticalLayout_9->setObjectName("verticalLayout_9");
        results_splitter = new QSplitter(BibleWidget);
        results_splitter->setObjectName("results_splitter");
        results_splitter->setOrientation(Qt::Vertical);
        results_splitter->setChildrenCollapsible(false);
        layoutWidget = new QWidget(results_splitter);
        layoutWidget->setObjectName("layoutWidget");
        search_layout = new QVBoxLayout(layoutWidget);
        search_layout->setObjectName("search_layout");
        search_layout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lblBook_2 = new QLabel(layoutWidget);
        lblBook_2->setObjectName("lblBook_2");
        lblBook_2->setMinimumSize(QSize(0, 0));
        lblBook_2->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_2->addWidget(lblBook_2);

        search_ef = new QLineEdit(layoutWidget);
        search_ef->setObjectName("search_ef");
        search_ef->setMinimumSize(QSize(0, 0));
        search_ef->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_2->addWidget(search_ef);

        comboBoxSearchRange = new QComboBox(layoutWidget);
        comboBoxSearchRange->addItem(QString());
        comboBoxSearchRange->addItem(QString());
        comboBoxSearchRange->addItem(QString());
        comboBoxSearchRange->setObjectName("comboBoxSearchRange");

        horizontalLayout_2->addWidget(comboBoxSearchRange);

        comboBoxSearchType = new QComboBox(layoutWidget);
        comboBoxSearchType->addItem(QString());
        comboBoxSearchType->addItem(QString());
        comboBoxSearchType->addItem(QString());
        comboBoxSearchType->addItem(QString());
        comboBoxSearchType->addItem(QString());
        comboBoxSearchType->setObjectName("comboBoxSearchType");

        horizontalLayout_2->addWidget(comboBoxSearchType);

        search_button = new QPushButton(layoutWidget);
        search_button->setObjectName("search_button");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/search.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        search_button->setIcon(icon);

        horizontalLayout_2->addWidget(search_button);

        horizontalLayout_2->setStretch(1, 1);

        search_layout->addLayout(horizontalLayout_2);

        results_layout = new QHBoxLayout();
        results_layout->setObjectName("results_layout");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        result_label = new QLabel(layoutWidget);
        result_label->setObjectName("result_label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(result_label->sizePolicy().hasHeightForWidth());
        result_label->setSizePolicy(sizePolicy);
        result_label->setMinimumSize(QSize(0, 0));
        result_label->setMaximumSize(QSize(16777215, 20));
        result_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_7->addWidget(result_label);

        result_count_label = new QLabel(layoutWidget);
        result_count_label->setObjectName("result_count_label");
        QPalette palette;
        QBrush brush(QColor(0, 61, 90, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(118, 116, 108, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush1);
        result_count_label->setPalette(palette);
        result_count_label->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(result_count_label);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);


        results_layout->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        search_results_list = new QListWidget(layoutWidget);
        search_results_list->setObjectName("search_results_list");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(search_results_list->sizePolicy().hasHeightForWidth());
        search_results_list->setSizePolicy(sizePolicy1);
        search_results_list->setMinimumSize(QSize(160, 0));
        search_results_list->setMaximumSize(QSize(16777215, 16777215));
        search_results_list->setAlternatingRowColors(false);

        verticalLayout_8->addWidget(search_results_list);


        results_layout->addLayout(verticalLayout_8);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        hide_result_button = new QPushButton(layoutWidget);
        hide_result_button->setObjectName("hide_result_button");

        verticalLayout_6->addWidget(hide_result_button);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);


        results_layout->addLayout(verticalLayout_6);


        search_layout->addLayout(results_layout);

        results_splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(results_splitter);
        layoutWidget1->setObjectName("layoutWidget1");
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lblBook = new QLabel(layoutWidget1);
        lblBook->setObjectName("lblBook");
        lblBook->setMinimumSize(QSize(160, 0));
        lblBook->setMaximumSize(QSize(160, 16777215));

        verticalLayout_2->addWidget(lblBook);

        lineEditBook = new QLineEdit(layoutWidget1);
        lineEditBook->setObjectName("lineEditBook");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEditBook->sizePolicy().hasHeightForWidth());
        lineEditBook->setSizePolicy(sizePolicy2);
        lineEditBook->setMinimumSize(QSize(160, 0));
        lineEditBook->setMaximumSize(QSize(160, 16777215));

        verticalLayout_2->addWidget(lineEditBook);

        listBook = new QListWidget(layoutWidget1);
        listBook->setObjectName("listBook");
        sizePolicy1.setHeightForWidth(listBook->sizePolicy().hasHeightForWidth());
        listBook->setSizePolicy(sizePolicy1);
        listBook->setMinimumSize(QSize(160, 0));
        listBook->setMaximumSize(QSize(160, 16777215));
        listBook->setAlternatingRowColors(false);

        verticalLayout_2->addWidget(listBook);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        lblChapter = new QLabel(layoutWidget1);
        lblChapter->setObjectName("lblChapter");
        lblChapter->setMaximumSize(QSize(16777215, 16777215));
        lblChapter->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lblChapter);

        chapter_ef = new QLineEdit(layoutWidget1);
        chapter_ef->setObjectName("chapter_ef");
        sizePolicy2.setHeightForWidth(chapter_ef->sizePolicy().hasHeightForWidth());
        chapter_ef->setSizePolicy(sizePolicy2);
        chapter_ef->setMinimumSize(QSize(0, 0));
        chapter_ef->setMaximumSize(QSize(60, 16777215));

        verticalLayout->addWidget(chapter_ef);

        listChapterNum = new QListWidget(layoutWidget1);
        listChapterNum->setObjectName("listChapterNum");
        sizePolicy1.setHeightForWidth(listChapterNum->sizePolicy().hasHeightForWidth());
        listChapterNum->setSizePolicy(sizePolicy1);
        listChapterNum->setMaximumSize(QSize(60, 16777215));
        listChapterNum->setAlternatingRowColors(false);

        verticalLayout->addWidget(listChapterNum);


        gridLayout_2->addLayout(verticalLayout, 0, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        lblVerse = new QLabel(layoutWidget1);
        lblVerse->setObjectName("lblVerse");

        verticalLayout_3->addWidget(lblVerse);

        verse_ef = new QLineEdit(layoutWidget1);
        verse_ef->setObjectName("verse_ef");
        sizePolicy.setHeightForWidth(verse_ef->sizePolicy().hasHeightForWidth());
        verse_ef->setSizePolicy(sizePolicy);
        verse_ef->setMinimumSize(QSize(0, 0));
        verse_ef->setMaximumSize(QSize(50, 16777215));

        verticalLayout_3->addWidget(verse_ef);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(17, 13, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btnLive = new QPushButton(layoutWidget1);
        btnLive->setObjectName("btnLive");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnLive->sizePolicy().hasHeightForWidth());
        btnLive->setSizePolicy(sizePolicy3);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/go_live.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnLive->setIcon(icon1);

        horizontalLayout->addWidget(btnLive);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");

        horizontalLayout->addLayout(verticalLayout_5);


        verticalLayout_4->addLayout(horizontalLayout);

        chapter_preview_list = new QListWidget(layoutWidget1);
        chapter_preview_list->setObjectName("chapter_preview_list");
        chapter_preview_list->setAlternatingRowColors(false);
        chapter_preview_list->setSelectionMode(QAbstractItemView::ContiguousSelection);
        chapter_preview_list->setWordWrap(true);

        verticalLayout_4->addWidget(chapter_preview_list);


        gridLayout_2->addLayout(verticalLayout_4, 0, 2, 1, 1);

        results_splitter->addWidget(layoutWidget1);
        layoutWidget2 = new QWidget(results_splitter);
        layoutWidget2->setObjectName("layoutWidget2");
        gridLayout = new QGridLayout(layoutWidget2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        history_listWidget = new QListWidget(layoutWidget2);
        history_listWidget->setObjectName("history_listWidget");

        gridLayout->addWidget(history_listWidget, 0, 0, 2, 1);

        results_splitter->addWidget(layoutWidget2);

        verticalLayout_9->addWidget(results_splitter);

        QWidget::setTabOrder(lineEditBook, chapter_ef);
        QWidget::setTabOrder(chapter_ef, verse_ef);
        QWidget::setTabOrder(verse_ef, listBook);
        QWidget::setTabOrder(listBook, listChapterNum);
        QWidget::setTabOrder(listChapterNum, chapter_preview_list);
        QWidget::setTabOrder(chapter_preview_list, btnLive);
        QWidget::setTabOrder(btnLive, search_ef);
        QWidget::setTabOrder(search_ef, comboBoxSearchRange);
        QWidget::setTabOrder(comboBoxSearchRange, comboBoxSearchType);
        QWidget::setTabOrder(comboBoxSearchType, search_button);
        QWidget::setTabOrder(search_button, search_results_list);
        QWidget::setTabOrder(search_results_list, hide_result_button);
        QWidget::setTabOrder(hide_result_button, history_listWidget);

        retranslateUi(BibleWidget);

        QMetaObject::connectSlotsByName(BibleWidget);
    } // setupUi

    void retranslateUi(QWidget *BibleWidget)
    {
        BibleWidget->setWindowTitle(QCoreApplication::translate("BibleWidget", "Form", nullptr));
        lblBook_2->setText(QCoreApplication::translate("BibleWidget", "Search (F9):", nullptr));
#if QT_CONFIG(tooltip)
        search_ef->setToolTip(QCoreApplication::translate("BibleWidget", "Search the bible for specified text. Matched verses will appear in the list below. If a bible book is selected, only that book will be searched.", nullptr));
#endif // QT_CONFIG(tooltip)
        comboBoxSearchRange->setItemText(0, QCoreApplication::translate("BibleWidget", "Entire Bible", nullptr));
        comboBoxSearchRange->setItemText(1, QCoreApplication::translate("BibleWidget", "Current Book", nullptr));
        comboBoxSearchRange->setItemText(2, QCoreApplication::translate("BibleWidget", "Current Chapter", nullptr));

#if QT_CONFIG(tooltip)
        comboBoxSearchRange->setToolTip(QCoreApplication::translate("BibleWidget", "Select search range", nullptr));
#endif // QT_CONFIG(tooltip)
        comboBoxSearchType->setItemText(0, QCoreApplication::translate("BibleWidget", "Contains Phrase", nullptr));
        comboBoxSearchType->setItemText(1, QCoreApplication::translate("BibleWidget", "Contains Word Phrase", nullptr));
        comboBoxSearchType->setItemText(2, QCoreApplication::translate("BibleWidget", "Verse Begins", nullptr));
        comboBoxSearchType->setItemText(3, QCoreApplication::translate("BibleWidget", "Contains Any Word", nullptr));
        comboBoxSearchType->setItemText(4, QCoreApplication::translate("BibleWidget", "Contains All Words", nullptr));

#if QT_CONFIG(tooltip)
        comboBoxSearchType->setToolTip(QCoreApplication::translate("BibleWidget", "Select search type", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        search_button->setToolTip(QCoreApplication::translate("BibleWidget", "Quickly display the selected Bible verse on the screen", nullptr));
#endif // QT_CONFIG(tooltip)
        search_button->setText(QCoreApplication::translate("BibleWidget", "Search", nullptr));
#if QT_CONFIG(shortcut)
        search_button->setShortcut(QCoreApplication::translate("BibleWidget", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        result_label->setText(QCoreApplication::translate("BibleWidget", "Results:", nullptr));
        result_count_label->setText(QString());
        hide_result_button->setText(QCoreApplication::translate("BibleWidget", "Hide\n"
"Results", nullptr));
        lblBook->setText(QCoreApplication::translate("BibleWidget", "Book:", nullptr));
#if QT_CONFIG(tooltip)
        lineEditBook->setToolTip(QCoreApplication::translate("BibleWidget", "Filter criteria for the bible list. If the first character of the filter is a number, then only books starting with this number are matched. Example filters: \"Deuter\", \"1Thes\".", nullptr));
#endif // QT_CONFIG(tooltip)
        lblChapter->setText(QCoreApplication::translate("BibleWidget", "Chapter: ", nullptr));
#if QT_CONFIG(tooltip)
        chapter_ef->setToolTip(QCoreApplication::translate("BibleWidget", "Filter criteria for the bible list. If the first character of the filter is a number, then only books starting with this number are matched. Example filters: \"Deuter\", \"1Thes\".", nullptr));
#endif // QT_CONFIG(tooltip)
        lblVerse->setText(QCoreApplication::translate("BibleWidget", "Verse: ", nullptr));
#if QT_CONFIG(tooltip)
        verse_ef->setToolTip(QCoreApplication::translate("BibleWidget", "Filter criteria for the bible list. If the first character of the filter is a number, then only books starting with this number are matched. Example filters: \"Deuter\", \"1Thes\".", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnLive->setToolTip(QCoreApplication::translate("BibleWidget", "Quickly display the selected Bible verse on the screen", nullptr));
#endif // QT_CONFIG(tooltip)
        btnLive->setText(QCoreApplication::translate("BibleWidget", "Go Live (F5)", nullptr));
#if QT_CONFIG(shortcut)
        btnLive->setShortcut(QCoreApplication::translate("BibleWidget", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        history_listWidget->setToolTip(QCoreApplication::translate("BibleWidget", "This list contains verses that were sent to be shown", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class BibleWidget: public Ui_BibleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIBLEWIDGET_H
