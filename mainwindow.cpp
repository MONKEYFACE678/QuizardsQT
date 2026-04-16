#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QKeyEvent>

MainWindow::~MainWindow()
{
    delete ui;
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->answerInput->installEventFilter(this);

    manager.getCards();

    if (!manager.isEmpty()) {
        currentCard = manager.randomCard();
        ui->definitionLabel->setText(QString::fromStdString(currentCard.getDef()));
    }

    connect(ui->submitButton, &QPushButton::clicked,
            this, &MainWindow::onSubmit);

    ui->definitionLabel->setTextInteractionFlags(Qt::TextSelectableByMouse);
}

bool MainWindow::eventFilter(QObject *object, QEvent *event)
{
    if ( object == ui->answerInput &&  ( event->type() == QEvent::HoverEnter )  ) {
        ui->answerInput->setText("");
    }

    if ( object == ui->answerInput &&  (event->type() == QEvent::KeyPress )  ) {
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        if (keyEvent->key() == Qt::Key_Return) {
            onSubmit();
        }
    }
    return false;
}

void MainWindow::onSubmit() {
    QString input = ui->answerInput->text();

    if (currentCard.isCorrect(input.toStdString())) {
        ui->feedbackLabel->setText("Great job!");

        manager.removeCard(currentCard);

        if (manager.isEmpty()) {
            ui->definitionLabel->setText("All done!");
            ui->answerInput->setText("");
            ui->answerInput->setEnabled(false);
            ui->submitButton->setEnabled(false);
            return;
        }

        currentCard = manager.randomCard();
        ui->definitionLabel->setText(
            QString::fromStdString(currentCard.getDef())
            );
    } else {
        ui->feedbackLabel->setText(
            "Try again! Term: " +
            QString::fromStdString(currentCard.getTerm())
            );
        currentCard = manager.randomCard();
        ui->definitionLabel->setText(
            QString::fromStdString(currentCard.getDef())
            );
    }

    ui->answerInput->clear();
}
