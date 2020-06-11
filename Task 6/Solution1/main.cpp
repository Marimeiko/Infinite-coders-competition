#include <iostream>
#include <string>

#include "clearSentence.hpp"
//#include "clearSentence.hpp"

int main() {
    std::string sentence;
    std::cout << "Write your sentence:\n";
    std::getline(std::cin, sentence);
    std::cout << "Your sentence: " << sentence << "\n";
    std::cout << clearSentence(sentence) << "\n";
    return 0;
}