#include <iostream>
using namespace std;

int main() {
    const int SIZE = 6;
    int data_array[SIZE] = {64, 34, 25, 12, 22, 11};
    int temp_var;

    cout << "Original array: 64 34 25 12 22 11" << endl;

    // Bubble Sort Algorithm (Descending Order: largest element "bubbles up")
    for (int i = 0; i < SIZE - 1; ++i) {
        for (int j = 0; j < SIZE - 1 - i; ++j) {
            // Compare adjacent elements: if current < next, swap them
            if (data_array[j] < data_array[j + 1]) {
                // Perform the swap
                temp_var = data_array[j];
                data_array[j] = data_array[j + 1];
                data_array[j + 1] = temp_var;
            }
        }
    }

    cout << "Array after Bubble Sort (Descending): ";
    for (int i = 0; i < SIZE; ++i) {
        cout << data_array[i] << " "; // Output: 64 34 25 22 12 11
    }
    cout << endl;
    return 0;
}