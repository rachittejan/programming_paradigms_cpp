#include <iostream>
[cite_start]#include <cstring> // Required for strstr() [cite: 85]
using namespace std;

int main() {
    char container_string[100] = "The quick brown fox jumps.";
    char check_string[50] = "fox";

    cout << "Container string: " << container_string << endl;
    cout << "Check string: " << check_string << endl;

    // strstr returns a non-NULL pointer if the check string is found
    [cite_start]if (strstr(container_string, check_string) != NULL) { // [cite: 85]
        cout << "\nThe string '" << check_string << "' IS present in the container string." << endl;
    } else {
        cout << "\nThe string '" << check_string << "' is NOT present." << endl;
    }
    return 0;
}