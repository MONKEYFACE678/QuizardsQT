#ifndef CARDADDSCREEN_H
#define CARDADDSCREEN_H

#include <QDialog>

namespace Ui {
class CardAddScreen;
}

class CardAddScreen : public QDialog
{
    Q_OBJECT

public:
    explicit CardAddScreen(QWidget *parent = nullptr);
    ~CardAddScreen();

private:
    Ui::CardAddScreen *ui;
};

#endif // CARDADDSCREEN_H
