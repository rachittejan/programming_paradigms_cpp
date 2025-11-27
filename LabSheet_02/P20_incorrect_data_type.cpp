#include <iostream>
using namespace std;

int main() {
    // Variable is declared as integer
    int integer_input; 

    cout << "Enter an integer (Try entering a floating-point number like 5.9): ";
    // If the user inputs "5.9", cin will only store '5' in the integer variable.
    cin >> integer_input; 

    cout << "The value stored is: " << integer_input << endl; // Prints 5
    
    // LOGICAL ERROR: The program loses the fractional data (.9) due to incorrect
    // data type choice for input.
    
    return 0;
}