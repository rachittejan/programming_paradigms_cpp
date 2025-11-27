#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 5;

    cout << "--- Relational Operators Demonstration (Result is 1 for True, 0 for False) ---" << endl;

    // Equal to (==)
    cout << "x == y: " << (x == y) << endl; // 0 (False)

    // Not equal to (!=)
    cout << "x != y: " << (x != y) << endl; // 1 (True)

    // Greater than (>)
    cout << "x > y: " << (x > y) << endl; // 1 (True)

    // Less than (<)
    cout << "x < y: " << (x < y) << endl; // 0 (False)

    // Greater than or equal to (>=)
    cout << "x >= 10: " << (x >= 10) << endl; // 1 (True)

    // Less than or equal to (<=)
    cout << "y <= 5: " << (y <= 5) << endl; // 1 (True)

    return 0;
}