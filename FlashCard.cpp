#include "FlashCard.h"
#include <string>

std::string FlashCard::toLower(std::string word) {
	//Goes through each character in the word and adds the lowercase version of it to a string
		std::string newWord = "";
		for (char c : word) {
			newWord += tolower(c);
		}
		return newWord;
	}

//Definition equals d, term equals t but lowercase
FlashCard::FlashCard(std::string d, std::string t) : definition(d), term(toLower(t)) {}

bool FlashCard::isCorrect(std::string t) {
	//It is correct if the lowercase answer is equal to the term
		return toLower(t) == term;
	}

std::string FlashCard::getDef() const{
	return definition;
}

std::string FlashCard::getTerm() const{
	return term;
}

void to_json(json& j, const FlashCard& fc) {
    j = json{ {"def", fc.getDef()}, {"term", fc.getTerm()} };
}

void from_json(const json& j, FlashCard& fc) {
    std::string def = j.at("def").get<std::string>();
    std::string term = j.at("term").get<std::string>();

    fc = FlashCard(def, term);
}