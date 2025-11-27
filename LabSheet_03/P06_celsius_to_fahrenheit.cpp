#include <iostream>
using namespace std;

int main() {
    float celsius_temp;
    float fahrenheit_temp;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius_temp;

    // Conversion formula: F = (C * 9/5) + 32
    // Use 9.0/5.0 for floating-point division
    fahrenheit_temp = (celsius_temp * 9.0 / 5.0) + 32.0;

    cout << "\nTemperature in Fahrenheit is: " << fahrenheit_temp << " F" << endl;
    return 0;
}