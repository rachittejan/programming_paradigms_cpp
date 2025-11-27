#include <iostream>
using namespace std;

int main() {
    int a = 15, b = 4;
    int result;

    cout << "--- Arithmetic Operators Demonstration ---" << endl;
    
    // Addition (+)
    result = a + b;
    cout << "Addition (a + b): " << result << endl; // 19

    // Subtraction (-)
    result = a - b;
    cout << "Subtraction (a - b): " << result << endl; // 11

    // Multiplication (*)
    result = a * b;
    cout << "Multiplication (a * b): " << result << endl; // 60

    // Division (/) - Integer division discards the fractional part
    result = a / b;
    cout << "Division (a / b): " << result << endl; // 3

    // Modulus (%) - Calculates the remainder
    result = a % b;
    cout << "Modulus (a % b): " << result << endl; // 3 (15 divided by 4 leaves a remainder of 3)

    return 0;
}