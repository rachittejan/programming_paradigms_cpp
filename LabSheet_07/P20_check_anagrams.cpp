#include <iostream>
#include <cstring>
#include <algorithm> // Required for sort()
using namespace std;

int main() {
    char str1[50], str2[50];

    cout << "Enter the first string: ";
    cin.getline(str1, 50);
    cout << "Enter the second string: ";
    cin.getline(str2, 50);

    // Anagram Check Logic: Two strings are anagrams if they have the same length 
    // AND the same characters (when sorted).
    if (strlen(str1) != strlen(str2)) {
        cout << "\nStrings are NOT anagrams (different lengths)." << endl;
        return 0;
    }

    // Sort both strings alphabetically
    sort(str1, str1 + strlen(str1));
    sort(str2, str2 + strlen(str2));

    // Compare the sorted strings using strcmp()
    [cite_start]if (strcmp(str1, str2) == 0) { // [cite: 94]
        cout << "\nThe strings ARE anagrams." << endl;
    } else {
        cout << "\nThe strings are NOT anagrams." << endl;
    }
    return 0;
}