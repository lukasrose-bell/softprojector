/********************************************************************************
** Form generated from reading UI file 'slideshoweditor.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLIDESHOWEDITOR_H
#define UI_SLIDESHOWEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SlideShowEditor
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEditTitle;
    QLabel *label_2;
    QPlainTextEdit *plainTextEditInfo;
    QListWidget *listWidgetSlides;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonAddImages;
    QPushButton *pushButtonRemoveImage;
    QPushButton *pushButtonMoveUp;
    QPushButton *pushButtonMoveDown;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelPreview;
    QLabel *labelPixInfo;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonCancel;

    void setupUi(QWidget *SlideShowEditor)
    {
        if (SlideShowEditor->objectName().isEmpty())
            SlideShowEditor->setObjectName("SlideShowEditor");
        SlideShowEditor->resize(576, 567);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/slideshow_edit.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SlideShowEditor->setWindowIcon(icon);
        gridLayout = new QGridLayout(SlideShowEditor);
        gridLayout->setObjectName("gridLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(SlideShowEditor);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        lineEditTitle = new QLineEdit(SlideShowEditor);
        lineEditTitle->setObjectName("lineEditTitle");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, lineEditTitle);

        label_2 = new QLabel(SlideShowEditor);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        plainTextEditInfo = new QPlainTextEdit(SlideShowEditor);
        plainTextEditInfo->setObjectName("plainTextEditInfo");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(plainTextEditInfo->sizePolicy().hasHeightForWidth());
        plainTextEditInfo->setSizePolicy(sizePolicy);
        plainTextEditInfo->setMaximumSize(QSize(16777215, 50));

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, plainTextEditInfo);


        gridLayout->addLayout(formLayout, 0, 0, 1, 2);

        listWidgetSlides = new QListWidget(SlideShowEditor);
        listWidgetSlides->setObjectName("listWidgetSlides");
        listWidgetSlides->setIconSize(QSize(100, 100));
        listWidgetSlides->setSpacing(1);

        gridLayout->addWidget(listWidgetSlides, 1, 0, 4, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonAddImages = new QPushButton(SlideShowEditor);
        pushButtonAddImages->setObjectName("pushButtonAddImages");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/add.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonAddImages->setIcon(icon1);

        horizontalLayout->addWidget(pushButtonAddImages);

        pushButtonRemoveImage = new QPushButton(SlideShowEditor);
        pushButtonRemoveImage->setObjectName("pushButtonRemoveImage");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/remove.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonRemoveImage->setIcon(icon2);

        horizontalLayout->addWidget(pushButtonRemoveImage);

        pushButtonMoveUp = new QPushButton(SlideShowEditor);
        pushButtonMoveUp->setObjectName("pushButtonMoveUp");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/up.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonMoveUp->setIcon(icon3);

        horizontalLayout->addWidget(pushButtonMoveUp);

        pushButtonMoveDown = new QPushButton(SlideShowEditor);
        pushButtonMoveDown->setObjectName("pushButtonMoveDown");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/down.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonMoveDown->setIcon(icon4);

        horizontalLayout->addWidget(pushButtonMoveDown);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        labelPreview = new QLabel(SlideShowEditor);
        labelPreview->setObjectName("labelPreview");
        labelPreview->setMinimumSize(QSize(400, 300));
        labelPreview->setMaximumSize(QSize(400, 300));
        labelPreview->setFrameShape(QFrame::WinPanel);
        labelPreview->setFrameShadow(QFrame::Sunken);
        labelPreview->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelPreview, 2, 1, 1, 1);

        labelPixInfo = new QLabel(SlideShowEditor);
        labelPixInfo->setObjectName("labelPixInfo");
        labelPixInfo->setWordWrap(true);

        gridLayout->addWidget(labelPixInfo, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 74, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButtonSave = new QPushButton(SlideShowEditor);
        pushButtonSave->setObjectName("pushButtonSave");

        horizontalLayout_2->addWidget(pushButtonSave);

        pushButtonCancel = new QPushButton(SlideShowEditor);
        pushButtonCancel->setObjectName("pushButtonCancel");

        horizontalLayout_2->addWidget(pushButtonCancel);


        gridLayout->addLayout(horizontalLayout_2, 5, 0, 1, 2);

        QWidget::setTabOrder(lineEditTitle, plainTextEditInfo);
        QWidget::setTabOrder(plainTextEditInfo, listWidgetSlides);
        QWidget::setTabOrder(listWidgetSlides, pushButtonAddImages);
        QWidget::setTabOrder(pushButtonAddImages, pushButtonRemoveImage);
        QWidget::setTabOrder(pushButtonRemoveImage, pushButtonMoveUp);
        QWidget::setTabOrder(pushButtonMoveUp, pushButtonMoveDown);
        QWidget::setTabOrder(pushButtonMoveDown, pushButtonSave);
        QWidget::setTabOrder(pushButtonSave, pushButtonCancel);

        retranslateUi(SlideShowEditor);

        QMetaObject::connectSlotsByName(SlideShowEditor);
    } // setupUi

    void retranslateUi(QWidget *SlideShowEditor)
    {
        SlideShowEditor->setWindowTitle(QCoreApplication::translate("SlideShowEditor", "Slide Show Editor", nullptr));
        label->setText(QCoreApplication::translate("SlideShowEditor", "Slide Show Title:", nullptr));
        label_2->setText(QCoreApplication::translate("SlideShowEditor", "Slide Show Info:", nullptr));
        pushButtonAddImages->setText(QCoreApplication::translate("SlideShowEditor", "Add Pictures", nullptr));
        pushButtonRemoveImage->setText(QCoreApplication::translate("SlideShowEditor", "Remove Picture", nullptr));
        pushButtonMoveUp->setText(QString());
        pushButtonMoveDown->setText(QString());
        labelPreview->setText(QCoreApplication::translate("SlideShowEditor", "Picture Preview", nullptr));
        labelPixInfo->setText(QCoreApplication::translate("SlideShowEditor", "Picture Information", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("SlideShowEditor", "Save", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("SlideShowEditor", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SlideShowEditor: public Ui_SlideShowEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLIDESHOWEDITOR_H
