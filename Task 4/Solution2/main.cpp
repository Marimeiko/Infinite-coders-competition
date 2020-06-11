#include <iostream>

#include "fibonacci.hpp"

int main() {
    long long resultR = fibRecursive(40);
    long long resultI = fibIterative(40);

    std::cout << "Recursive: " << resultR << '\n';
    std::cout << "Iterative: " << resultI << '\n';

    return 0;
}
