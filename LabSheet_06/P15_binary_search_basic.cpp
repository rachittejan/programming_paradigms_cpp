#include <iostream>
using namespace std;

int main() {
    // NOTE: Binary search REQUIRES the array to be sorted.
    const int SIZE = 8;
    int sorted_array[SIZE] = {10, 20, 30, 40, 50, 60, 70, 80}; 
    int search_target = 60;
    
    int low = 0;
    int high = SIZE - 1;
    int mid;
    int found_index = -1;

    cout << "Searching for " << search_target << " in the sorted array..." << endl;

    while (low <= high) {
        mid = low + (high - low) / 2; // Calculate middle index

        if (sorted_array[mid] == search_target) {
            found_index = mid;
            break; // Element found
        } else if (sorted_array[mid] < search_target) {
            low = mid + 1; // Target is in the upper half
        } else {
            high = mid - 1; // Target is in the lower half
        }
    }

    if (found_index != -1) {
        cout << "Element found at index: " << found_index << endl; // Index 5
    } else {
        cout << "Element not found." << endl;
    }
    return 0;
}