#include <iostream>
#include <string>
using namespace std;

int main() {
    string user_name;
    int user_age;

    // Get name input (using getline to handle spaces)
    cout << "Enter your full name: ";
    getline(cin, user_name);

    // Get age input
    cout << "Enter your age: ";
    cin >> user_age;

    // Display the details
    cout << "\nHello, " << user_name << "!" << endl;
    cout << "You are " << user_age << " years old." << endl;
    return 0;
}