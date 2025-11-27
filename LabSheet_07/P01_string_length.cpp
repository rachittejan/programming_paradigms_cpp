#include <iostream>
#include <cstring> // Required for strlen()
using namespace std;

int main() {
    // C-style string (character array)
    char input_string[100]; 
    int string_length;

    cout << "Enter a string (up to 99 characters): ";
    // Use cin.getline() to read spaces in the string
    cin.getline(input_string, 100); 

    // strlen() returns the length of the string, excluding the null terminator ('\0')
    string_length = strlen(input_string); [cite_start]// [cite: 70]

    cout << "\nThe length of the entered string is: " << string_length << endl;
    return 0;
}