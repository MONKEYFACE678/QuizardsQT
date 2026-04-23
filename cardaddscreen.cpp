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
}

CardAddScreen::~CardAddScreen()
{
    delete ui;
}

bool CardAddScreen::eventFilter(QObject *object, QEvent *event)
{
    //On mouse hover clear text box
    if (object == ui->TermInput && event->type() == QEvent::HoverEnter) {
        ui->TermInput->clear();
    }
    else if (object == ui->DefInput && event->type() == QEvent::HoverEnter) {
        ui->DefInput->clear();
    }
    return false;
}

void CardAddScreen::onSubmit() {
    QString term = ui->TermInput->text();
    QString def = ui->DefInput->text();

    manager.addCard(def.toStdString(), term.toStdString());
    manager.saveCards();

    ui->TermInput->clear();
    ui->DefInput->clear();

    ui->CountLabel->setText("Currently " + QString::number(manager.length()) + " Cards");
}
