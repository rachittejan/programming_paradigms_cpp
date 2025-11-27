#include <iostream>
using namespace std;

int main() {
    int original_number, temp_number;
    int even_digit_sum = 0;
    int odd_digit_sum = 0;
    int digit;

    cout << "Enter an integer: ";
    cin >> original_number;

    temp_number = original_number;
    
    // Handle negative input
    if (temp_number < 0) {
        temp_number = -temp_number;
    }

    while (temp_number > 0) {
        digit = temp_number % 10;
        
        // Check if the extracted digit is even or odd
        if (digit % 2 == 0) {
            even_digit_sum += digit;
        } else {
            odd_digit_sum += digit;
        }
        
        temp_number /= 10;
    }

    cout << "Sum of EVEN digits: " << even_digit_sum << endl;
    cout << "Sum of ODD digits: " << odd_digit_sum << endl;
    return 0;
}