#include <iostream>
using namespace std;

int main() {
    int input_number;

    cout << "Enter an integer: ";
    cin >> input_number;

    if (input_number > 0) {
        cout << input_number << " is a positive number." << endl;
    } else if (input_number < 0) {
        cout << input_number << " is a negative number." << endl;
    } else {
        // Number is zero
        cout << "The number is zero (neither positive nor negative)." << endl;
    }
    return 0;
}