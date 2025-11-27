#include <iostream>
using namespace std;

int main() {
    cout << "--- Multiplication Tables from 1 to 10 ---" << endl;

    // Outer loop selects the table number (1 to 10)
    for (int table = 1; table <= 10; ++table) {
        cout << "\nTable of " << table << ":" << endl;
        
        // Inner loop calculates and prints the products (up to x10)
        for (int i = 1; i <= 10; ++i) {
            cout << table << " x " << i << " = " << (table * i) << endl;
        }
    }
    return 0;
}