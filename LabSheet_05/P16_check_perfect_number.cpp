#include <iostream>
using namespace std;

int main() {
    int input_number;
    int sum_of_factors = 0;

    cout << "Enter an integer: ";
    cin >> input_number;

    if (input_number <= 0) {
        cout << "Not a perfect number." << endl;
        return 0;
    }

    // A perfect number is a positive integer that is equal to the sum of its proper positive divisors (excluding the number itself).
    // Loop checks factors from 1 up to (number - 1)
    for (int i = 1; i < input_number; ++i) {
        if (input_number % i == 0) {
            sum_of_factors += i; // i is a proper divisor
        }
    }

    if (sum_of_factors == input_number) {
        cout << input_number << " is a Perfect Number." << endl;
    } else {
        cout << input_number << " is NOT a Perfect Number." << endl;
    }
    return 0;
}