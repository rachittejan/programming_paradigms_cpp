#include <iostream>
using namespace std;

int main() {
    int numerator = 100;
    int zero_divisor = 0;
    int result;
    
    // RUNTIME/UNDEFINED BEHAVIOR: Dividing by zero is mathematically impossible
    // and leads to undefined behavior or a crash during runtime.
    result = numerator / zero_divisor; 

    cout << "Result: " << result << endl;
    return 0;
}