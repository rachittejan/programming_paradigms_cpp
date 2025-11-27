#include <iostream>
[cite_start]#include <cstring> // Required for strlen() [cite: 71]
#include <cctype>  // Required for tolower()
using namespace std;

int main() {
    char input_string[100];
    int vowel_count = 0;
    
    cout << "Enter a string: ";
    cin.getline(input_string, 100); 

    int length = strlen(input_string); [cite_start]// [cite: 71]

    for (int i = 0; i < length; ++i) {
        char current_char = tolower(input_string[i]); // Convert to lowercase for uniform check
        
        // Check if the character is a vowel
        if (current_char == 'a' || current_char == 'e' || 
            current_char == 'i' || current_char == 'o' || 
            current_char == 'u') {
            vowel_count++;
        }
    }

    cout << "The total number of vowels in the string is: " << vowel_count << endl;
    return 0;
}