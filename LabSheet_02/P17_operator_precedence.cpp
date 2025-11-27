#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5, c = 2;
    int result_with_wrong_precedence;

    // Example of relying on incorrect precedence
    // Multiplication (*) has higher precedence than Addition (+)
    // Order: 10 + (5 * 2) = 20 (Correct C++ behavior)
    // If we wanted (10+5)*2 = 30, we need parentheses.
    result_with_wrong_precedence = a + b * c; 

    cout << "Result (a + b * c): " << result_with_wrong_precedence << endl; // Prints 20
    
    // To get the intended order (10+5)*2:
    int correct_result = (a + b) * c;
    cout << "Correct Result ((a + b) * c): " << correct_result << endl; // Prints 30
    
    return 0;
}