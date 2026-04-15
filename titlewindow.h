#ifndef TITLEWINDOW_H
#define TITLEWINDOW_H

#include <QDialog>

namespace Ui {
class TitleWindow;
}

class TitleWindow : public QDialog
{
    Q_OBJECT

public:
    explicit TitleWindow(QWidget *parent = nullptr);
    ~TitleWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::TitleWindow *ui;
};

#endif // TITLEWINDOW_H
