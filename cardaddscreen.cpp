#include "cardaddscreen.h"
#include "ui_cardaddscreen.h"
#include <QString>

CardAddScreen::CardAddScreen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CardAddScreen)
{
    ui->setupUi(this);

    ui->DefInput->installEventFilter(this);
    ui->TermInput->installEventFilter(this);

    manager.loadCards();

    connect(ui->CardButton, &QPushButton::clicked,
            this, &CardAddScreen::onSubmit);

    connect(ui->ClearButton, &QPushButton::clicked,
            this, &CardAddScreen::clearCards);

    ui->CountLabel->setText("Currently " + QString::number(manager.length()) + " Cards");
    ui->DefInput->setPlaceholderText("Enter here...");
    ui->TermInput->setPlaceholderText("Enter here...");
}

CardAddScreen::~CardAddScreen()
{
    delete ui;
}

void CardAddScreen::onSubmit() {
    if(!(ui->TermInput->text() == "" || ui->DefInput->text() == "")){
        QString term = ui->TermInput->text();
        QString def = ui->DefInput->text();

        manager.addCard(def.toStdString(), term.toStdString());
        manager.saveCards();

        ui->TermInput->clear();
        ui->DefInput->clear();

        updateCountLabel();
    }
}

void CardAddScreen::updateCountLabel(){
    ui->CountLabel->setText("Currently " + QString::number(manager.length()) + " Cards");
}

void CardAddScreen::clearCards(){
    manager.clearCards();
    updateCountLabel();
}
