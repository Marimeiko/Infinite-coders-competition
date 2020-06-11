#pragma once
#include <iostream>

void buildTree(int a) {
    if (a > 0) {
        int lineLenngth = 2 * a - 1;
        int spaces = a - 1;
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < spaces; j++)
                std::cout << ' ';

            for (int j = 0; j < lineLenngth - (2 * spaces); j++)
                std::cout << '*';

            for (int j = 0; j < spaces; j++)
                std::cout << ' ';
            spaces--;
            std::cout << '\n';
        }
    } else {
        std::cout << "Invalid data!\n";
    }
}
