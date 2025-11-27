#include <iostream>
using namespace std;

// Function to calculate the sum of digits (reused from P22)
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
    cout << "Harshad numbers between 1 and 100 are:" << endl;

    for (int i = 1; i <= 100; ++i) {
        // All single-digit numbers are Harshad (e.g., 5 is divisible by 5)
        if (i < 10) {
            cout << i << " ";
            continue;
        }
        
        int digit_sum = getSumOfDigits(i);
        
        // Check if divisible by the sum of its digits
        if (i % digit_sum == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}