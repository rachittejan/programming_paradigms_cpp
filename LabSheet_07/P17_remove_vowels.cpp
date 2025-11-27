#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char original_str[100], result_str[100];
    int j = 0; // Index for the result string

    cout << "Enter a string: ";
    cin.getline(original_str, 100);

    for (int i = 0; original_str[i] != '\0'; ++i) {
        char current_char = tolower(original_str[i]);

        // Check if the character is NOT a vowel
        if (!(current_char == 'a' || current_char == 'e' || 
              current_char == 'i' || current_char == 'o' || 
              current_char == 'u')) {
            // Copy non-vowels to the result string
            result_str[j] = original_str[i];
            j++;
        }
    }

    // Null-terminate the new result string
    result_str[j] = '\0'; 

    cout << "String after removing vowels: " << result_str << endl; [cite_start]// [cite: 91]
    return 0;
}