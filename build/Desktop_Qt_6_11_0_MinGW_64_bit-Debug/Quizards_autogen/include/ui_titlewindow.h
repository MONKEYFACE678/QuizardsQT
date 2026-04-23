/********************************************************************************
** Form generated from reading UI file 'titlewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TITLEWINDOW_H
#define UI_TITLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TitleWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TitleWindow)
    {
        if (TitleWindow->objectName().isEmpty())
            TitleWindow->setObjectName("TitleWindow");
        TitleWindow->resize(400, 250);
        TitleWindow->setMinimumSize(QSize(400, 250));
        TitleWindow->setMaximumSize(QSize(400, 250));
        centralwidget = new QWidget(TitleWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 140, 80, 18));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(250, 140, 80, 18));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 70, 71, 16));
        TitleWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TitleWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 400, 17));
        TitleWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(TitleWindow);
        statusbar->setObjectName("statusbar");
        TitleWindow->setStatusBar(statusbar);

        retranslateUi(TitleWindow);

        QMetaObject::connectSlotsByName(TitleWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TitleWindow)
    {
        TitleWindow->setWindowTitle(QCoreApplication::translate("TitleWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("TitleWindow", "Start", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TitleWindow", "Exit", nullptr));
        label->setText(QCoreApplication::translate("TitleWindow", "Quizards", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TitleWindow: public Ui_TitleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TITLEWINDOW_H
