#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int sum_result;

    // Get input from the user
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    // Calculate the sum
    sum_result = num1 + num2;

    // Display the result
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum_result << endl;
    return 0;
}