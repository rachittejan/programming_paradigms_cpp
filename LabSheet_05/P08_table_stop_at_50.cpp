#include <iostream>
using namespace std;

int main() {
    int table_number;

    cout << "Enter the number for the multiplication table: ";
    cin >> table_number;

    cout << "\nMultiplication Table (stopping when product > 50):" << endl;
    
    for (int i = 1; i <= 100; ++i) {
        int product = table_number * i;
        
        if (product > 50) {
            break; // Stop the table generation
        }
        
        cout << table_number << " x " << i << " = " << product << endl;
    }
    return 0;
}