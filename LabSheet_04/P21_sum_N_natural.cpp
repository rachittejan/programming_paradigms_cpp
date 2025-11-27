#include <iostream>
using namespace std;

int main() {
    int max_number;
    long long sum_result = 0; // Use long long for potentially large sums

    cout << "Enter the value of N (the last natural number): ";
    cin >> max_number;

    // Loop from 1 up to N
    for (int i = 1; i <= max_number; ++i) {
        sum_result += i; // Add the current number to the sum
    }

    cout << "The sum of the first " << max_number << " natural numbers is: " << sum_result << endl;
    return 0;
}