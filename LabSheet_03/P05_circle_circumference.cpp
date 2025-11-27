#include <iostream>
using namespace std;

// Define PI as a constant float
const float PI = 3.14159f;

int main() {
    float circle_radius;
    float circumference_result;

    cout << "Enter the radius of the circle: ";
    cin >> circle_radius;

    // Circumference formula: C = 2 * PI * r
    circumference_result = 2 * PI * circle_radius;

    cout << "The circumference of the circle is: " << circumference_result << endl;
    return 0;
}