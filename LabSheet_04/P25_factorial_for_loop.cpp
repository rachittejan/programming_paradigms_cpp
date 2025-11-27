#include <iostream>
using namespace std;

int main() {
    int input_number;
    long long factorial_result = 1; 

    cout << "Enter a non-negative integer: ";
    cin >> input_number;

    if (input_number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0;
    }

    // Loop from 1 up to the input number
    for (int i = 1; i <= input_number; ++i) {
        factorial_result *= i; // factorial_result = factorial_result * i;
    }

    cout << "Factorial of " << input_number << " is: " << factorial_result << endl;
    return 0;
}