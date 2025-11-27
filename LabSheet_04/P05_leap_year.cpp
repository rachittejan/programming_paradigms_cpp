#include <iostream>
using namespace std;

int main() {
    int input_year;

    cout << "Enter a year: ";
    cin >> input_year;

    // Leap year conditions:
    // 1. Divisible by 400 (e.g., 2000)
    // OR
    // 2. Divisible by 4 AND NOT divisible by 100 (e.g., 2024)
    if ((input_year % 400 == 0) || (input_year % 4 == 0 && input_year % 100 != 0)) {
        cout << input_year << " is a Leap Year." << endl;
    } else {
        cout << input_year << " is NOT a Leap Year." << endl;
    }
    return 0;
}