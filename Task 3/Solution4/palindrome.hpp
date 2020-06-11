#pragma once
#include <algorithm>
#include <string>

std::string palindrome(const std::string& word) {
    std::string copy = word;
    std::reverse_copy(word.begin(), word.end(), copy.begin());

    if (copy == word) {
        return "Your word is a palindrome!";
    } else {
        return "Your word isn't a palindrome.";
    }
}
