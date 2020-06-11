#include "palindrome.hpp"

#include <algorithm>
#include <iostream>

bool is_palindrome(const std::string& s) {
    auto it = std::mismatch(s.begin(), s.end(), s.rbegin());
    return it.first == s.end();
}

void test(const std::string& s) {
    std::cout << "\"" << s << "\" "
              << (is_palindrome(s) ? "is" : "is not")
              << " a palindrome\n";
}
