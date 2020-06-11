#include <iostream>
#include <vector>

#include "print.hpp"

void Print(std::vector<int>& vec) {
    for (const auto& el : vec) {
        std::cout << el << " ";
    }
}

int main() {
    std::vector<int> vector1 = {1, 2, 3, 4, 5, 6, 7};
    solution2(vector1);
    Print(vector1);
}
