#pragma once

#include <algorithm>
#include <vector>

std::vector<int> solution2(std::vector<int>& vec) {
    std::vector<int> vec_copy = vec;
    std::swap_ranges(vec.rbegin(), vec.rend(), vec_copy.begin());
    return vec;
}