#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int input_array[SIZE];
    int even_count = 0;
    int odd_count = 0;

    cout << "Enter 10 numbers:" << endl;
    // Input 10 numbers
    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> input_array[i];
    }
    
    // Count even and odd numbers
    for (int i = 0; i < SIZE; ++i) {
        if (input_array[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    cout << "\nTotal Even Numbers: " << even_count << endl;
    cout << "Total Odd Numbers: " << odd_count << endl;
    return 0;
}