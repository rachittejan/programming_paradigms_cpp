#include <iostream>
using namespace std;

const int ROWS = 2;
const int COLS = 2;

// Function to find the sum of two matrices
void sumMatrices(const int A[ROWS][COLS], const int B[ROWS][COLS], int C[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            // C[i][j] = A[i][j] + B[i][j]
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Helper function to display a matrix
void displayMatrix(const int M[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int matrix_A[ROWS][COLS] = {{1, 2}, {3, 4}};
    int matrix_B[ROWS][COLS] = {{5, 6}, {7, 8}};
    int result_matrix[ROWS][COLS];

    sumMatrices(matrix_A, matrix_B, result_matrix);

    cout << "Matrix A + Matrix B Result:" << endl;
    displayMatrix(result_matrix);

    return 0;
}