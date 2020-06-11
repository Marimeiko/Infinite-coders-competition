#include "Christmas_tree.hpp"

#include <iomanip>
#include <iostream>
#include <string>

int print(int number, std::string& text) {
    (0 == number || print(--number, text));
    text += "*";
    return number;
}
int function(int number) {
    std::string text;
    static int wartosc = 0;
    print(wartosc++, text);

    std::cout << std::setw(number + wartosc - 1) << text;
    text.clear();

    (wartosc > 1 && print(wartosc - 2, text));
    std::cout << text << std::endl;
    (0 == --number || function(number));
    return number;
}