#include <iostream>

#include "repetitions.cpp"
#include "repetitions.hpp"

int main() {
    std::string s{"Ala ma ma kota, a kot ma ma Ale Ale."};

    removeRepetitions(s);
    std::cout << s << '\n';

    return 0;
}
