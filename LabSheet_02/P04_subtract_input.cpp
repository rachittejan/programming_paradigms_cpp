#include <iostream>
using namespace std;

int main() {
    // Variables for input and result
    int first_number, second_number;
    int difference_result;

    // Get input from the user
    cout << "Enter the first number: ";
    cin >> first_number;
    cout << "Enter the second number: ";
    cin >> second_number;

    // Calculate the difference
    difference_result = first_number - second_number;

    // Display the result
    cout << "The difference is: " << difference_result << endl;
    return 0;
}