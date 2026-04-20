#include "titlewindow.h"
#include "ui_titlewindow.h"

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
