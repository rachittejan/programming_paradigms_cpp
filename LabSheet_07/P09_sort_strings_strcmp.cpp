#include <iostream>
[cite_start]#include <cstring> // Required for strcmp() [cite: 79] and strcpy
using namespace std;

int main() {
    const int SIZE = 5;
    // Array of C-style strings (char arrays)
    char names[SIZE][30] = {"apple", "grape", "banana", "kiwi", "date"};
    char temp_storage[30]; // Temporary storage for swapping

    cout << "Original names: apple grape banana kiwi date" << endl;

    // Bubble Sort algorithm using strcmp() for comparison
    for (int i = 0; i < SIZE - 1; ++i) {
        for (int j = 0; j < SIZE - 1 - i; ++j) {
            // Check if current name (names[j]) comes after the next name (names[j+1])
            [cite_start]if (strcmp(names[j], names[j + 1]) > 0) { // [cite: 79]
                // Swap the strings using strcpy
                strcpy(temp_storage, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp_storage);
            }
        }
    }

    cout << "Names in Alphabetical Order: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << names[i] << " ";
    }
    cout << endl;
    return 0;
}