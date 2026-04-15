#include "titlewindow.h"
#include "ui_titlewindow.h"
#include "mainwindow.h"
TitleWindow::TitleWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TitleWindow)
{
    ui->setupUi(this);
}

TitleWindow::~TitleWindow()
{
    delete ui;
}

void TitleWindow::on_pushButton_2_clicked()
{
    this->close();
}


void TitleWindow::on_pushButton_clicked()
{
    hide();
    MainWindow newwindow;
    newwindow->setWindowModality(Qt::WindowModal);
    newwindow->show();

}