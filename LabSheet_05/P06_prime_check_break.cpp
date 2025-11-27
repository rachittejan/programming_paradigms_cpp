#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int input_number;
    bool is_prime = true; 

    cout << "Enter a positive integer: ";
    cin >> input_number;

    if (input_number <= 1) {
        is_prime = false; 
    } else {
        // Loop from 2 up to the square root of the number
        for (int i = 2; i <= sqrt(input_number); ++i) {
            if (input_number % i == 0) {
                is_prime = false;
                break; // Terminate loop early since a factor was found
            }
        }
    }

    if (is_prime) {
        cout << input_number << " is a prime number." << endl;
    } else {
        cout << input_number << " is NOT a prime number." << endl;
    }
    return 0;
}