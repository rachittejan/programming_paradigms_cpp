#include <iostream>
[cite_start]#include <cstring> // Required for strcat() [cite: 75]
using namespace std;

int main() {
    // NOTE: destination string MUST be large enough to hold the final concatenated string
    char destination[100] = "Hello, ";
    char source[] = "World!";

    cout << "Destination before concatenation: " << destination << endl; // "Hello, "

    // strcat(destination, source) appends the source string to the destination string.
    strcat(destination, source); [cite_start]// [cite: 75]

    cout << "Destination after strcat: " << destination << endl; // "Hello, World!"
    return 0;
}