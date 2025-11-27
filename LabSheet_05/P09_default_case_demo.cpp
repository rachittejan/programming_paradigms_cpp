#include <iostream>
using namespace std;

int main() {
    int user_choice;

    cout << "Enter a number (1, 2, or 3): ";
    cin >> user_choice;

    switch (user_choice) {
        case 1:
            cout << "You chose option One." << endl;
            break;
        case 2:
            cout << "You chose option Two." << endl;
            break;
        default:
            // This 'default' case executes when 'user_choice' is anything other than 1 or 2.
            cout << "Default Case Executed: No matching option found for " << user_choice << "." << endl;
    }
    return 0;
}