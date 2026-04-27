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
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TitleWindow)
    {
        if (TitleWindow->objectName().isEmpty())
            TitleWindow->setObjectName("TitleWindow");
        TitleWindow->resize(800, 600);
        TitleWindow->setMinimumSize(QSize(1, 1));
        TitleWindow->setMaximumSize(QSize(19999, 19999));
        centralwidget = new QWidget(TitleWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 290, 160, 36));
        QFont font;
        font.setPointSize(18);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(310, 390, 160, 36));
        pushButton_2->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(330, 180, 140, 38));
        label->setFont(font);
        label->setScaledContents(false);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(490, 290, 160, 36));
        pushButton_3->setFont(font);
        TitleWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TitleWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
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
        label->setText(QCoreApplication::translate("TitleWindow", "<html><head/><body><p align=\"center\">Quizards</p></body></html>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("TitleWindow", "Add Cards", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TitleWindow: public Ui_TitleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TITLEWINDOW_H
