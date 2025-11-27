#include <iostream>
#include <cmath> // Required for the abs() function
using namespace std;

int main() {
    int input_number;
    int abs_value;

    cout << "Enter an integer: ";
    cin >> input_number;

    // Method 1: Using the standard library function
    // abs_value = abs(input_number);
    
    // Method 2: Using if-else logic
    if (input_number < 0) {
        abs_value = -input_number; // Negate a negative number to make it positive
    } else {
        abs_value = input_number; // Positive numbers remain the same
    }

    cout << "The absolute value of " << input_number << " is: " << abs_value << endl;
    return 0;
}