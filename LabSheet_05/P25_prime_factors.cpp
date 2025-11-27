#include <iostream>
using namespace std;

int main() {
    int input_number;

    cout << "Enter a positive integer: ";
    cin >> input_number;

    cout << "\nPrime factors of " << input_number << " are: ";

    // Handle factor 2
    while (input_number % 2 == 0) {
        cout << 2 << " ";
        input_number /= 2;
    }

    // Check for odd factors starting from 3
    for (int i = 3; i * i <= input_number; i += 2) {
        while (input_number % i == 0) {
            cout << i << " ";
            input_number /= i;
        }
    }

    // If a prime number greater than 2 remains
    if (input_number > 2) {
        cout << input_number;
    }
    cout << endl;
    return 0;
}