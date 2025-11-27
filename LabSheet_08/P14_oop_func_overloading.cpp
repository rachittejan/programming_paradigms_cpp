#include <iostream>
using namespace std;

// Demonstrate Function Overloading (Compile-time Polymorphism)
class Calculator {
public:
    // Overloaded function 1: Adds two integers
    int add(int a, int b) {
        cout << "Using Integer Add: ";
        return a + b;
    }

    // Overloaded function 2: Adds two doubles (same name, different parameter types)
    double add(double a, double b) {
        cout << "Using Double Add: ";
        return a + b;
    }
};

int main() {
    Calculator calc;
    
    int result_int = calc.add(10, 5);      // Calls the int version
    cout << result_int << endl;

    double result_double = calc.add(10.5, 5.2); // Calls the double version
    cout << result_double << endl;
    
    // The compiler determines which function to call based on the argument types.
    
    return 0;
}