#include <iostream>
#include <cstring>
using namespace std;

// Function to count the number of words in a string
int countWords(const char* str) {
    if (str == nullptr || str[0] == '\0') {
        return 0;
    }
    
    int word_count = 1; // Start at 1 for the first word
    int len = strlen(str);

    for (int i = 0; i < len; ++i) {
        // Increment count when a space is found (assuming no leading/trailing spaces)
        if (str[i] == ' ') {
            word_count++;
        }
    }
    return word_count;
}

int main() {
    char sentence[] = "This is a test sentence for the C++ function.";

    // Call the function
    int count = countWords(sentence);

    cout << "The string is: \"" << sentence << "\"" << endl;
    cout << "Number of words in the string: " << count << endl;
    return 0;
}