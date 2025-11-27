#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int max_number;

    cout << "Enter the upper limit (N): ";
    cin >> max_number;

    cout << "\nPrime numbers between 1 and " << max_number << " are:" << endl;

    // Outer loop iterates through every number from 2 up to N
    for (int current_num = 2; current_num <= max_number; ++current_num) {
        bool is_prime = true;
        
        // Inner loop checks for factors from 2 up to the square root of current_num
        for (int i = 2; i <= sqrt(current_num); ++i) {
            if (current_num % i == 0) {
                is_prime = false;
                break; 
            }
        }
        
        if (is_prime) {
            cout << current_num << " ";
        }
    }
    cout << endl;
    return 0;
}