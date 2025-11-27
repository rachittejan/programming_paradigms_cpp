#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int data_array[SIZE] = {10, 20, 30, 40, 50};
    long long total_sum = 0; // Use long long for safety

    // Calculate sum using a loop
    for (int i = 0; i < SIZE; ++i) {
        total_sum += data_array[i];
    }

    cout << "The sum of all elements in the array is: " << total_sum << endl;
    return 0;
}