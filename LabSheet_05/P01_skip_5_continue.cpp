#include <iostream>
using namespace std;

int main() {
    cout << "Numbers from 1 to 10, skipping 5:" << endl;
    
    for (int i = 1; i <= 10; ++i) {
        // 'continue' skips the rest of the loop body for the current iteration
        if (i == 5) {
            continue; 
        }
        cout << i << " ";
    }
    cout << endl;
    return 0;
}