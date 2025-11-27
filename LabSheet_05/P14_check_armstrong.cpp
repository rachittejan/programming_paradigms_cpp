#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int original_number, temp_number, remainder;
    int sum_of_powers = 0;
    int num_digits = 0; // The power (e.g., 3 for 153)

    cout << "Enter an integer: ";
    cin >> original_number;

    temp_number = original_number;

    // Step 1: Count the number of digits (N)
    while (temp_number != 0) {
        temp_number /= 10;
        num_digits++;
    }

    temp_number = original_number;

    // Step 2: Calculate the sum of Nth powers of digits
    while (temp_number != 0) {
        remainder = temp_number % 10;
        // The sum is remainder^num_digits
        sum_of_powers += round(pow(remainder, num_digits)); 
        temp_number /= 10;
    }

    // Step 3: Compare
    if (sum_of_powers == original_number) {
        cout << original_number << " is an Armstrong number." << endl;
    } else {
        cout << original_number << " is NOT an Armstrong number." << endl;
    }
    return 0;
}