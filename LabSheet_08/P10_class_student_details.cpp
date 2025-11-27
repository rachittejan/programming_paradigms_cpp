#include <iostream>
#include <string>
using namespace std;

// Define the Student class
class Student {
private:
    // Data Members
    string student_name;
    int roll_number;
    float student_marks;

public:
    // Member Function to input details
    void input_details() {
        cout << "Enter student name: ";
        // Use cin.ignore() to clear previous newline buffer, then getline for name
        cin.ignore(); 
        getline(cin, student_name); 

        cout << "Enter roll number: ";
        cin >> roll_number;

        cout << "Enter marks: ";
        cin >> student_marks;
    }

    // Member Function to display details
    void display_details() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << student_name << endl;
        cout << "Roll No: " << roll_number << endl;
        cout << "Marks: " << student_marks << endl;
    }
};

int main() {
    // Create an object (instance) of the Student class
    Student student1;

    // Call member functions using the object
    student1.input_details();
    student1.display_details();

    return 0;
}