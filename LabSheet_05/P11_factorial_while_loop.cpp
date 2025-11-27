#include <iostream>
using namespace std;

int main() {
    int input_number;
    long long factorial_result = 1; 
    int counter;

    cout << "Enter a non-negative integer for factorial: ";
    cin >> input_number;

    if (input_number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0;
    }
    
    counter = input_number;

    // Use while loop for calculation
    while (counter > 0) {
        factorial_result *= counter; 
        counter--;
    }

    cout << "Factorial of " << input_number << " is: " << factorial_result << endl;
    return 0;
}