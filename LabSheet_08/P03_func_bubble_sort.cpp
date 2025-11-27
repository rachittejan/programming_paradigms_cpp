#include <iostream>
using namespace std;

// Function to apply Bubble Sort on an array (Ascending order)
void bubbleSort(int arr[], int size) {
    int temp_var;
    // Outer loop for passes
    for (int i = 0; i < size - 1; ++i) {
        // Inner loop for comparisons and swaps
        for (int j = 0; j < size - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp_var = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp_var;
            }
        }
    }
}

// Helper function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int data_array[] = {64, 34, 25, 12, 22, 11, 90};
    int array_size = sizeof(data_array) / sizeof(data_array[0]);

    cout << "Original array: ";
    printArray(data_array, array_size);

    // Call the function to sort the array
    bubbleSort(data_array, array_size);

    cout << "Array after Bubble Sort: ";
    printArray(data_array, array_size);
    return 0;
}