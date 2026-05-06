/********************************************************************************
** Form generated from reading UI file 'picturewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTUREWIDGET_H
#define UI_PICTUREWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PictureWidget
{
public:
    QVBoxLayout *verticalLayout_5;
    QSplitter *splitter_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QListWidget *listWidgetSlideShow;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelPreviewSlideShow;
    QListWidget *listWidgetSlides;
    QSplitter *splitter;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonGoLive;
    QLabel *labelPreview;
    QLabel *labelPixInfo;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_3;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonAddImages;
    QPushButton *pushButtonRemoveImage;
    QPushButton *pushButtonClearImages;
    QPushButton *pushButtonMoveUp;
    QPushButton *pushButtonMoveDown;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PictureWidget)
    {
        if (PictureWidget->objectName().isEmpty())
            PictureWidget->setObjectName("PictureWidget");
        PictureWidget->resize(873, 581);
        verticalLayout_5 = new QVBoxLayout(PictureWidget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        splitter_2 = new QSplitter(PictureWidget);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter_2);
        layoutWidget->setObjectName("layoutWidget");
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        listWidgetSlideShow = new QListWidget(layoutWidget);
        listWidgetSlideShow->setObjectName("listWidgetSlideShow");

        verticalLayout_2->addWidget(listWidgetSlideShow);

        splitter_2->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter_2);
        layoutWidget1->setObjectName("layoutWidget1");
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelPreviewSlideShow = new QLabel(layoutWidget1);
        labelPreviewSlideShow->setObjectName("labelPreviewSlideShow");

        verticalLayout_4->addWidget(labelPreviewSlideShow);

        listWidgetSlides = new QListWidget(layoutWidget1);
        listWidgetSlides->setObjectName("listWidgetSlides");
        listWidgetSlides->setIconSize(QSize(100, 100));
        listWidgetSlides->setSpacing(1);

        verticalLayout_4->addWidget(listWidgetSlides);

        splitter_2->addWidget(layoutWidget1);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Vertical);
        layoutWidget2 = new QWidget(splitter);
        layoutWidget2->setObjectName("layoutWidget2");
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonGoLive = new QPushButton(layoutWidget2);
        pushButtonGoLive->setObjectName("pushButtonGoLive");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/go_live.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonGoLive->setIcon(icon);

        horizontalLayout_2->addWidget(pushButtonGoLive);


        verticalLayout->addLayout(horizontalLayout_2);

        labelPreview = new QLabel(layoutWidget2);
        labelPreview->setObjectName("labelPreview");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelPreview->sizePolicy().hasHeightForWidth());
        labelPreview->setSizePolicy(sizePolicy);
        labelPreview->setMinimumSize(QSize(300, 200));
        labelPreview->setMaximumSize(QSize(300, 200));
        labelPreview->setFrameShape(QFrame::WinPanel);
        labelPreview->setFrameShadow(QFrame::Sunken);
        labelPreview->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelPreview);

        labelPixInfo = new QLabel(layoutWidget2);
        labelPixInfo->setObjectName("labelPixInfo");
        labelPixInfo->setWordWrap(true);

        verticalLayout->addWidget(labelPixInfo);

        splitter->addWidget(layoutWidget2);
        layoutWidget4 = new QWidget(splitter);
        layoutWidget4->setObjectName("layoutWidget4");
        verticalLayout_3 = new QVBoxLayout(layoutWidget4);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        line = new QFrame(layoutWidget4);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(layoutWidget4);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonAddImages = new QPushButton(layoutWidget4);
        pushButtonAddImages->setObjectName("pushButtonAddImages");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonAddImages->sizePolicy().hasHeightForWidth());
        pushButtonAddImages->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/add.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonAddImages->setIcon(icon1);

        horizontalLayout->addWidget(pushButtonAddImages);

        pushButtonRemoveImage = new QPushButton(layoutWidget4);
        pushButtonRemoveImage->setObjectName("pushButtonRemoveImage");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/remove.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonRemoveImage->setIcon(icon2);

        horizontalLayout->addWidget(pushButtonRemoveImage);

        pushButtonClearImages = new QPushButton(layoutWidget4);
        pushButtonClearImages->setObjectName("pushButtonClearImages");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/remove_all.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonClearImages->setIcon(icon3);

        horizontalLayout->addWidget(pushButtonClearImages);

        pushButtonMoveUp = new QPushButton(layoutWidget4);
        pushButtonMoveUp->setObjectName("pushButtonMoveUp");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/up.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonMoveUp->setIcon(icon4);

        horizontalLayout->addWidget(pushButtonMoveUp);

        pushButtonMoveDown = new QPushButton(layoutWidget4);
        pushButtonMoveDown->setObjectName("pushButtonMoveDown");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/down.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonMoveDown->setIcon(icon5);

        horizontalLayout->addWidget(pushButtonMoveDown);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout);

        label_2 = new QLabel(layoutWidget4);
        label_2->setObjectName("label_2");
        label_2->setWordWrap(true);

        verticalLayout_3->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        splitter->addWidget(layoutWidget4);
        splitter_2->addWidget(splitter);

        verticalLayout_5->addWidget(splitter_2);

        QWidget::setTabOrder(listWidgetSlideShow, listWidgetSlides);
        QWidget::setTabOrder(listWidgetSlides, pushButtonGoLive);
        QWidget::setTabOrder(pushButtonGoLive, pushButtonAddImages);
        QWidget::setTabOrder(pushButtonAddImages, pushButtonRemoveImage);
        QWidget::setTabOrder(pushButtonRemoveImage, pushButtonClearImages);
        QWidget::setTabOrder(pushButtonClearImages, pushButtonMoveUp);
        QWidget::setTabOrder(pushButtonMoveUp, pushButtonMoveDown);

        retranslateUi(PictureWidget);

        QMetaObject::connectSlotsByName(PictureWidget);
    } // setupUi

    void retranslateUi(QWidget *PictureWidget)
    {
        PictureWidget->setWindowTitle(QCoreApplication::translate("PictureWidget", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("PictureWidget", "Slide Shows:", nullptr));
        labelPreviewSlideShow->setText(QString());
        pushButtonGoLive->setText(QCoreApplication::translate("PictureWidget", "Go Live (F5)", nullptr));
#if QT_CONFIG(shortcut)
        pushButtonGoLive->setShortcut(QCoreApplication::translate("PictureWidget", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        labelPreview->setText(QCoreApplication::translate("PictureWidget", "Picture Preview", nullptr));
        labelPixInfo->setText(QCoreApplication::translate("PictureWidget", "Picture Information", nullptr));
        label->setText(QCoreApplication::translate("PictureWidget", "Edit Preview Slide Show:", nullptr));
        pushButtonAddImages->setText(QCoreApplication::translate("PictureWidget", "Add ", nullptr));
        pushButtonRemoveImage->setText(QCoreApplication::translate("PictureWidget", "Remove", nullptr));
        pushButtonClearImages->setText(QCoreApplication::translate("PictureWidget", "Clear", nullptr));
        pushButtonMoveUp->setText(QString());
        pushButtonMoveDown->setText(QString());
        label_2->setText(QCoreApplication::translate("PictureWidget", "Editing slide show here will not change anything in database. To have save changes, use \"New Slide Show\" or \"Edit Slide Show\". ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PictureWidget: public Ui_PictureWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTUREWIDGET_H
