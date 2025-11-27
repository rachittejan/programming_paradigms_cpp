#include <iostream>
using namespace std;

int main() {
    const int SIZE = 7;
    int data_array[SIZE] = {1, 5, 8, 12, 15, 20, 25};
    int search_number;
    bool is_present = false; 

    cout << "Enter the number to check: ";
    cin >> search_number;

    // Linear Search for presence check
    for (int i = 0; i < SIZE; ++i) {
        if (data_array[i] == search_number) {
            is_present = true;
            break; // Stop immediately if found
        }
    }

    if (is_present) {
        cout << "The number " << search_number << " IS present in the array." << endl;
    } else {
        cout << "The number " << search_number << " is NOT present in the array." << endl;
    }
    return 0;
}