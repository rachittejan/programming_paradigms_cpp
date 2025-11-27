#include <iostream>
using namespace std;

int main() {
    cout << "Odd numbers from 1 to 50:" << endl;

    // Start at 1 (first odd number) and increment by 2
    for (int i = 1; i <= 50; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}