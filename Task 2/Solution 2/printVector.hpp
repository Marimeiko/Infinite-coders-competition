#pragma once
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int printVector(std::vector<int> vec) {
    std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, ", "));

    return 0;
}
