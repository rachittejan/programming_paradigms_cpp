#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int min_val, gcd_result = 1;

    cout << "Enter the first positive integer: ";
    cin >> num1;
    cout << "Enter the second positive integer: ";
    cin >> num2;

    // GCD cannot be greater than the minimum of the two numbers
    min_val = (num1 < num2) ? num1 : num2;

    // Iterate from 1 up to the minimum value
    for (int i = 1; i <= min_val; ++i) {
        // Check if 'i' divides both numbers evenly
        if (num1 % i == 0 && num2 % i == 0) {
            gcd_result = i; // Store the largest common divisor found so far
        }
    }

    cout << "The GCD/HCF of " << num1 << " and " << num2 << " is: " << gcd_result << endl;
    return 0;
}