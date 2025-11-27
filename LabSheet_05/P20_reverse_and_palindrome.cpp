#include <iostream>
using namespace std;

int main() {
    int original_number, temp_number, reversed_number = 0;

    cout << "Enter an integer: ";
    cin >> original_number;

    temp_number = original_number;

    // Reverse the number (Logic reused from P24 in Lab 04)
    while (temp_number != 0) {
        reversed_number = reversed_number * 10 + (temp_number % 10);
        temp_number /= 10;
    }

    cout << "Reverse of " << original_number << " is: " << reversed_number << endl;

    // Check if palindrome
    if (original_number == reversed_number) {
        cout << original_number << " is a Palindrome number." << endl;
    } else {
        cout << original_number << " is NOT a Palindrome number." << endl;
    }
    return 0;
}