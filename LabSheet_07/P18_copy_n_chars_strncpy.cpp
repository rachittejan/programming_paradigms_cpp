#include <iostream>
[cite_start]#include <cstring> // Required for strncpy() [cite: 92]
using namespace std;

int main() {
    char source_str[] = "Programming Lab Sheet";
    char destination_str[10]; // Large enough for 5 chars + null terminator
    const int N = 5;

    cout << "Source string: " << source_str << endl;

    // strncpy(destination, source, N) copies exactly N characters.
    // NOTE: strncpy does NOT guarantee a null terminator if N is the full size of destination, 
    // so we must manually add it.
    strncpy(destination_str, source_str, N); [cite_start]// [cite: 92]

    // Ensure null termination for safe printing
    destination_str[N] = '\0'; 

    cout << "First " << N << " characters copied: " << destination_str << endl;
    return 0;
}