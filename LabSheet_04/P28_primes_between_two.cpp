#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime (reused logic from P27)
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int start_num, end_num;

    cout << "Enter the starting number: ";
    cin >> start_num;
    cout << "Enter the ending number: ";
    cin >> end_num;

    cout << "\nPrime numbers between " << start_num << " and " << end_num << " are:" << endl;

    // Loop through every number in the range
    for (int current_num = start_num; current_num <= end_num; ++current_num) {
        if (isPrime(current_num)) {
            cout << current_num << " ";
        }
    }
    cout << endl;
    return 0;
}