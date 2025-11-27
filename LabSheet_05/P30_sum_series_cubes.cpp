#include <iostream>
using namespace std;

int main() {
    int N;
    long long sum_of_cubes = 0; 

    cout << "Enter the value of N: ";
    cin >> N;

    cout << "\nCalculating sum of series: 1^3 + 2^3 + 3^3 + ... + " << N << "^3" << endl; [cite: 239]
    
    // Loop from 1 up to N
    for (int i = 1; i <= N; ++i) {
        // Add the cube of the current number (i * i * i)
        sum_of_cubes += (long long)i * i * i; 
    }

    cout << "The sum of the cubes series is: " << sum_of_cubes << endl;
    return 0;
}