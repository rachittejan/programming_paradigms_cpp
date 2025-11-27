#include <iostream>
using namespace std;

int main() {
    const int SIZE = 6;
    int data_array[SIZE] = {5, 12, 8, 45, 9, 21};
    int search_element;
    int found_index = -1; // Use -1 to indicate not found

    cout << "Enter the element to search: ";
    cin >> search_element;

    // Linear Search: Check every element one by one
    for (int i = 0; i < SIZE; ++i) {
        if (data_array[i] == search_element) {
            found_index = i;
            break; // Exit the loop as soon as the element is found
        }
    }

    if (found_index != -1) {
        cout << "Element " << search_element << " found at index: " << found_index << endl;
    } else {
        cout << "Element " << search_element << " not found in the array." << endl;
    }
    return 0;
}