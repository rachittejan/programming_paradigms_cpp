#include <iostream>
using namespace std;

int main() {
    int original_number, number_to_reverse, reversed_number = 0;
    int last_digit;

    cout << "Enter an integer: ";
    cin >> original_number;

    number_to_reverse = original_number;

    // Loop until the number becomes 0
    while (number_to_reverse != 0) {
        // 1. Extract the last digit
        last_digit = number_to_reverse % 10; 
        
        // 2. Build the reversed number
        reversed_number = reversed_number * 10 + last_digit;
        
        // 3. Remove the last digit from the original number
        number_to_reverse /= 10; 
    }

    cout << "The reverse of " << original_number << " is: " << reversed_number << endl;
    return 0;
}