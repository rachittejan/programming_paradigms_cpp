#include <iostream>
using namespace std;

int main() {
    // Variables for input, quotient, and remainder
    int dividend_number, divisor_number;
    int integer_quotient;
    int remainder_value;

    // Get input from the user
    cout << "Enter the dividend: ";
    cin >> dividend_number;
    cout << "Enter the divisor: ";
    cin >> divisor_number;

    // Calculate quotient using integer division
    integer_quotient = dividend_number / divisor_number;

    // Calculate remainder using the modulus operator (%)
    remainder_value = dividend_number % divisor_number;

    // Display results
    cout << "\nQuotient: " << integer_quotient << endl;
    cout << "Remainder: " << remainder_value << endl;
    return 0;
}