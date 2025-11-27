#include <iostream>
using namespace std;

int main() {
    int max_number;
    long long odd_sum = 0;

    cout << "Enter the value of N (the upper limit): ";
    cin >> max_number;

    // Loop through numbers from 1 to N
    for (int i = 1; i <= max_number; ++i) {
        // Check if the current number is odd
        if (i % 2 != 0) {
            odd_sum += i;
        }
    }

    cout << "The sum of odd numbers between 1 and " << max_number << " is: " << odd_sum << endl;
    return 0;
}