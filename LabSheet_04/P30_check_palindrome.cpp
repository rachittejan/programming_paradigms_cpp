#include <iostream>
using namespace std;

int main() {
    int original_number, temp_number, reversed_number = 0;
    int last_digit;

    cout << "Enter an integer: ";
    cin >> original_number;

    temp_number = original_number;

    // 1. Reverse the number (Logic reused from P24)
    while (temp_number > 0) {
        last_digit = temp_number % 10;
        reversed_number = reversed_number * 10 + last_digit;
        temp_number /= 10;
    }

    // 2. Compare the original number with the reversed number
    if (original_number == reversed_number) {
        cout << original_number << " is a Palindrome number." << endl;
    } else {
        cout << original_number << " is NOT a Palindrome number." << endl;
    }

    return 0;
}