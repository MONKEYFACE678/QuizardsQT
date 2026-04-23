#pragma once

#include <vector>
#include <fstream>
#include <QFile>
#include <QString>
#include "FlashCard.h"

class FlashCardManager {
private:
	std::fstream infile;
    QFile file;
    QString path;

public:
	std::vector<FlashCard> cards;
    FlashCardManager();

    void loadCards();
    void saveCards();
    void addCard(std::string, std::string);
	void removeCard(FlashCard);
	bool isEmpty();
	FlashCard randomCard();
};