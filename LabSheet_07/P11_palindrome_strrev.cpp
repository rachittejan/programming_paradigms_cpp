#include <iostream>
#include <cstring>
using namespace std;

// Manual implementation of strrev (reused from P10)
void manual_strrev(char str[]) {
    int len = strlen(str);
    int start = 0;
    int end = len - 1;
    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

int main() {
    char original_string[100];
    char reversed_string[100];

    cout << "Enter a string to check for Palindrome: ";
    cin.getline(original_string, 100);

    // 1. Copy the original string to a new array
    strcpy(reversed_string, original_string);

    // 2. Reverse the copied string
    manual_strrev(reversed_string); [cite_start]// [cite: 81]

    // 3. Compare the original and the reversed copy
    if (strcmp(original_string, reversed_string) == 0) {
        cout << "\nThe string is a Palindrome." << endl;
    } else {
        cout << "\nThe string is NOT a Palindrome." << endl;
    }
    return 0;
}