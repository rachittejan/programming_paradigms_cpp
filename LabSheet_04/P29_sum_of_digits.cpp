#include <iostream>
using namespace std;

int main() {
    int original_number, number_to_process;
    int sum_of_digits = 0;
    int last_digit;

    cout << "Enter an integer: ";
    cin >> original_number;

    number_to_process = original_number;
    
    // Handle negative input by taking its absolute value
    if (number_to_process < 0) {
        number_to_process = -number_to_process;
    }

    // Loop until the number becomes 0
    while (number_to_process > 0) {
        // 1. Get the last digit
        last_digit = number_to_process % 10;
        
        // 2. Add it to the sum
        sum_of_digits += last_digit;
        
        // 3. Remove the last digit
        number_to_process /= 10;
    }

    cout << "The sum of the digits of " << original_number << " is: " << sum_of_digits << endl;
    return 0;
}