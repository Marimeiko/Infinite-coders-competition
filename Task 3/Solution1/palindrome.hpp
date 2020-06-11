#pragma once
#include <algorithm>
#include <string>

std::string palindrome(const std::string& word) {
    std::string copy = word;
    std::reverse(copy.begin(), copy.end());

    if (copy == word) {
        return "Your word is a palindrome!";
    } else {
        return "Your word isn't a palindrome.";
    }
}
