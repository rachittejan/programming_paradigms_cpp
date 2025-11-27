#include <iostream>
using namespace std;

int main() {
    int N;
    long long sum_of_squares = 0; 

    cout << "Enter the value of N: ";
    cin >> N;

    cout << "\nCalculating sum of series: 1^2 + 2^2 + 3^2 + ... + " << N << "^2" << endl; [cite: 238]
    
    // Loop from 1 up to N
    for (int i = 1; i <= N; ++i) {
        // Add the square of the current number (i * i)
        sum_of_squares += (long long)i * i; 
    }

    cout << "The sum of the squares series is: " << sum_of_squares << endl;
    return 0;
}