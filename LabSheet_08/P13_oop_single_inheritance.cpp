#include <iostream>
#include <string>
using namespace std;

// Base Class: Person
class Person {
protected: // Accessible by derived classes
    string name;
    int age;

public:
    void input_person_details() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
    }

    void display_person_details() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived Class: Student (inherits public and protected members of Person)
class Student : public Person {
private:
    float marks;

public:
    void input_student_details() {
        // Call base class function to get Person details
        input_person_details(); 
        
        cout << "Enter Marks: ";
        // Clear cin buffer after reading age
        cin.ignore();
        cin >> marks;
    }

    void display_student_details() const {
        cout << "\n--- Student Details ---" << endl;
        // Call base class function to display Person details
        display_person_details();
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student college_student;

    // Input data
    college_student.input_student_details();

    // Display all details
    college_student.display_student_details();
    
    return 0;
}