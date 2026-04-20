#ifndef TITLEWINDOW_H
#define TITLEWINDOW_H

#include <QMainWindow>

namespace Ui {
class TitleWindow;
}

class TitleWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TitleWindow(QWidget *parent = nullptr);
    ~TitleWindow();

private:
    Ui::TitleWindow *ui;
};

#endif // TITLEWINDOW_H
