#include <iostream>
using namespace std;

// Function to perform Binary Search on a sorted array of integers
int binarySearch(const int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target) {
            return mid; // Element found
        } else if (arr[mid] < target) {
            low = mid + 1; // Search upper half
        } else {
            high = mid - 1; // Search lower half
        }
    }
    return -1; // Element not found
}

int main() {
    const int SIZE = 7;
    // NOTE: Array must be sorted for Binary Search
    int sorted_array[SIZE] = {10, 20, 30, 40, 50, 60, 70}; 
    int search_target;
    
    cout << "Enter the element to search: ";
    cin >> search_target;
    
    int index = binarySearch(sorted_array, SIZE, search_target);

    if (index != -1) {
        cout << "Element " << search_target << " found at index: " << index << endl;
    } else {
        cout << "Element " << search_target << " not found." << endl;
    }
    return 0;
}