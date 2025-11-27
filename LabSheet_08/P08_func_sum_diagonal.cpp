#include <iostream>
using namespace std;

// Assuming a square matrix (ROWS = COLS)
const int SIZE = 3;

// Function to find the sum of the main diagonal numbers
int sumMainDiagonal(const int matrix[SIZE][SIZE]) {
    int diagonal_sum = 0;
    // The main diagonal elements are where the row index equals the column index (i == j)
    for (int i = 0; i < SIZE; ++i) {
        diagonal_sum += matrix[i][i]; 
    }
    return diagonal_sum;
}

int main() {
    int square_matrix[SIZE][SIZE] = {
        {10, 2, 3},
        {4, 50, 6},
        {7, 8, 90}
    };
    
    cout << "Matrix elements:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << square_matrix[i][j] << "\t";
        }
        cout << endl;
    }

    // Call the function
    int sum = sumMainDiagonal(square_matrix);

    cout << "\nSum of the main diagonal elements (10 + 50 + 90) is: " << sum << endl;
    return 0;
}