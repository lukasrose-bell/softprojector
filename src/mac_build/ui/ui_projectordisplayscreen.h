/********************************************************************************
** Form generated from reading UI file 'projectordisplayscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTORDISPLAYSCREEN_H
#define UI_PROJECTORDISPLAYSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectorDisplayScreen
{
public:
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *ProjectorDisplayScreen)
    {
        if (ProjectorDisplayScreen->objectName().isEmpty())
            ProjectorDisplayScreen->setObjectName("ProjectorDisplayScreen");
        ProjectorDisplayScreen->resize(400, 300);
        verticalLayout = new QVBoxLayout(ProjectorDisplayScreen);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(ProjectorDisplayScreen);

        QMetaObject::connectSlotsByName(ProjectorDisplayScreen);
    } // setupUi

    void retranslateUi(QWidget *ProjectorDisplayScreen)
    {
        ProjectorDisplayScreen->setWindowTitle(QCoreApplication::translate("ProjectorDisplayScreen", "Display Screen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectorDisplayScreen: public Ui_ProjectorDisplayScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTORDISPLAYSCREEN_H
