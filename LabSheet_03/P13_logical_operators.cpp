#include <iostream>
using namespace std;

int main() {
    bool condition1 = true;
    bool condition2 = false;

    cout << "--- Logical Operators Demonstration (Result is 1 for True, 0 for False) ---" << endl;

    // Logical AND (&&): True only if both conditions are True
    cout << "Condition1 && Condition2: " << (condition1 && condition2) << endl; // 0 (False)
    cout << "True && True: " << (condition1 && true) << endl; // 1 (True)

    // Logical OR (||): True if at least one condition is True
    cout << "Condition1 || Condition2: " << (condition1 || condition2) << endl; // 1 (True)
    cout << "False || False: " << (false || false) << endl; // 0 (False)

    // Logical NOT (!): Reverses the logical state
    cout << "!Condition1 (NOT True): " << (!condition1) << endl; // 0 (False)
    cout << "!Condition2 (NOT False): " << (!condition2) << endl; // 1 (True)

    return 0;
}