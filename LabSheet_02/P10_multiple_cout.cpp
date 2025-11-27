#include <iostream>
using namespace std;

int main() {
    // Demonstrate multiple values displayed using a single cout statement
    int val1 = 10;
    string text = "Result: ";
    
    cout << text << val1 << " + " << (val1 + 5) << " = " << (val1 + 15) << endl;
    
    // Output: Result: 10 + 15 = 25
    return 0;
}