#include <iostream>
using namespace std;

int main() {
    // Initialization
    int current_number = 10; 

    cout << "Numbers from 10 to 1 (using while loop):" << endl;

    // Condition: loop as long as current_number is 1 or greater
    while (current_number >= 1) {
        cout << current_number << " ";
        // Update (Decrement)
        current_number--; 
    }
    cout << endl;
    return 0;
}