#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 5, z = 2;
    int final_result;

    // Expression: x + y * z - (y / z)
    // Precedence: () > * / % > + -
    // 1. (y / z) -> (5 / 2) = 2 (Integer division)
    // 2. y * z -> 5 * 2 = 10
    // 3. x + 10 - 2 -> 10 + 10 - 2
    // 4. 20 - 2 = 18

    final_result = x + y * z - (y / z);

    cout << "Expression: 10 + 5 * 2 - (5 / 2)" << endl;
    cout << "Calculated Result (using C++ precedence): " << final_result << endl; // 18
    return 0;
}