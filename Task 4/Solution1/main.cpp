#include <iostream>

#include "fib.hpp"

using namespace std;

int main() {
    for (int i = 0; i < 15; i++)
        cout << fib(i) << endl;
}