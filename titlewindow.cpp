#include "titlewindow.h"
#include "ui_titlewindow.h"
#include "mainwindow.h"
TitleWindow::TitleWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TitleWindow)
{
    ui->setupUi(this);
}

TitleWindow::~TitleWindow()
{
    delete ui;
}

void TitleWindow::on_pushButton_clicked()
{
    MainWindow *newWin = new SecondWindow(this);
    newWin->setAttribute(Qt::WA_DeleteOnClose); // Clean up memory when closed
    newWin->show();
}


void TitleWindow::on_pushButton_2_clicked()
{
    this->close();
}

