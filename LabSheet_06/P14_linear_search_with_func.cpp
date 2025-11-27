#include <iostream>
using namespace std;

// Function to perform Linear Search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    const int SIZE = 7;
    int data_array[SIZE] = {10, 5, 20, 8, 30, 15, 25};
    int search_element;

    cout << "Enter the element to search: ";
    cin >> search_element;

    // Call the function
    int index = linearSearch(data_array, SIZE, search_element);

    if (index != -1) {
        cout << "Element " << search_element << " found at index: " << index << endl;
    } else {
        cout << "Element " << search_element << " not found in the array." << endl;
    }
    return 0;
}