#include <iostream>
using namespace std;

int main() {
    // Define rows and columns
    const int ROWS = 3;
    const int COLS = 4;
    int matrix[ROWS][COLS];

    cout << "--- Input Matrix Elements (" << ROWS << "x" << COLS << ") ---" << endl;
    // Outer loop for rows
    for (int i = 0; i < ROWS; ++i) {
        // Inner loop for columns
        for (int j = 0; j < COLS; ++j) {
            cout << "Enter element at [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "\n--- Display Matrix ---" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            // Print element followed by a tab or space
            cout << matrix[i][j] << "\t";
        }
        // Print a newline after each row is complete
        cout << endl;
    }
    return 0;
}