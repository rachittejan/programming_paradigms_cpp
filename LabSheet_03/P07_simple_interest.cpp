#include <iostream>
using namespace std;

int main() {
    // Use float for precise calculations
    float principal_amount, rate_of_interest, time_years;
    float simple_interest_result;

    cout << "Enter Principal Amount (P): ";
    cin >> principal_amount;
    cout << "Enter Rate of Interest (R): ";
    cin >> rate_of_interest;
    cout << "Enter Time in Years (T): ";
    cin >> time_years;

    // Simple Interest formula: SI = (P * R * T) / 100
    simple_interest_result = (principal_amount * rate_of_interest * time_years) / 100.0f;

    cout << "\nSimple Interest (SI) is: " << simple_interest_result << endl;
    return 0;
}