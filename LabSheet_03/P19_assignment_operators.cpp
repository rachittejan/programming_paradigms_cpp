#include <iostream>
using namespace std;

int main() {
    int variable_a = 20;
    int variable_b = 5;

    cout << "Initial value of A: " << variable_a << endl;

    // Simple Assignment (=)
    int temp = variable_a;

    // Add Assignment (+=) : variable_a = variable_a + variable_b
    variable_a += variable_b; // 20 + 5 = 25
    cout << "After A += B: " << variable_a << endl;

    // Subtract Assignment (-=) : variable_a = variable_a - variable_b
    variable_a -= variable_b; // 25 - 5 = 20
    cout << "After A -= B: " << variable_a << endl;

    // Multiply Assignment (*=) : variable_a = variable_a * variable_b
    variable_a *= variable_b; // 20 * 5 = 100
    cout << "After A *= B: " << variable_a << endl;

    // Divide Assignment (/=) : variable_a = variable_a / variable_b
    variable_a /= variable_b; // 100 / 5 = 20
    cout << "After A /= B: " << variable_a << endl;

    // Modulus Assignment (%=) : variable_a = variable_a % variable_b
    variable_a %= 3; // 20 % 3 = 2
    cout << "After A %= 3: " << variable_a << endl;
    
    return 0;
}