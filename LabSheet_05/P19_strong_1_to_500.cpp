#include <iostream>
using namespace std;

// Function to calculate factorial (reused from P18)
long long calculateFactorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

// Function to check if a number is Strong
bool isStrong(int num) {
    if (num < 0) return false;
    int temp = num;
    long long sum_of_factorials = 0;

    while (temp > 0) {
        int remainder = temp % 10;
        sum_of_factorials += calculateFactorial(remainder);
        temp /= 10;
    }
    return sum_of_factorials == num;
}

int main() {
    cout << "Strong numbers between 1 and 500 are:" << endl;

    for (int i = 1; i <= 500; ++i) {
        if (isStrong(i)) {
            cout << i << " "; // Strong numbers include 1, 2, 145
        }
    }
    cout << endl;
    return 0;
}