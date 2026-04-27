/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *submitButton;
    QLineEdit *answerInput;
    QLabel *definitionLabel;
    QLabel *feedbackLabel;
    QLabel *label;
    QLabel *countLabel;
    QMenuBar *menubar;
    QMenu *menuQuizards;
    QStatusBar *statusbar;

    void setupUi(QDialog *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setGeometry(QRect(0, 0, 800, 600));
        centralwidget->setMinimumSize(QSize(1, 1));
        centralwidget->setMaximumSize(QSize(10000, 10000));
        submitButton = new QPushButton(centralwidget);
        submitButton->setObjectName("submitButton");
        submitButton->setGeometry(QRect(230, 370, 321, 51));
        QFont font;
        font.setPointSize(18);
        submitButton->setFont(font);
        answerInput = new QLineEdit(centralwidget);
        answerInput->setObjectName("answerInput");
        answerInput->setGeometry(QRect(290, 290, 200, 60));
        answerInput->setFont(font);
        answerInput->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        definitionLabel = new QLabel(centralwidget);
        definitionLabel->setObjectName("definitionLabel");
        definitionLabel->setGeometry(QRect(0, 180, 801, 81));
        QFont font1;
        font1.setPointSize(24);
        definitionLabel->setFont(font1);
        definitionLabel->setTextFormat(Qt::TextFormat::AutoText);
        definitionLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        feedbackLabel = new QLabel(centralwidget);
        feedbackLabel->setObjectName("feedbackLabel");
        feedbackLabel->setGeometry(QRect(0, 460, 801, 81));
        feedbackLabel->setFont(font1);
        feedbackLabel->setTextFormat(Qt::TextFormat::AutoText);
        feedbackLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(300, 90, 181, 81));
        label->setFont(font1);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        countLabel = new QLabel(centralwidget);
        countLabel->setObjectName("countLabel");
        countLabel->setGeometry(QRect(370, 520, 421, 81));
        QFont font2;
        font2.setPointSize(16);
        countLabel->setFont(font2);
        countLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuQuizards = new QMenu(menubar);
        menuQuizards->setObjectName("menuQuizards");
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        statusbar->setGeometry(QRect(0, 0, 3, 22));

        menubar->addAction(menuQuizards->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QDialog *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        submitButton->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        answerInput->setText(QString());
        definitionLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Definition</p></body></html>", nullptr));
        feedbackLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Definition:", nullptr));
        countLabel->setText(QCoreApplication::translate("MainWindow", "There are 0 cards", nullptr));
        menuQuizards->setTitle(QCoreApplication::translate("MainWindow", "Quizards", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
