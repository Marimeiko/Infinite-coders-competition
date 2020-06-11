#include <iostream>

#include "tree.hpp"

int main() {
    int height;
    std::cout << "Enter the height of a tree: ";
    std::cin >> height;
    buildTree(height);
    return 0;
}