#include <iostream>
#include <string>
using namespace std;

int main() {
    string user_input_string;

    cout << "Enter a full sentence or string: ";
    // Use getline to read the entire line, including spaces
    getline(cin, user_input_string);

    cout << "\nYou entered the string: " << user_input_string << endl;
    return 0;
}