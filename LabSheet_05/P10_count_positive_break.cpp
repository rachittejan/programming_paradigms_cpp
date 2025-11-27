#include <iostream>
using namespace std;

int main() {
    int current_number;
    int positive_count = 0;

    cout << "Enter integers (enter 0 to stop):" << endl;
    
    // Loop continues indefinitely until a break is hit
    while (true) {
        cout << "Enter number: ";
        cin >> current_number;

        // Check for termination condition
        if (current_number == 0) {
            break; // Stop the loop
        }

        // Check if the number is positive (excluding 0)
        if (current_number > 0) {
            positive_count++;
        }
        // Note: Negative numbers are ignored and the loop continues
    }

    cout << "\nTotal positive numbers entered: " << positive_count << endl;
    return 0;
}