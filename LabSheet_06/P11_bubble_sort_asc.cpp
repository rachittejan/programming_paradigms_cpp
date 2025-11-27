#include <iostream>
using namespace std;

int main() {
    const int SIZE = 6;
    int data_array[SIZE] = {64, 34, 25, 12, 22, 11};
    int temp_var;

    cout << "Original array: 64 34 25 12 22 11" << endl;

    // Bubble Sort Algorithm (Ascending Order: smallest element "bubbles up")
    // Outer loop controls the number of passes
    for (int i = 0; i < SIZE - 1; ++i) {
        // Inner loop performs the comparisons and swaps
        for (int j = 0; j < SIZE - 1 - i; ++j) {
            // Compare adjacent elements: if current > next, swap them
            if (data_array[j] > data_array[j + 1]) {
                // Perform the swap
                temp_var = data_array[j];
                data_array[j] = data_array[j + 1];
                data_array[j + 1] = temp_var;
            }
        }
    }

    cout << "Array after Bubble Sort (Ascending): ";
    for (int i = 0; i < SIZE; ++i) {
        cout << data_array[i] << " "; // Output: 11 12 22 25 34 64
    }
    cout << endl;
    return 0;
}