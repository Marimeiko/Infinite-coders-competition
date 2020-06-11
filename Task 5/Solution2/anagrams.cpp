#include "anagrams.hpp"

#include <algorithm>
#include <iostream>

bool isAnagram(std::string in1, std::string in2) {
    std::transform(in1.begin(), in1.end(), in1.begin(), ::tolower);
    std::transform(in2.begin(), in2.end(), in2.begin(), ::tolower);

    in1.erase(std::remove(in1.begin(), in1.end(), ' '), in1.end());
    in2.erase(std::remove(in2.begin(), in2.end(), ' '), in2.end());

    return std::is_permutation(in1.begin(), in1.end(),
                               in2.begin(), in2.end());
}

void test(const std::string& s1, const std::string& s2) {
    std::cout << "\"" << s1 << "\" "
              << " & \"" << s2 << "\" "
              << (isAnagram(s1, s2) ? "are" : "are NOT")
              << " anagrams\n";
}
