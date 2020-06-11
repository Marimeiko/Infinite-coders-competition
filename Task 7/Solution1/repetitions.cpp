#include "repetitions.hpp"

#include <algorithm>
#include <sstream>
#include <vector>

void removeRepetitions(std::string& str) {
    str.erase(str.end() - 1, str.end());
    std::stringstream ss(str);
    std::string word;
    std::vector<std::string> words;
    do {
        ss >> word;
        words.push_back(word);
    } while (ss);

    words.erase(std::unique(words.begin(), words.end()),
                words.end());

    str.clear();
    for (const auto& e : words) {
        str += e + ' ';
    }
    str.erase(str.end() - 1, str.end());
    str += '.';
}
