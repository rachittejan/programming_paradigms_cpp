#include <iostream>
using namespace std;

int main() {
    // LOGICAL ERROR: A variable meant to be used as a counter is initialized to 10
    // instead of the correct starting value of 0.
    int sum_accumulator = 10; 
    int number_to_add = 5;

    sum_accumulator = sum_accumulator + number_to_add;

    // Output is 15, but should have been 5 if initialized correctly to 0.
    cout << "Result with wrong initialization: " << sum_accumulator << endl; 
    return 0;
}