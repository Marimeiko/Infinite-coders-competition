#pragma once

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int print(std::vector<int>& vector1) {
    std::vector<int> vector();
    std::reverse_copy(vector1.begin(), vector1.end(), std::ostream_iterator<int>(std::cout, " "));
    return 0;
}
