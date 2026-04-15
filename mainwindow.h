#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QTextEdit>
#include "FlashCardManager.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void onSubmit();

private:
    Ui::MainWindow *ui;

    bool eventFilter(QObject *object, QEvent *event);

    FlashCardManager manager;
    FlashCard currentCard;
};

#endif // MAINWINDOW_H
