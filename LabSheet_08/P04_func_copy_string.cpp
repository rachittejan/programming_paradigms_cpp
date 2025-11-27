#include <iostream>
#include <cstring>
using namespace std;

// Function to copy a string using char pointers (Manual strcpy logic)
void copyString(char* destination, const char* source) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    // Null-terminate the destination string
    destination[i] = '\0';
}

int main() {
    const char source[] = "Function Lab Sheet";
    char destination[50]; // Ensure buffer size is sufficient

    // Using the function to copy the string
    copyString(destination, source); 

    cout << "Source string: " << source << endl;
    cout << "Copied string (Destination): " << destination << endl;
    return 0;
}