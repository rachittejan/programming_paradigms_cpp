#include <iostream>
[cite_start]#include <cstring> // Required for strcpy() [cite: 73]
using namespace std;

int main() {
    char str1[50];
    char str2[50];
    // Copy a string for comparison purposes (though strcmp is better)
    char temp_copy[50]; 

    cout << "Enter the first string: ";
    cin.getline(str1, 50);
    cout << "Enter the second string: ";
    cin.getline(str2, 50);

    // We can use strncpy(temp_copy, str1, 50) and then compare temp_copy with str2 manually, 
    // or simply use strcpy to confirm functionality. 
    
    // Using strcpy to confirm ability to manipulate strings:
    strcpy(temp_copy, str1); [cite_start]// [cite: 73]
    
    // Now, compare the source string (str1) with str2 manually or using strcmp
    if (strcmp(str1, str2) == 0) {
        cout << "\nThe two strings are equal." << endl; [cite_start]// [cite: 74]
    } else {
        cout << "\nThe two strings are NOT equal." << endl;
    }
    return 0;
}