/********************************************************************************
** Form generated from reading UI file 'editwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITWIDGET_H
#define UI_EDITWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_6;
    QLabel *label;
    QLabel *songbook_label;
    QLineEdit *lineEditSongNumber;
    QPushButton *pushButtonPrint;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_2;
    QLabel *label_15;
    QLineEdit *lineEditTitle;
    QGridLayout *gridLayout_3;
    QLabel *label_16;
    QLineEdit *lineEditWordsBy;
    QLabel *label_18;
    QLineEdit *lineEditMusicBy;
    QGridLayout *gridLayout_4;
    QLabel *label_17;
    QLineEdit *lineEditKey;
    QLabel *label_14;
    QComboBox *comboBoxCategory;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBoxSongSettings;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *groupBoxSettings;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QToolButton *toolButtonMainColor;
    QGraphicsView *graphicsViewTextColor;
    QFrame *line_4;
    QToolButton *toolButtonMainFont;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelVAlign;
    QComboBox *comboBoxVAlignment;
    QComboBox *comboBoxHAlignment;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QToolButton *toolButtonInfoColor;
    QGraphicsView *graphicsViewInfoColor;
    QFrame *line_5;
    QToolButton *toolButtonFont;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QToolButton *toolButtonEndingColor;
    QGraphicsView *graphicsViewEndingColor;
    QFrame *line_6;
    QToolButton *toolButtonEndingFont;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxUseBackground;
    QLineEdit *lineEditBackgroundPath;
    QToolButton *toolButtonBrowseBackground;
    QTextEdit *textEditSong;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNotes;
    QSpacerItem *horizontalSpacer_3;
    QPlainTextEdit *plainTextEditNotes;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSave;
    QPushButton *btnCancel;

    void setupUi(QWidget *EditWidget)
    {
        if (EditWidget->objectName().isEmpty())
            EditWidget->setObjectName("EditWidget");
        EditWidget->resize(400, 531);
        EditWidget->setMinimumSize(QSize(400, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/edit.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        EditWidget->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(EditWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName("gridLayout_6");
        label = new QLabel(EditWidget);
        label->setObjectName("label");

        gridLayout_6->addWidget(label, 0, 0, 1, 1);

        songbook_label = new QLabel(EditWidget);
        songbook_label->setObjectName("songbook_label");
        songbook_label->setMinimumSize(QSize(100, 0));
        songbook_label->setText(QString::fromUtf8(""));

        gridLayout_6->addWidget(songbook_label, 0, 1, 1, 1);

        lineEditSongNumber = new QLineEdit(EditWidget);
        lineEditSongNumber->setObjectName("lineEditSongNumber");
        lineEditSongNumber->setMaximumSize(QSize(75, 16777215));

        gridLayout_6->addWidget(lineEditSongNumber, 0, 2, 1, 1);

        pushButtonPrint = new QPushButton(EditWidget);
        pushButtonPrint->setObjectName("pushButtonPrint");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/print.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonPrint->setIcon(icon1);

        gridLayout_6->addWidget(pushButtonPrint, 0, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_2, 0, 3, 1, 1);


        verticalLayout_3->addLayout(gridLayout_6);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_15 = new QLabel(EditWidget);
        label_15->setObjectName("label_15");
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_15, 0, 0, 1, 1);

        lineEditTitle = new QLineEdit(EditWidget);
        lineEditTitle->setObjectName("lineEditTitle");

        gridLayout_2->addWidget(lineEditTitle, 0, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        label_16 = new QLabel(EditWidget);
        label_16->setObjectName("label_16");
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_16, 0, 0, 1, 1);

        lineEditWordsBy = new QLineEdit(EditWidget);
        lineEditWordsBy->setObjectName("lineEditWordsBy");

        gridLayout_3->addWidget(lineEditWordsBy, 0, 1, 1, 1);

        label_18 = new QLabel(EditWidget);
        label_18->setObjectName("label_18");
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_18, 0, 2, 1, 1);

        lineEditMusicBy = new QLineEdit(EditWidget);
        lineEditMusicBy->setObjectName("lineEditMusicBy");

        gridLayout_3->addWidget(lineEditMusicBy, 0, 3, 1, 1);


        verticalLayout_3->addLayout(gridLayout_3);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        label_17 = new QLabel(EditWidget);
        label_17->setObjectName("label_17");
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_17, 0, 0, 1, 1);

        lineEditKey = new QLineEdit(EditWidget);
        lineEditKey->setObjectName("lineEditKey");

        gridLayout_4->addWidget(lineEditKey, 0, 1, 1, 1);

        label_14 = new QLabel(EditWidget);
        label_14->setObjectName("label_14");
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_14, 0, 2, 1, 1);

        comboBoxCategory = new QComboBox(EditWidget);
        comboBoxCategory->setObjectName("comboBoxCategory");
        comboBoxCategory->setMinimumSize(QSize(200, 0));

        gridLayout_4->addWidget(comboBoxCategory, 0, 3, 1, 1);


        verticalLayout_3->addLayout(gridLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        checkBoxSongSettings = new QCheckBox(EditWidget);
        checkBoxSongSettings->setObjectName("checkBoxSongSettings");

        horizontalLayout_5->addWidget(checkBoxSongSettings);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_5);

        groupBoxSettings = new QGroupBox(EditWidget);
        groupBoxSettings->setObjectName("groupBoxSettings");
        groupBoxSettings->setFlat(true);
        verticalLayout = new QVBoxLayout(groupBoxSettings);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(groupBoxSettings);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        toolButtonMainColor = new QToolButton(groupBoxSettings);
        toolButtonMainColor->setObjectName("toolButtonMainColor");

        horizontalLayout_3->addWidget(toolButtonMainColor);

        graphicsViewTextColor = new QGraphicsView(groupBoxSettings);
        graphicsViewTextColor->setObjectName("graphicsViewTextColor");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphicsViewTextColor->sizePolicy().hasHeightForWidth());
        graphicsViewTextColor->setSizePolicy(sizePolicy);
        graphicsViewTextColor->setMinimumSize(QSize(50, 19));
        graphicsViewTextColor->setMaximumSize(QSize(50, 19));

        horizontalLayout_3->addWidget(graphicsViewTextColor);

        line_4 = new QFrame(groupBoxSettings);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_3->addWidget(line_4);

        toolButtonMainFont = new QToolButton(groupBoxSettings);
        toolButtonMainFont->setObjectName("toolButtonMainFont");

        horizontalLayout_3->addWidget(toolButtonMainFont);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        labelVAlign = new QLabel(groupBoxSettings);
        labelVAlign->setObjectName("labelVAlign");

        horizontalLayout_4->addWidget(labelVAlign);

        comboBoxVAlignment = new QComboBox(groupBoxSettings);
        comboBoxVAlignment->addItem(QString());
        comboBoxVAlignment->addItem(QString());
        comboBoxVAlignment->addItem(QString());
        comboBoxVAlignment->setObjectName("comboBoxVAlignment");

        horizontalLayout_4->addWidget(comboBoxVAlignment);

        comboBoxHAlignment = new QComboBox(groupBoxSettings);
        comboBoxHAlignment->addItem(QString());
        comboBoxHAlignment->addItem(QString());
        comboBoxHAlignment->addItem(QString());
        comboBoxHAlignment->setObjectName("comboBoxHAlignment");

        horizontalLayout_4->addWidget(comboBoxHAlignment);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_3 = new QLabel(groupBoxSettings);
        label_3->setObjectName("label_3");

        horizontalLayout_6->addWidget(label_3);

        toolButtonInfoColor = new QToolButton(groupBoxSettings);
        toolButtonInfoColor->setObjectName("toolButtonInfoColor");

        horizontalLayout_6->addWidget(toolButtonInfoColor);

        graphicsViewInfoColor = new QGraphicsView(groupBoxSettings);
        graphicsViewInfoColor->setObjectName("graphicsViewInfoColor");
        sizePolicy.setHeightForWidth(graphicsViewInfoColor->sizePolicy().hasHeightForWidth());
        graphicsViewInfoColor->setSizePolicy(sizePolicy);
        graphicsViewInfoColor->setMinimumSize(QSize(50, 19));
        graphicsViewInfoColor->setMaximumSize(QSize(50, 19));

        horizontalLayout_6->addWidget(graphicsViewInfoColor);

        line_5 = new QFrame(groupBoxSettings);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::Shape::VLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_6->addWidget(line_5);

        toolButtonFont = new QToolButton(groupBoxSettings);
        toolButtonFont->setObjectName("toolButtonFont");

        horizontalLayout_6->addWidget(toolButtonFont);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_2 = new QLabel(groupBoxSettings);
        label_2->setObjectName("label_2");

        horizontalLayout_7->addWidget(label_2);

        toolButtonEndingColor = new QToolButton(groupBoxSettings);
        toolButtonEndingColor->setObjectName("toolButtonEndingColor");

        horizontalLayout_7->addWidget(toolButtonEndingColor);

        graphicsViewEndingColor = new QGraphicsView(groupBoxSettings);
        graphicsViewEndingColor->setObjectName("graphicsViewEndingColor");
        sizePolicy.setHeightForWidth(graphicsViewEndingColor->sizePolicy().hasHeightForWidth());
        graphicsViewEndingColor->setSizePolicy(sizePolicy);
        graphicsViewEndingColor->setMinimumSize(QSize(50, 19));
        graphicsViewEndingColor->setMaximumSize(QSize(50, 19));

        horizontalLayout_7->addWidget(graphicsViewEndingColor);

        line_6 = new QFrame(groupBoxSettings);
        line_6->setObjectName("line_6");
        line_6->setFrameShape(QFrame::Shape::VLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_7->addWidget(line_6);

        toolButtonEndingFont = new QToolButton(groupBoxSettings);
        toolButtonEndingFont->setObjectName("toolButtonEndingFont");

        horizontalLayout_7->addWidget(toolButtonEndingFont);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        checkBoxUseBackground = new QCheckBox(groupBoxSettings);
        checkBoxUseBackground->setObjectName("checkBoxUseBackground");

        horizontalLayout_2->addWidget(checkBoxUseBackground);

        lineEditBackgroundPath = new QLineEdit(groupBoxSettings);
        lineEditBackgroundPath->setObjectName("lineEditBackgroundPath");
        lineEditBackgroundPath->setEnabled(true);
        lineEditBackgroundPath->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEditBackgroundPath);

        toolButtonBrowseBackground = new QToolButton(groupBoxSettings);
        toolButtonBrowseBackground->setObjectName("toolButtonBrowseBackground");

        horizontalLayout_2->addWidget(toolButtonBrowseBackground);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(groupBoxSettings);

        textEditSong = new QTextEdit(EditWidget);
        textEditSong->setObjectName("textEditSong");
        textEditSong->setAcceptRichText(false);

        verticalLayout_3->addWidget(textEditSong);

        line = new QFrame(EditWidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelNotes = new QLabel(EditWidget);
        labelNotes->setObjectName("labelNotes");

        horizontalLayout->addWidget(labelNotes);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout);

        plainTextEditNotes = new QPlainTextEdit(EditWidget);
        plainTextEditNotes->setObjectName("plainTextEditNotes");
        plainTextEditNotes->setMaximumSize(QSize(16777215, 55));

        verticalLayout_3->addWidget(plainTextEditNotes);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(168, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        btnSave = new QPushButton(EditWidget);
        btnSave->setObjectName("btnSave");

        gridLayout->addWidget(btnSave, 0, 1, 1, 1);

        btnCancel = new QPushButton(EditWidget);
        btnCancel->setObjectName("btnCancel");

        gridLayout->addWidget(btnCancel, 0, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        QWidget::setTabOrder(lineEditSongNumber, lineEditTitle);
        QWidget::setTabOrder(lineEditTitle, lineEditWordsBy);
        QWidget::setTabOrder(lineEditWordsBy, lineEditMusicBy);
        QWidget::setTabOrder(lineEditMusicBy, lineEditKey);
        QWidget::setTabOrder(lineEditKey, comboBoxCategory);
        QWidget::setTabOrder(comboBoxCategory, textEditSong);
        QWidget::setTabOrder(textEditSong, plainTextEditNotes);
        QWidget::setTabOrder(plainTextEditNotes, pushButtonPrint);
        QWidget::setTabOrder(pushButtonPrint, checkBoxSongSettings);
        QWidget::setTabOrder(checkBoxSongSettings, toolButtonMainColor);
        QWidget::setTabOrder(toolButtonMainColor, graphicsViewTextColor);
        QWidget::setTabOrder(graphicsViewTextColor, toolButtonMainFont);
        QWidget::setTabOrder(toolButtonMainFont, comboBoxVAlignment);
        QWidget::setTabOrder(comboBoxVAlignment, comboBoxHAlignment);
        QWidget::setTabOrder(comboBoxHAlignment, toolButtonInfoColor);
        QWidget::setTabOrder(toolButtonInfoColor, graphicsViewInfoColor);
        QWidget::setTabOrder(graphicsViewInfoColor, toolButtonFont);
        QWidget::setTabOrder(toolButtonFont, toolButtonEndingColor);
        QWidget::setTabOrder(toolButtonEndingColor, graphicsViewEndingColor);
        QWidget::setTabOrder(graphicsViewEndingColor, toolButtonEndingFont);
        QWidget::setTabOrder(toolButtonEndingFont, checkBoxUseBackground);
        QWidget::setTabOrder(checkBoxUseBackground, toolButtonBrowseBackground);
        QWidget::setTabOrder(toolButtonBrowseBackground, lineEditBackgroundPath);
        QWidget::setTabOrder(lineEditBackgroundPath, btnSave);
        QWidget::setTabOrder(btnSave, btnCancel);

        retranslateUi(EditWidget);

        QMetaObject::connectSlotsByName(EditWidget);
    } // setupUi

    void retranslateUi(QWidget *EditWidget)
    {
        EditWidget->setWindowTitle(QCoreApplication::translate("EditWidget", "Edit and/or Add New songs", nullptr));
        label->setText(QCoreApplication::translate("EditWidget", "Songbook:", nullptr));
        pushButtonPrint->setText(QCoreApplication::translate("EditWidget", "Print", nullptr));
        label_15->setText(QCoreApplication::translate("EditWidget", "Title: ", nullptr));
        label_16->setText(QCoreApplication::translate("EditWidget", "Words by:  ", nullptr));
        label_18->setText(QCoreApplication::translate("EditWidget", "Music by: ", nullptr));
        label_17->setText(QCoreApplication::translate("EditWidget", "Key: ", nullptr));
        label_14->setText(QCoreApplication::translate("EditWidget", "Category: ", nullptr));
        checkBoxSongSettings->setText(QCoreApplication::translate("EditWidget", "Use Private Song Settings", nullptr));
        groupBoxSettings->setTitle(QString());
        label_4->setText(QCoreApplication::translate("EditWidget", "Main Text Properties:", nullptr));
        toolButtonMainColor->setText(QCoreApplication::translate("EditWidget", "Color...", nullptr));
        toolButtonMainFont->setText(QCoreApplication::translate("EditWidget", "Font...", nullptr));
        labelVAlign->setText(QCoreApplication::translate("EditWidget", "Main Text Alignment:", nullptr));
        comboBoxVAlignment->setItemText(0, QCoreApplication::translate("EditWidget", "Top", nullptr));
        comboBoxVAlignment->setItemText(1, QCoreApplication::translate("EditWidget", "Middle", nullptr));
        comboBoxVAlignment->setItemText(2, QCoreApplication::translate("EditWidget", "Bottom", nullptr));

        comboBoxHAlignment->setItemText(0, QCoreApplication::translate("EditWidget", "Left", nullptr));
        comboBoxHAlignment->setItemText(1, QCoreApplication::translate("EditWidget", "Center", nullptr));
        comboBoxHAlignment->setItemText(2, QCoreApplication::translate("EditWidget", "Right", nullptr));

        label_3->setText(QCoreApplication::translate("EditWidget", "Song Information Properties:", nullptr));
        toolButtonInfoColor->setText(QCoreApplication::translate("EditWidget", "Color...", nullptr));
        toolButtonFont->setText(QCoreApplication::translate("EditWidget", "Font...", nullptr));
        label_2->setText(QCoreApplication::translate("EditWidget", "Song Ending Properties:", nullptr));
        toolButtonEndingColor->setText(QCoreApplication::translate("EditWidget", "Color...", nullptr));
        toolButtonEndingFont->setText(QCoreApplication::translate("EditWidget", "Font...", nullptr));
        checkBoxUseBackground->setText(QCoreApplication::translate("EditWidget", "Use Background:", nullptr));
        toolButtonBrowseBackground->setText(QCoreApplication::translate("EditWidget", "Browse...", nullptr));
        labelNotes->setText(QCoreApplication::translate("EditWidget", "Notes:", nullptr));
        btnSave->setText(QCoreApplication::translate("EditWidget", "Save", nullptr));
#if QT_CONFIG(shortcut)
        btnSave->setShortcut(QCoreApplication::translate("EditWidget", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        btnCancel->setText(QCoreApplication::translate("EditWidget", "Cancel", nullptr));
#if QT_CONFIG(shortcut)
        btnCancel->setShortcut(QCoreApplication::translate("EditWidget", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class EditWidget: public Ui_EditWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITWIDGET_H
