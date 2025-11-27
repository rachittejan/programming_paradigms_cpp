#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the number of digits
int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is Armstrong (generalized)
bool isArmstrong(int num) {
    if (num < 0) return false;
    int n = countDigits(num);
    int temp = num;
    int sum_of_powers = 0;
    int remainder;

    while (temp != 0) {
        remainder = temp % 10;
        sum_of_powers += round(pow(remainder, n));
        temp /= 10;
    }
    return sum_of_powers == num;
}

int main() {
    cout << "Armstrong numbers between 1 and 500 are:" << endl;

    for (int i = 1; i <= 500; ++i) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}