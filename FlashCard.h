#pragma once

#include <string>
class FlashCard
{
private:
	std::string definition, term;
	std::string toLower(std::string word);

public:
	FlashCard(std::string d, std::string t);
    FlashCard(){}

	bool isCorrect(std::string t);
	std::string getDef();
	std::string getTerm();
	bool operator==(const FlashCard& other) const {
		//defines == for FlashCards so that FlashCardManager::removeCard() work
		return definition == other.definition && term == other.term;
	}
};

