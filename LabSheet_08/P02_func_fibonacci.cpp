#include <iostream>
using namespace std;

// Function to print the Fibonacci series up to a given number of terms
void printFibonacci(int num_terms) {
    if (num_terms <= 0) {
        return;
    }
    
    int t1 = 0, t2 = 1, next_term;

    cout << "Fibonacci Series: ";

    if (num_terms >= 1) {
        cout << t1;
    }
    if (num_terms >= 2) {
        cout << ", " << t2;
    }

    for (int i = 3; i <= num_terms; ++i) {
        next_term = t1 + t2;
        cout << ", " << next_term;
        t1 = t2;
        t2 = next_term;
    }
    cout << endl;
}

int main() {
    int terms;
    cout << "Enter the number of terms for the series: ";
    cin >> terms;

    printFibonacci(terms);

    return 0;
}