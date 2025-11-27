#include <iostream>
using namespace std;

int main() {
    int input_number;

    cout << "Enter an integer: ";
    cin >> input_number;

    // Use the modulus operator (%) to check if the remainder when divided by 2 is 0.
    if (input_number % 2 == 0) {
        cout << input_number << " is an even number." << endl;
    } else {
        cout << input_number << " is an odd number." << endl;
    }
    return 0;
}