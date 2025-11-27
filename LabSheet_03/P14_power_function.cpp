#include <iostream>
#include <cmath> // Required for the pow() function
using namespace std;

int main() {
    double base_number;
    double square_result, cube_result;

    cout << "Enter a number: ";
    cin >> base_number;

    // pow(base, exponent) calculates power
    // Square: pow(number, 2)
    square_result = pow(base_number, 2);

    // Cube: pow(number, 3)
    cube_result = pow(base_number, 3);

    cout << "\nSquare of " << base_number << " is: " << square_result << endl;
    cout << "Cube of " << base_number << " is: " << cube_result << endl;
    return 0;
}