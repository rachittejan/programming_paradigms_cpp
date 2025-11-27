#include <iostream>
using namespace std;

int main() {
    // Use float/double for average calculation precision
    float marks_subject1, marks_subject2, marks_subject3;
    float total_marks;
    float average_marks;

    cout << "Enter marks for subject 1: ";
    cin >> marks_subject1;
    cout << "Enter marks for subject 2: ";
    cin >> marks_subject2;
    cout << "Enter marks for subject 3: ";
    cin >> marks_subject3;

    // Calculate Total
    total_marks = marks_subject1 + marks_subject2 + marks_subject3;

    // Calculate Average
    average_marks = total_marks / 3.0f; // Use 3.0f for float division

    cout << "\nTotal Marks: " << total_marks << endl;
    cout << "Average Marks: " << average_marks << endl;
    return 0;
}