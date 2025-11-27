#include <iostream>
using namespace std;

int main() {
    int num1 = 12;
    int num2 = 8;
    int intended_sum;

    // LOGICAL ERROR: The user wanted to ADD (num1 + num2) but mistakenly used 
    // the multiplication operator (*). The program runs without compiler errors.
    intended_sum = num1 * num2; 

    cout << "Intended Sum (Actual Product): " << intended_sum << endl; // Prints 96 instead of 20
    return 0;
}