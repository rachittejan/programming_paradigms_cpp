#include <iostream>
[cite_start]#include <cstring> // Required for strcmp() [cite: 78]
using namespace std;

int main() {
    char str_x[50];
    char str_y[50];

    cout << "Enter the first string: ";
    cin.getline(str_x, 50);
    cout << "Enter the second string: ";
    cin.getline(str_y, 50);

    // strcmp returns 0 if the strings are identical (case-sensitive)
    [cite_start]if (strcmp(str_x, str_y) == 0) { // [cite: 78]
        cout << "\nThe strings are equal (Case-Sensitive)." << endl;
    } else {
        cout << "\nThe strings are NOT equal (Difference found)." << endl;
    }
    return 0;
}