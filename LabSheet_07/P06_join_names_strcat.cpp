#include <iostream>
[cite_start]#include <cstring> // Required for strcat() [cite: 76]
using namespace std;

int main() {
    char first_name[50];
    char last_name[50];
    char full_name[100]; // Ensure this is large enough

    cout << "Enter your first name: ";
    cin.getline(first_name, 50);
    cout << "Enter your last name: ";
    cin.getline(last_name, 50);

    // 1. Copy first name to the result container
    strcpy(full_name, first_name);

    // 2. Add a space separator
    strcat(full_name, " "); 

    // 3. Append the last name
    strcat(full_name, last_name); [cite_start]// [cite: 76]

    cout << "\nJoined Name: " << full_name << endl;
    return 0;
}