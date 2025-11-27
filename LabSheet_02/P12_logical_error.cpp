#include <iostream>
using namespace std;

int main() {
    float rect_length = 5.0f;
    float rect_width = 4.0f;
    float calculated_area;

    // LOGICAL ERROR: Using the formula for Perimeter instead of Area (Length + Width)
    // The program compiles and runs, but the output is incorrect.
    calculated_area = rect_length + rect_width; 

    // Expected Output: 20.0, Actual Output: 9.0
    cout << "Area of rectangle: " << calculated_area << endl; 
    
    return 0;
}