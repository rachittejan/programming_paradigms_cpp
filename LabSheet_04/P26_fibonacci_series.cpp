#include <iostream>
using namespace std;

int main() {
    int max_terms;
    int term1 = 0, term2 = 1, next_term;

    cout << "Enter the number of terms for the Fibonacci series: ";
    cin >> max_terms;

    cout << "Fibonacci Series: ";

    if (max_terms >= 1) {
        cout << term1;
    }
    if (max_terms >= 2) {
        cout << ", " << term2;
    }

    // Loop starts from the 3rd term (i=3)
    for (int i = 3; i <= max_terms; ++i) {
        next_term = term1 + term2;
        cout << ", " << next_term;
        
        // Update terms for the next iteration
        term1 = term2;
        term2 = next_term;
    }
    cout << endl;
    return 0;
}