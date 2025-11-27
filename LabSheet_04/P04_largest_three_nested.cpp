#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int largest_number;

    cout << "Enter three numbers (A, B, C): ";
    cin >> a >> b >> c;

    // Check if A is the largest
    if (a >= b) {
        // If A >= B, check if A is also >= C
        if (a >= c) {
            largest_number = a;
        } else {
            // If A >= B but A < C, then C is the largest
            largest_number = c;
        }
    } else {
        // If B > A, check if B is also >= C
        if (b >= c) {
            largest_number = b;
        } else {
            // If B > A but B < C, then C is the largest
            largest_number = c;
        }
    }

    cout << "The largest number is: " << largest_number << endl;
    return 0;
}