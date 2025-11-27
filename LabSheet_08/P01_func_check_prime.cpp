#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    // Check for factors up to the square root
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false; // Found a factor, not prime
        }
    }
    return true; // No factors found, it is prime
}

int main() {
    int input_number;

    cout << "Enter a number to check for primality: ";
    cin >> input_number;

    if (isPrime(input_number)) {
        cout << input_number << " is a prime number." << endl;
    } else {
        cout << input_number << " is NOT a prime number." << endl;
    }
    return 0;
}