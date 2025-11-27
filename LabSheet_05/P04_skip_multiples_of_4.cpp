#include <iostream>
using namespace std;

int main() {
    cout << "Even numbers from 1 to 20, skipping multiples of 4:" << endl;
    
    for (int i = 2; i <= 20; i += 2) {
        // Check if the even number is also a multiple of 4
        if (i % 4 == 0) {
            continue; // Skip this number (4, 8, 12, 16, 20)
        }
        cout << i << " ";
    }
    cout << endl;
    return 0;
}