#include <iostream>
using namespace std;

// Function version for Binary Search on integers
int binarySearchInt(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    const int SIZE = 10;
    int sorted_array[SIZE] = {1, 10, 20, 35, 42, 58, 60, 75, 81, 99}; 
    int search_target;
    
    cout << "Enter the integer element to search (Array is pre-sorted): ";
    cin >> search_target;
    
    int index = binarySearchInt(sorted_array, SIZE, search_target);

    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found." << endl;
    }
    return 0;
}