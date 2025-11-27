#include <iostream>
using namespace std;

int main() {
    int check_number;

    cout << "Enter a number: ";
    cin >> check_number;

    // Check if the remainder is 0 when divided by 5 AND when divided by 11
    if ((check_number % 5 == 0) && (check_number % 11 == 0)) {
        cout << check_number << " is divisible by both 5 and 11." << endl;
    } else {
        cout << check_number << " is NOT divisible by both 5 and 11." << endl;
    }
    return 0;
}