#include <iostream>
[cite_start]#include <cstring> // Required for strlen() [cite: 90]
using namespace std;

int main() {
    // Note: This logic assumes words are separated by single spaces and no leading/trailing spaces.
    char input_string[100]; 
    int word_count = 0;
    
    cout << "Enter a sentence: ";
    cin.getline(input_string, 100); 

    int length = strlen(input_string); [cite_start]// [cite: 90]

    // If the string is empty, word count is 0
    if (length > 0) {
        word_count = 1; // Start with 1, assuming the first word exists
    }

    [cite_start]// A word boundary is defined by a space [cite: 90]
    for (int i = 0; i < length; ++i) {
        if (input_string[i] == ' ') {
            word_count++;
        }
    }

    cout << "Number of words: " << word_count << endl;
    return 0;
}