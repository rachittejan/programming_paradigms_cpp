#include <iostream>
#include <cmath> // Required for pow() function
using namespace std;

int main() {
    // Variables for Compound Interest calculation
    double principal, rate, time, frequency;
    double amount, compound_interest;

    cout << "Enter Principal Amount (P): ";
    cin >> principal;
    cout << "Enter Annual Rate (R, as a decimal, e.g., 0.05 for 5%): ";
    cin >> rate;
    cout << "Enter Time in Years (T): ";
    cin >> time;
    cout << "Enter Compounding Frequency (n, e.g., 4 for quarterly): ";
    cin >> frequency;

    // Compound Interest formula: A = P * (1 + R/n)^(n*t)
    // Precedence ensures R/n, then 1 + R/n, then power, then multiplication by P
    amount = principal * pow((1 + rate / frequency), (frequency * time));
    
    // CI = Amount - Principal
    compound_interest = amount - principal;

    cout << "\nTotal Amount (A): " << amount << endl;
    cout << "Compound Interest (CI): " << compound_interest << endl;
    return 0;
}