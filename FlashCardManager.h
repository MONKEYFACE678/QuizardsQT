#pragma once

#include <vector>
#include <fstream>
#include <QFile>
#include <QString>
#include "FlashCard.h"

class FlashCardManager {
private:
	std::fstream infile;
    std::vector<FlashCard> cards;
    QFile file;
    QString path;

public:
    FlashCardManager();

    void loadCards();
    void saveCards();
    void addCard(std::string, std::string);
	void removeCard(FlashCard);
    void clearCards();
	bool isEmpty();
    int length();
	FlashCard randomCard();
};