#include <iostream>
[cite_start]#include <cstring> // Required for strchr() [cite: 82]
using namespace std;

int main() {
    char input_string[100] = "programming language";
    char search_char = 'g';
    
    cout << "String: " << input_string << endl;

    // strchr(str, char) returns a pointer to the FIRST occurrence of the character, or NULL if not found.
    char* pointer_to_char = strchr(input_string, search_char); [cite_start]// [cite: 82]

    if (pointer_to_char != NULL) {
        // Calculate the index by subtracting the base address of the string
        int index = pointer_to_char - input_string;
        cout << "First occurrence of '" << search_char << "' found at index: " << index << endl;
    } else {
        cout << "Character '" << search_char << "' not found." << endl;
    }
    return 0;
}