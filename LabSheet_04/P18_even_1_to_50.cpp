#include <iostream>
using namespace std;

int main() {
    cout << "Even numbers from 1 to 50:" << endl;

    // Start at 2 (first even number) and increment by 2
    for (int i = 2; i <= 50; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}