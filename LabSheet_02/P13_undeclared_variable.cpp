#include <iostream>
using namespace std;

int main() {
    int declared_number = 10;
    
    // SYNTAX ERROR: The variable 'undeclared_number' has not been declared.
    // The compiler will report that this variable is undefined.
    cout << "Undeclared value: " << undeclared_number << endl; 
    
    return 0;
}