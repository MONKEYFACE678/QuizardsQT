#include "mainwindow.h"
#include "titlewindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TitleWindow w;
    w.show();
    return QCoreApplication::exec();
}
