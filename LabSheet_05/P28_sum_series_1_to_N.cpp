#include <iostream>
using namespace std;

int main() {
    int N;
    long long sum_result = 0; 

    cout << "Enter the value of N: ";
    cin >> N;

    cout << "\nCalculating sum of series: 1 + 2 + 3 + ... + " << N << endl; [cite: 237]
    
    // Loop from 1 up to N
    for (int i = 1; i <= N; ++i) {
        sum_result += i; 
    }

    cout << "The sum of the series is: " << sum_result << endl;
    return 0;
}