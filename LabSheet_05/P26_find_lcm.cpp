#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int max_val, lcm_result;

    cout << "Enter the first positive integer: ";
    cin >> num1;
    cout << "Enter the second positive integer: ";
    cin >> num2;

    // LCM must be at least as large as the maximum of the two numbers
    max_val = (num1 > num2) ? num1 : num2;

    // Start checking from max_val upwards
    for (int i = max_val; ; ++i) {
        // Check if 'i' is divisible by both numbers
        if (i % num1 == 0 && i % num2 == 0) {
            lcm_result = i;
            break; // Found the Least Common Multiple
        }
    }

    cout << "The LCM of " << num1 << " and " << num2 << " is: " << lcm_result << endl;
    return 0;
}