#include <iostream>
using namespace std;

// Function to calculate factorial of a number
long long calculateFactorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int original_number, temp_number, remainder;
    long long sum_of_factorials = 0;

    cout << "Enter an integer: ";
    cin >> original_number;

    if (original_number < 0) {
        cout << "Not a strong number." << endl;
        return 0;
    }
    
    temp_number = original_number;

    // A strong number is a number whose sum of the factorials of its digits is equal to the number itself.
    while (temp_number > 0) {
        remainder = temp_number % 10;
        sum_of_factorials += calculateFactorial(remainder);
        temp_number /= 10;
    }

    if (sum_of_factorials == original_number) {
        cout << original_number << " is a Strong Number." << endl;
    } else {
        cout << original_number << " is NOT a Strong Number." << endl;
    }
    return 0;
}