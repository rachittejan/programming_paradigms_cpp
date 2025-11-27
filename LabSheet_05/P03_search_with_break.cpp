#include <iostream>
using namespace std;

int main() {
    int data_array[] = {15, 23, 8, 45, 9, 31, 7};
    int array_size = sizeof(data_array) / sizeof(data_array[0]);
    int search_target = 45;
    bool is_found = false;
    
    cout << "Searching for target " << search_target << " in the array..." << endl;

    for (int i = 0; i < array_size; ++i) {
        if (data_array[i] == search_target) {
            is_found = true;
            cout << "Target found at index: " << i << endl;
            break; // Stop searching once found
        }
    }
    
    if (!is_found) {
        cout << "Target not found in the sequence." << endl;
    }
    return 0;
}