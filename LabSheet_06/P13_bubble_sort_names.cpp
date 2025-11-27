#include <iostream>
#include <string>
#include <cstring> // Required for strcmp and strcpy
using namespace std;

int main() {
    const int SIZE = 4;
    // Array of C-style strings (char arrays) to use with cstring functions
    char names[SIZE][20] = {"Zoe", "Alice", "Charlie", "Bob"};
    char temp_name[20]; // Temporary storage for swapping

    cout << "Original names: Zoe Alice Charlie Bob" << endl;

    // Bubble Sort on strings
    for (int i = 0; i < SIZE - 1; ++i) {
        for (int j = 0; j < SIZE - 1 - i; ++j) {
            // strcmp() compares strings lexicographically. 
            // If result > 0, names[j] comes AFTER names[j+1] alphabetically, so swap is needed.
            if (strcmp(names[j], names[j + 1]) > 0) {
                // Use strcpy() to copy strings, simple assignment (=) does not work for char arrays
                strcpy(temp_name, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp_name);
            }
        }
    }

    cout << "Names after Bubble Sort (Ascending): ";
    for (int i = 0; i < SIZE; ++i) {
        cout << names[i] << " "; // Output: Alice Bob Charlie Zoe
    }
    cout << endl;
    return 0;
}