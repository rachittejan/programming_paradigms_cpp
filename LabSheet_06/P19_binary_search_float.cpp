#include <iostream>
using namespace std;

// Function version for Binary Search on floating-point numbers
int binarySearchFloat(float arr[], int size, float target) {
    int low = 0;
    int high = size - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        // Direct comparison for floats is generally acceptable in simple lab settings
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    const int SIZE = 7;
    // NOTE: Floats can have precision issues, but for fixed values, this works.
    float sorted_array[SIZE] = {1.5f, 5.0f, 10.5f, 15.0f, 20.5f, 25.0f, 30.5f}; 
    float search_target;
    
    cout << "Enter the float element to search (Array is pre-sorted): ";
    cin >> search_target;
    
    int index = binarySearchFloat(sorted_array, SIZE, search_target);

    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found." << endl;
    }
    return 0;
}