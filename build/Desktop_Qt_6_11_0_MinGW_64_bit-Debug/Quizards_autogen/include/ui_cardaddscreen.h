/********************************************************************************
** Form generated from reading UI file 'cardaddscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARDADDSCREEN_H
#define UI_CARDADDSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CardAddScreen
{
public:
    QPushButton *CardButton;
    QLabel *CountLabel;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *DefInput;
    QLineEdit *TermInput;
    QPushButton *ClearButton;

    void setupUi(QDialog *CardAddScreen)
    {
        if (CardAddScreen->objectName().isEmpty())
            CardAddScreen->setObjectName("CardAddScreen");
        CardAddScreen->resize(800, 600);
        CardButton = new QPushButton(CardAddScreen);
        CardButton->setObjectName("CardButton");
        CardButton->setGeometry(QRect(330, 320, 160, 36));
        QFont font;
        font.setPointSize(14);
        CardButton->setFont(font);
        CountLabel = new QLabel(CardAddScreen);
        CountLabel->setObjectName("CountLabel");
        CountLabel->setGeometry(QRect(120, 430, 481, 81));
        QFont font1;
        font1.setPointSize(18);
        CountLabel->setFont(font1);
        label = new QLabel(CardAddScreen);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 120, 251, 31));
        label->setFont(font1);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(CardAddScreen);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(510, 120, 161, 31));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        DefInput = new QLineEdit(CardAddScreen);
        DefInput->setObjectName("DefInput");
        DefInput->setGeometry(QRect(120, 210, 200, 60));
        DefInput->setFont(font);
        TermInput = new QLineEdit(CardAddScreen);
        TermInput->setObjectName("TermInput");
        TermInput->setGeometry(QRect(490, 210, 200, 60));
        TermInput->setFont(font);
        ClearButton = new QPushButton(CardAddScreen);
        ClearButton->setObjectName("ClearButton");
        ClearButton->setGeometry(QRect(330, 390, 160, 36));
        ClearButton->setFont(font);

        retranslateUi(CardAddScreen);

        QMetaObject::connectSlotsByName(CardAddScreen);
    } // setupUi

    void retranslateUi(QDialog *CardAddScreen)
    {
        CardAddScreen->setWindowTitle(QCoreApplication::translate("CardAddScreen", "Dialog", nullptr));
        CardButton->setText(QCoreApplication::translate("CardAddScreen", "Add Card", nullptr));
        CountLabel->setText(QCoreApplication::translate("CardAddScreen", "Currently 0 Cards", nullptr));
        label->setText(QCoreApplication::translate("CardAddScreen", "Enter Definition:", nullptr));
        label_2->setText(QCoreApplication::translate("CardAddScreen", "Enter Term:", nullptr));
        DefInput->setText(QString());
        TermInput->setText(QString());
        ClearButton->setText(QCoreApplication::translate("CardAddScreen", "Clear Cards", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CardAddScreen: public Ui_CardAddScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDADDSCREEN_H
