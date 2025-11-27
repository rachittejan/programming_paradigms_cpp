#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "The largest number is: " << num1 << endl;
    } else if (num2 > num1) {
        cout << "The largest number is: " << num2 << endl;
    } else {
        // Handles the case where both numbers are equal
        cout << "Both numbers are equal: " << num1 << endl;
    }
    return 0;
}