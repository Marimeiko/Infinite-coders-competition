#include "fibonacci.hpp"

long long fibRecursive(int n) {
    if (n <= 1)
        return n;
    return fibRecursive(n - 1) + fibRecursive(n - 2);
}

long long fibIterative(int n) {
    if (n <= 1)
        return n;
    long long last = 1;
    long long nextToLast = 1;
    long long result = 1;
    for (int i = 2; i < n; ++i) {
        result = last + nextToLast;
        nextToLast = last;
        last = result;
    }
    return result;
}
