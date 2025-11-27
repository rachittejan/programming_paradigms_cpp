#include <iostream>
[cite_start]#include <cstring> // Required for strcpy() [cite: 72]
using namespace std;

int main() {
    char source_string[50];
    char destination_string[50]; // Must be large enough to hold the copy

    cout << "Enter the source string: ";
    cin.getline(source_string, 50);

    // strcpy(destination, source) copies the source string 
    // including the null terminator into the destination.
    strcpy(destination_string, source_string); [cite_start]// [cite: 72]

    cout << "\nSource string: " << source_string << endl;
    cout << "Destination string (copy): " << destination_string << endl;
    return 0;
}