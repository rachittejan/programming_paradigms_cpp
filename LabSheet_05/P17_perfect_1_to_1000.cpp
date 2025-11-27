#include <iostream>
using namespace std;

// Function to check if a number is perfect
bool isPerfect(int num) {
    if (num <= 1) return false;
    int sum = 0;
    for (int i = 1; i < num; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    cout << "Perfect numbers between 1 and 1000 are:" << endl;

    for (int i = 1; i <= 1000; ++i) {
        if (isPerfect(i)) {
            cout << i << " "; // The only perfect numbers here are 6 and 28
        }
    }
    cout << endl;
    return 0;
}