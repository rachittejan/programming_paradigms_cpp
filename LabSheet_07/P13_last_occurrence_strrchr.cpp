#include <iostream>
[cite_start]#include <cstring> // Required for strrchr() [cite: 83]
using namespace std;

int main() {
    char input_string[100] = "programming language";
    char search_char = 'g';

    cout << "String: " << input_string << endl;

    // strrchr(str, char) returns a pointer to the LAST occurrence of the character, or NULL.
    char* pointer_to_char = strrchr(input_string, search_char); [cite_start]// [cite: 83]

    if (pointer_to_char != NULL) {
        // Calculate the index
        int index = pointer_to_char - input_string;
        cout << "Last occurrence of '" << search_char << "' found at index: " << index << endl;
    } else {
        cout << "Character '" << search_char << "' not found." << endl;
    }
    return 0;
}