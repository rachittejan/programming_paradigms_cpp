#include <iostream>
using namespace std;

int main() {
    int table_number;

    cout << "Enter the number for which you want the multiplication table: ";
    cin >> table_number;

    cout << "\nMultiplication Table for " << table_number << ":" << endl;
    
    // Generate table up to 10
    for (int i = 1; i <= 10; ++i) {
        int product = table_number * i;
        cout << table_number << " x " << i << " = " << product << endl;
    }
    return 0;
}