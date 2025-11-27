#include <iostream>
using namespace std;

int main() {
    int my_variable = 10;
    
    // SYNTAX ERROR: Redeclaration of 'my_variable' in the same scope.
    // The compiler will report that 'my_variable' was already defined.
    int my_variable = 20; 
    
    cout << "Value: " << my_variable << endl; 
    return 0;
}