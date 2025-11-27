#include <iostream>
using namespace std;

int main() {
    int current_number;
    int sum_of_valid_numbers = 0;

    cout << "Enter numbers (enter -1 to stop):" << endl;
    
    // Outer infinite loop
    while (true) {
        cout << "Input: ";
        if (!(cin >> current_number)) {
             // Handle non-integer input
             cin.clear();
             cin.ignore(10000, '\n');
             cout << "Invalid input. Skipping..." << endl;
             continue;
        }

        // Check for termination condition
        if (current_number == -1) {
            break; // Stop reading input and exit the loop
        }

        // Check for skipping condition
        if (current_number < 0) {
            cout << "Negative number skipped." << endl;
            continue; // Skip the addition and go to the next iteration
        }

        // Valid positive number
        sum_of_valid_numbers += current_number;
    }

    cout << "\nLoop terminated by -1." << endl;
    cout << "Sum of positive numbers entered: " << sum_of_valid_numbers << endl;
    return 0;
}