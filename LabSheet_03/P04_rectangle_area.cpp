#include <iostream>
using namespace std;

int main() {
    float rect_length, rect_breadth;
    float area_result;

    cout << "Enter the length of the rectangle: ";
    cin >> rect_length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> rect_breadth;

    // Area formula: Area = Length * Breadth
    area_result = rect_length * rect_breadth;

    cout << "The area of the rectangle is: " << area_result << endl;
    return 0;
}