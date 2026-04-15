#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::~MainWindow()
{
    delete ui;
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    manager.getCards();

    if (!manager.isEmpty()) {
        currentCard = manager.randomCard();
        ui->definitionLabel->setText(QString::fromStdString(currentCard.getDef()));
    }

    connect(ui->submitButton, &QPushButton::clicked,
            this, &MainWindow::onSubmit);
}

void MainWindow::onSubmit() {
    QString input = ui->answerInput->text();

    if (currentCard.isCorrect(input.toStdString())) {
        ui->feedbackLabel->setText("Great job!");

        manager.removeCard(currentCard);

        if (manager.isEmpty()) {
            ui->definitionLabel->setText("All done!");
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
