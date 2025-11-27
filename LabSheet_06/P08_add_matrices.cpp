#include <iostream>
using namespace std;

int main() {
    // Matrices must have the same dimensions for addition/subtraction
    const int ROWS = 2;
    const int COLS = 3;

    int matrix_A[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}};
    int matrix_B[ROWS][COLS] = {{7, 8, 9}, {1, 2, 3}};
    int result_matrix[ROWS][COLS];

    // Addition Logic: Result[i][j] = A[i][j] + B[i][j]
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            result_matrix[i][j] = matrix_A[i][j] + matrix_B[i][j];
        }
    }

    cout << "--- Matrix A + Matrix B Result ---" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << result_matrix[i][j] << "\t";
        }
        cout << endl; // Expected Output: {8 10 12}, {5 7 9}
    }
    return 0;
}