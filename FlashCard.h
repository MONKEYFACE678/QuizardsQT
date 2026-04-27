#pragma once

#include <string>
#include "json.hpp"

using json = nlohmann::json;

class FlashCard
{
private:
    std::string definition, term;
	std::string toLower(std::string word);

public:
	FlashCard(std::string d, std::string t);
    FlashCard(){}

	bool isCorrect(std::string t);
    std::string getDef() const;
    std::string getTerm() const;
	bool operator==(const FlashCard& other) const {
		//defines == for FlashCards so that FlashCardManager::removeCard() work
		return definition == other.definition && term == other.term;
    }
};

void to_json(json& j, const FlashCard& fc);
void from_json(const json& j, FlashCard& fc);

