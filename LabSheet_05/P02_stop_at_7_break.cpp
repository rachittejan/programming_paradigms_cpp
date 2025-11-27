#include <iostream>
using namespace std;

int main() {
    cout << "Numbers from 1 to 10, stopping at 7:" << endl;
    
    for (int i = 1; i <= 10; ++i) {
        // Print the number first
        cout << i << " ";
        
        // 'break' terminates the loop entirely
        if (i == 7) {
            break; 
        }
    }
    cout << endl;
    return 0;
}