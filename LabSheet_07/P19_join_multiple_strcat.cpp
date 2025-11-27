#include <iostream>
[cite_start]#include <cstring> // Required for strcat() [cite: 93]
using namespace std;

int main() {
    // Destination must be large enough
    char sentence[100] = ""; 
    char part1[] = "The ";
    char part2[] = "quick ";
    char part3[] = "fox.";

    // 1. Start with the first part
    strcpy(sentence, part1);

    // 2. Append parts 2 and 3
    strcat(sentence, part2); [cite_start]// [cite: 93]
    strcat(sentence, part3); [cite_start]// [cite: 93]

    cout << "Joined sentence: " << sentence << endl;
    return 0;
}