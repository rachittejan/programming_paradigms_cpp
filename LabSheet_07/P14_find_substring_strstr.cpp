#include <iostream>
[cite_start]#include <cstring> // Required for strstr() [cite: 84]
using namespace std;

int main() {
    char main_string[100] = "This is a C++ programming lab.";
    char sub_string[] = "C++";

    cout << "Main string: " << main_string << endl;
    cout << "Substring to find: " << sub_string << endl;

    // strstr(main_str, sub_str) returns a pointer to the FIRST occurrence of the substring, or NULL.
    char* pointer_to_substring = strstr(main_string, sub_string); [cite_start]// [cite: 84]

    if (pointer_to_substring != NULL) {
        // Calculate the starting index
        int index = pointer_to_substring - main_string;
        cout << "\nSubstring found starting at index: " << index << endl;
        cout << "Remaining string from that point: " << pointer_to_substring << endl;
    } else {
        cout << "\nSubstring not found in the main string." << endl;
    }
    return 0;
}