#include <iostream>
using namespace std;

int main() {
    int variable_A = 100;
    int variable_B = 200;
    int temp_variable; // Temporary variable for swapping

    cout << "Before swap: A = " << variable_A << ", B = " << variable_B << endl;

    // Swapping logic using a temporary variable
    temp_variable = variable_A; // 1. Store A's value
    variable_A = variable_B;    // 2. Assign B's value to A
    variable_B = temp_variable; // 3. Assign original A's value (from temp) to B

    cout << "After swap: A = " << variable_A << ", B = " << variable_B << endl;
    return 0;
}