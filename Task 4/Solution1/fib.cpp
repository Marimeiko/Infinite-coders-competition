#include "fib.hpp"

int fib(int n) {
    int value = 0;
    ((n == 2) || (n == 1)) && (value = 1);
    (n >= 3) && (value = fib(n - 2) + fib(n - 1));
    return value;
}