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
    //Seed random
    std::srand(std::time(0));

    QString dirPath = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
    QDir().mkpath(dirPath);

    path = dirPath + "/cards.json";
    file.setFileName(path);

    if (!file.exists()) {
        if (file.open(QIODevice::WriteOnly)) {
            file.write("{\"cards\":[]}");
            file.close();
        }
    }
}

void FlashCardManager::loadCards() {
    //Try parsing json, then adds each item in cards as a flashcard into cards vector
    try {
        json data;

        if(file.open(QIODevice::ReadOnly)){
            std::string content = file.readAll().toStdString();
            file.close();
            data = json::parse(content);
        }

        cards.clear();

        for (json card : data["cards"]) {
            cards.push_back(FlashCard(card["def"], card["term"]));
        }
    }
    catch (const std::exception& e) {
        std::cerr << "Error parsing JSON: " << e.what() << std::endl;
    }
}

void FlashCardManager::saveCards(){
    if (file.open(QIODevice::WriteOnly)) {
        json data;
        data["cards"] = cards;

        file.write(data.dump(4).c_str()); // pretty print
        file.close();
    }
}

void FlashCardManager::clearCards(){
    cards.clear();
    saveCards();
}

FlashCard FlashCardManager::randomCard() {
    //Returns a random card if there are cards, if there are no card returns an error card
    if (isEmpty()) {
        return FlashCard("NO CARD", "NO CARD");
    }
    int index = rand() % cards.size();

    return cards[index];
}

void FlashCardManager::addCard(std::string def, std::string term){
    cards.push_back(FlashCard(def, term));
}

void FlashCardManager::removeCard(FlashCard card) {
    //Removes a card matching a given card using vector erase remove
    cards.erase(std::remove(cards.begin(), cards.end(), card), cards.end());
}

bool FlashCardManager::isEmpty() {
    return cards.empty();
}

int FlashCardManager::length(){
    return cards.size();
}