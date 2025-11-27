#include <iostream>
using namespace std;

int main() {
    int max_number;
    long long even_sum = 0;

    cout << "Enter the value of N (the upper limit): ";
    cin >> max_number;

    // Loop through numbers from 1 to N
    for (int i = 1; i <= max_number; ++i) {
        // Check if the current number is even
        if (i % 2 == 0) {
            even_sum += i;
        }
    }

    cout << "The sum of even numbers between 1 and " << max_number << " is: " << even_sum << endl;
    return 0;
}