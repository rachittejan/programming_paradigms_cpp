#include <iostream>
using namespace std;

int main() {
    const int ROWS = 2;
    const int COLS = 3;

    int matrix_A[ROWS][COLS] = {{10, 5, 12}, {3, 9, 6}};
    int matrix_B[ROWS][COLS] = {{1, 2, 3}, {1, 1, 1}};
    int result_matrix[ROWS][COLS];

    // Subtraction Logic: Result[i][j] = A[i][j] - B[i][j]
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            result_matrix[i][j] = matrix_A[i][j] - matrix_B[i][j];
        }
    }

    cout << "--- Matrix A - Matrix B Result ---" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << result_matrix[i][j] << "\t";
        }
        cout << endl; // Expected Output: {9 3 9}, {2 8 5}
    }
    return 0;
}