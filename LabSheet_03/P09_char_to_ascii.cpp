#include <iostream>
using namespace std;

int main() {
    char input_character;

    cout << "Enter a single character: ";
    cin >> input_character;

    // To display the ASCII value (integer equivalent) of a character,
    // we cast the character variable to an integer type.
    int ascii_value = (int)input_character;

    cout << "\nThe ASCII value of '" << input_character << "' is: " << ascii_value << endl;
    return 0;
}