
#include <iostream>
#include <cassert>
#include "calculator.h"

using namespace std;

int main() {
    assert(add(2, 3) == 5);
    cout << "PASS: Addition test" << endl;

    assert(subtract(5, 3) == 2);
    cout << "PASS: Subtraction test" << endl;

    assert(add(-2, -3) == -5);
    cout << "PASS: Negative numbers test" << endl;

    cout << "All tests passed!" << endl;

    return 0;
}
