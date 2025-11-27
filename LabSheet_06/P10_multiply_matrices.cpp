#include <iostream>
using namespace std;

int main() {
    // Matrix A: R1 x C1 (2x3)
    const int R1 = 2;
    const int C1 = 3;
    // Matrix B: R2 x C2 (3x2). C1 must equal R2 for multiplication.
    const int R2 = 3;
    const int C2 = 2;
    // Result Matrix: R1 x C2 (2x2)
    const int R_RES = R1;
    const int C_RES = C2;

    int matrix_A[R1][C1] = {{1, 2, 3}, {4, 5, 6}};
    int matrix_B[R2][C2] = {{7, 8}, {9, 10}, {11, 12}};
    int result_matrix[R_RES][C_RES] = {0}; // Initialize result matrix to zero

    cout << "--- Matrix A (" << R1 << "x" << C1 << ") * Matrix B (" << R2 << "x" << C2 << ") ---" << endl;

    // Multiplication Logic: Result[i][j] = Sum(A[i][k] * B[k][j]) for k=0 to C1-1 (or R2-1)
    for (int i = 0; i < R_RES; ++i) { // Loop for rows of Result (i)
        for (int j = 0; j < C_RES; ++j) { // Loop for columns of Result (j)
            for (int k = 0; k < C1; ++k) { // Loop for the inner dimension (k)
                result_matrix[i][j] += matrix_A[i][k] * matrix_B[k][j];
            }
        }
    }

    cout << "\n--- Result Matrix (" << R_RES << "x" << C_RES << ") ---" << endl;
    for (int i = 0; i < R_RES; ++i) {
        for (int j = 0; j < C_RES; ++j) {
            cout << result_matrix[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}