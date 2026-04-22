#include "cardaddscreen.h"
#include "ui_cardaddscreen.h"

CardAddScreen::CardAddScreen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CardAddScreen)
{
    ui->setupUi(this);
}

CardAddScreen::~CardAddScreen()
{
    delete ui;
}
