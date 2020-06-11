#include <iostream>
#include <string>

void drawTree(int height) {
    for (int i = 0; i < height; i++) {
        int spaces = (height - i) - 1;
        int stars = (2 * i) + 1;
        std::string sSpace(spaces, ' ');
        std::cout << sSpace << std::string(stars, '*')
                  << sSpace << '\n';
    }
}

int main() {
    std::cout << "Enter the height of your tree:" << std::endl;
    int height;
    std::cin >> height;
    drawTree(height);

    return 0;
}