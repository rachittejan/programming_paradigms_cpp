#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "--- Menu Driven Calculator ---" << endl;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter the second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            } else {
                cout << "Error: Cannot divide by zero." << endl;
            }
            break;
        default:
            // Default case handles any invalid operator input
            cout << "Error: Invalid operation specified." << endl;
    }
    return 0;
}