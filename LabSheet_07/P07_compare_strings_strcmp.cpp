#include <iostream>
[cite_start]#include <cstring> // Required for strcmp() [cite: 77]
using namespace std;

int main() {
    char str_a[50];
    char str_b[50];
    int comparison_result;

    cout << "Enter the first string: ";
    cin.getline(str_a, 50);
    cout << "Enter the second string: ";
    cin.getline(str_b, 50);

    // strcmp(str1, str2) compares strings lexicographically (alphabetically)
    comparison_result = strcmp(str_a, str_b); [cite_start]// [cite: 77]

    cout << "\nstrcmp result is: " << comparison_result << endl;

    if (comparison_result == 0) {
        cout << "The strings are identical." << endl;
    } else if (comparison_result < 0) {
        cout << "String 1 comes before String 2 alphabetically." << endl;
    } else { // comparison_result > 0
        cout << "String 1 comes after String 2 alphabetically." << endl;
    }
    return 0;
}