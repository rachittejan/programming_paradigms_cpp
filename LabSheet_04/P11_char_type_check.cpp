#include <iostream>
#include <cctype> // Required for isupper, islower, isdigit
using namespace std;

int main() {
    char input_char;

    cout << "Enter a character: ";
    cin >> input_char;

    if (isupper(input_char)) {
        cout << input_char << " is an Uppercase Alphabet." << endl;
    } else if (islower(input_char)) {
        cout << input_char << " is a Lowercase Alphabet." << endl;
    } else if (isdigit(input_char)) {
        cout << input_char << " is a Digit." << endl;
    } else {
        // If it's none of the above, it's a special character
        cout << input_char << " is a Special Character." << endl;
    }
    return 0;
}