#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int data_array[SIZE] = {10, 20, 10, 30, 40, 10, 50, 20, 10, 10};
    int search_element;
    int count = 0;

    cout << "Enter the element to count: ";
    cin >> search_element;

    // Linear search is required here to check ALL occurrences
    for (int i = 0; i < SIZE; ++i) {
        if (data_array[i] == search_element) {
            count++;
        }
    }

    cout << "The element " << search_element << " occurs " << count << " time(s)." << endl;
    return 0;
}