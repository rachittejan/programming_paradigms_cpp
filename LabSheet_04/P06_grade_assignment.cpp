#include <iostream>
using namespace std;

int main() {
    float student_marks;
    char student_grade;

    cout << "Enter student marks (out of 100): ";
    cin >> student_marks;

    // Check input validity
    if (student_marks < 0 || student_marks > 100) {
        cout << "Error: Invalid marks entered." << endl;
        return 0;
    }

    // if-else if-else ladder for grading
    if (student_marks >= 90) {
        student_grade = 'A';
    } else if (student_marks >= 75) {
        student_grade = 'B';
    } else if (student_marks >= 60) {
        student_grade = 'C';
    } else if (student_marks >= 40) {
        student_grade = 'D';
    } else {
        student_grade = 'F';
    }

    cout << "The assigned grade is: " << student_grade << endl;
    return 0;
}