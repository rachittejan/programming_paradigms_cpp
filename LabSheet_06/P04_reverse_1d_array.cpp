#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int data_array[SIZE] = {1, 2, 3, 4, 5};
    int temp_var;
    
    int start_index = 0;
    int end_index = SIZE - 1;

    cout << "Original array: 1 2 3 4 5" << endl;

    // Loop to swap elements from opposite ends of the array
    while (start_index < end_index) {
        // Swap elements
        temp_var = data_array[start_index];
        data_array[start_index] = data_array[end_index];
        data_array[end_index] = temp_var;
        
        // Move indices closer to the center
        start_index++;
        end_index--;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << data_array[i] << " "; // Output: 5 4 3 2 1
    }
    cout << endl;
    return 0;
}