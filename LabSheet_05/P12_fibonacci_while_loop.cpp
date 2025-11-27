#include <iostream>
using namespace std;

int main() {
    int max_terms;
    int term1 = 0, term2 = 1, next_term;
    int count = 1;

    cout << "Enter the number of terms for the Fibonacci series: ";
    cin >> max_terms;

    cout << "Fibonacci Series: ";

    // Handle initial terms (0 and 1) separately
    while (count <= max_terms) {
        if (count == 1) {
            cout << term1;
        } else if (count == 2) {
            cout << ", " << term2;
        } else {
            next_term = term1 + term2;
            cout << ", " << next_term;
            
            // Update terms
            term1 = term2;
            term2 = next_term;
        }
        count++;
    }
    cout << endl;
    return 0;
}