#pragma once

#include <vector>
#include <fstream>
#include "FlashCard.h"

class FlashCardManager {
private:
	std::fstream infile;

public:
	std::vector<FlashCard> cards;
    FlashCardManager(){}

	void getCards();
	void removeCard(FlashCard);
	bool isEmpty();
	FlashCard randomCard();
};