#ifndef CARDADDSCREEN_H
#define CARDADDSCREEN_H

#include <QDialog>
#include "FlashCardManager.h"

namespace Ui {
class CardAddScreen;
}

class CardAddScreen : public QDialog
{
    Q_OBJECT

public:
    explicit CardAddScreen(QWidget *parent = nullptr);
    ~CardAddScreen();

private slots:
    void onSubmit();
    void clearCards();

private:
    Ui::CardAddScreen *ui;
    void updateCountLabel();
    bool eventFilter(QObject *object, QEvent *event);
    FlashCardManager manager;
};


#endif // CARDADDSCREEN_H
