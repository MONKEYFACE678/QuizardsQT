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

std::string FlashCard::getDef() {
	return definition;
}

std::string FlashCard::getTerm() {
	return term;
}