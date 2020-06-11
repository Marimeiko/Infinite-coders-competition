#include <iostream>
#include <string>

#include "palindrome.hpp"

int main() {
    std::string word;

    std::cout << "Write a word or a sentence to check if it's a palindrome\n";
    std::cin >> word;
    std::cout << palindrome(word) << "\n";

    return 0;
}
