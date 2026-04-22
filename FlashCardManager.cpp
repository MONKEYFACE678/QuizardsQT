#include "FlashCardManager.h"
#include "FlashCard.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <QString>
#include <QFile>
#include <QIODevice>
#include <QStandardPaths>
#include <QDir>
#include "json.hpp"

using json = nlohmann::json;

FlashCardManager::FlashCardManager(){
    QString dirPath = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
    QDir().mkpath(dirPath);

    path = dirPath + "/cards.json";
    file.setFileName(path);

    if (!file.exists()) {
        if (file.open(QIODevice::WriteOnly)) {
            file.write("");
            file.close();
        }
    }
}

void FlashCardManager::loadCards() {
    //Seed random 
    std::srand(std::time(0));

    //Try parsing json, then adds each item in cards as a flashcard into cards vector
    try {
        json data;

        if(file.open(QIODevice::ReadOnly)){
            data = json::parse(file.readAll().toStdString());
        }

        for (json card : data["cards"]) {
            cards.push_back(FlashCard(card["def"], card["term"]));
        }
    }
    catch (const std::exception& e) {
        std::cerr << "Error parsing JSON: " << e.what() << std::endl;
    }
}

void FlashCardManager::saveCards(){
    if (!file.exists()) {
        if (file.open(QIODevice::WriteOnly)) {
            json defaultData = {
                {"cards", {
                              {
                                  {"term", "This is how you format it"},
                                  {"def", std::string("Make cards at ") + path.toStdString()}
                              },
                              {
                                  {"term", "This is the word you must enter"},
                                  {"def", std::string("Make cards at ") + path.toStdString() + " You can make multiple"}
                              }
                          }}
            };

            file.write(defaultData.dump(4).c_str()); // pretty print
            file.close();
        }
    }

    //Try parsing json, then adds each item in cards as a flashcard into cards vector
    try {
        std::ifstream infile(path.toStdString());

        json data = json::parse(infile);

        for (json card : data["cards"]) {
            cards.push_back(FlashCard(card["def"], card["term"]));
        }
    }
    catch (const std::exception& e) {
        cards.push_back((FlashCard("No cards. Add cards at " + path.toStdString() + "/cards.json", "No cards")));
        std::cerr << "Error parsing JSON: " << e.what() << std::endl;
    }
}

FlashCard FlashCardManager::randomCard() {
    //Returns a random card if there are cards, if there are no card returns an error card
    if (isEmpty()) {
        return FlashCard("NO CARD", "NO CARD");
    }
    int index = rand() % cards.size();

    return cards[index];
}

void FlashCardManager::removeCard(FlashCard card) {
    //Removes a card matching a given card using vector erase remove
    cards.erase(std::remove(cards.begin(), cards.end(), card), cards.end());
}

bool FlashCardManager::isEmpty() {
    return cards.empty();
}