#include <iostream>
using namespace std;

int main() {
    // Binary search is NOT required here, as the largest element in a sorted array
    // is always at the LAST index.
    const int SIZE = 5;
    int sorted_array[SIZE] = {10, 20, 30, 40, 50}; 
    
    cout << "The sorted array is: ";
    for (int val : sorted_array) {
        cout << val << " ";
    }
    cout << endl;

    // The largest element is always at the last index (SIZE - 1)
    int largest_element = sorted_array[SIZE - 1];

    cout << "The largest element in the sorted array is: " << largest_element << endl;

    // If the instruction required using Binary Search steps anyway (even though inefficient):
    // The Binary Search algorithm's 'high' pointer can be used to find the maximum, 
    // but the direct index access is the only logical way to "search" for the largest.

    return 0;
}