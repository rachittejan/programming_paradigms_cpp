#include <iostream>
using namespace std;

int main() {
    int side_a, side_b, side_c;

    cout << "Enter the length of side A: ";
    cin >> side_a;
    cout << "Enter the length of side B: ";
    cin >> side_b;
    cout << "Enter the length of side C: ";
    cin >> side_c;

    // Triangle Inequality Theorem: The sum of the lengths of any two sides 
    // must be greater than the length of the third side.
    if ((side_a + side_b > side_c) && 
        (side_a + side_c > side_b) && 
        (side_b + side_c > side_a)) {
        cout << "The given sides can form a valid triangle." << endl;
    } else {
        cout << "The given sides CANNOT form a valid triangle." << endl;
    }
    return 0;
}