#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5};

    auto print = [vec](const int& n) { std::cout << n << " "; };
    std::for_each(vec.begin(), vec.end(), print);
    std::cout << '\n';

    return 0;
}