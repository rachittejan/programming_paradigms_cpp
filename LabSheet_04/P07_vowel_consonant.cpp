#include <iostream>
using namespace std;

int main() {
    char input_char;

    cout << "Enter a single alphabet: ";
    cin >> input_char;

    // Convert character to lowercase for easier checking
    char lower_char = tolower(input_char); 

    // Check if the character is an alphabet first
    if (lower_char >= 'a' && lower_char <= 'z') {
        if (lower_char == 'a' || lower_char == 'e' || lower_char == 'i' || lower_char == 'o' || lower_char == 'u') {
            cout << input_char << " is a Vowel." << endl;
        } else {
            cout << input_char << " is a Consonant." << endl;
        }
    } else {
        cout << input_char << " is not an alphabet." << endl;
    }
    return 0;
}