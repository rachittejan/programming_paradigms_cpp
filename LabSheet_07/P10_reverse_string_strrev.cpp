#include <iostream>
#include <cstring>
using namespace std;

// NOTE: strrev() is NOT standard C++ and might not be available in all compilers (e.g., GCC/MinGW).
// It is common in older environments like Turbo C++. We use a manual function for compatibility.

// Manual implementation of strrev (if not available)
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
    char input_string[100];

    cout << "Enter a string to reverse: ";
    cin.getline(input_string, 100);

    // Call the manual reverse function (replace with strrev(input_string) if available)
    manual_strrev(input_string); [cite_start]// [cite: 80]

    cout << "Reversed string: " << input_string << endl;
    return 0;
}