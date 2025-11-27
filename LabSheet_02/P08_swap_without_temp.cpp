#include <iostream>
using namespace std;

int main() {
    int variable_X = 55;
    int variable_Y = 11;

    cout << "Before swap: X = " << variable_X << ", Y = " << variable_Y << endl;

    // Swapping logic without a temporary variable (using arithmetic)
    variable_X = variable_X + variable_Y; // X = 66
    variable_Y = variable_X - variable_Y; // Y = 66 - 11 = 55 (Original X)
    variable_X = variable_X - variable_Y; // X = 66 - 55 = 11 (Original Y)

    cout << "After swap: X = " << variable_X << ", Y = " << variable_Y << endl;
    return 0;
}