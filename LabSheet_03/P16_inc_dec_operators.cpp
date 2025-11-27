#include <iostream>
using namespace std;

int main() {
    int num_a = 5;
    int num_b = 5;

    cout << "Initial Value (A): " << num_a << endl;

    // POST-INCREMENT: Use the value, then increment
    // 'result_post' gets 5, then 'num_a' becomes 6
    int result_post = num_a++;
    cout << "\nPost-Increment (num_a++):" << endl;
    cout << "Result (uses original value): " << result_post << endl; // 5
    cout << "Updated num_a: " << num_a << endl; // 6

    // PRE-DECREMENT: Decrement the value, then use it
    // 'num_b' becomes 4, then 'result_pre' gets 4
    int result_pre = --num_b;
    cout << "\nPre-Decrement (--num_b):" << endl;
    cout << "Result (uses updated value): " << result_pre << endl; // 4
    cout << "Updated num_b: " << num_b << endl; // 4

    return 0;
}