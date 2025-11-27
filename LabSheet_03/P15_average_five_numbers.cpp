#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3, n4, n5;
    float sum_of_numbers;
    float average_result;

    cout << "Enter five numbers:" << endl;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    // Calculate the sum of the five numbers
    sum_of_numbers = n1 + n2 + n3 + n4 + n5;

    // Calculate the average (sum divided by the count, 5.0f for float division)
    average_result = sum_of_numbers / 5.0f;

    cout << "\nSum of the numbers: " << sum_of_numbers << endl;
    cout << "Average of the numbers: " << average_result << endl;
    return 0;
}