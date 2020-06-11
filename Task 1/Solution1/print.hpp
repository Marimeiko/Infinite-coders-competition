#pragma once

#include <algorithm>
#include <vector>

std::vector<int> solution1(std::vector<int>& vec) {
    std::reverse(vec.begin(), vec.end());
    return vec;
}