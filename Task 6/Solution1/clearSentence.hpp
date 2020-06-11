#pragma once
#include <deque>
#include <string>

std::string deleteWord(std::string word) {
    if (word.size() == 4) {
        return "";
    } else if (word.size() == 6) {
        return "";
    }
    word += " ";
    return word;
}

std::string clearSentence(const std::string& sentence) {
    std::string new_sentence = "";
    std::string word = "";

    for (auto el : sentence) {
        if (el == ' ') {
            new_sentence += deleteWord(word);
            word = "";
        } else {
            word += el;
        }
    }
    new_sentence += deleteWord(word);
    return new_sentence;
}
