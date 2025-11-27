#include <iostream>
using namespace std;

int main() {
    // Define the size and declare the 1D array
    const int SIZE = 5;
    int data_array[SIZE];

    cout << "--- Input Phase ---" << endl;
    // Input loop
    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter element at index [" << i << "]: ";
        cin >> data_array[i];
    }

    cout << "\n--- Display Phase ---" << endl;
    // Output loop
    cout << "Array elements are: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << data_array[i] << " ";
    }
    cout << endl;
    return 0;
}