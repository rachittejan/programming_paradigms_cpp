#include <iostream>
using namespace std;

// Function uses call-by-reference (&) to modify the original variables in main()
void swapByReference(int &num1, int &num2) {
    cout << "--- Inside function (Start) ---" << endl;
    cout << "num1 (ref): " << num1 << ", num2 (ref): " << num2 << endl;
    
    int temp = num1;
    num1 = num2;
    num2 = temp;
    
    cout << "--- Inside function (End) ---" << endl;
    cout << "num1 (ref): " << num1 << ", num2 (ref): " << num2 << endl;
}

int main() {
    int value_A = 100;
    int value_B = 500;

    cout << "Before swap: A = " << value_A << ", B = " << value_B << endl;

    // Call the function, which modifies A and B directly
    swapByReference(value_A, value_B); 

    cout << "After swap: A = " << value_A << ", B = " << value_B << endl;
    return 0;
}