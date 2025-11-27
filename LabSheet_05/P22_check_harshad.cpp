#include <iostream>
using namespace std;

int getSumOfDigits(int n) {
    int sum = 0;
    int temp = n;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    return sum;
}

int main() {
    int input_number;

    cout << "Enter a positive integer: ";
    cin >> input_number;

    if (input_number <= 0) {
        cout << "Not a Harshad number." << endl;
        return 0;
    }

    int digit_sum = getSumOfDigits(input_number);

    // A Harshad number (or Niven number) is an integer that is divisible by the sum of its digits.
    if (input_number % digit_sum == 0) {
        cout << input_number << " is a Harshad number." << endl;
    } else {
        cout << input_number << " is NOT a Harshad number." << endl;
    }
    return 0;
}