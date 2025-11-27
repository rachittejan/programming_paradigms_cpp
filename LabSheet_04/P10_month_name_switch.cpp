#include <iostream>
using namespace std;

int main() {
    int month_number;

    cout << "Enter a month number (1 to 12): ";
    cin >> month_number;

    switch (month_number) {
        case 1:  cout << "Month Name: January" << endl; break;
        case 2:  cout << "Month Name: February" << endl; break;
        case 3:  cout << "Month Name: March" << endl; break;
        case 4:  cout << "Month Name: April" << endl; break;
        case 5:  cout << "Month Name: May" << endl; break;
        case 6:  cout << "Month Name: June" << endl; break;
        case 7:  cout << "Month Name: July" << endl; break;
        case 8:  cout << "Month Name: August" << endl; break;
        case 9:  cout << "Month Name: September" << endl; break;
        case 10: cout << "Month Name: October" << endl; break;
        case 11: cout << "Month Name: November" << endl; break;
        case 12: cout << "Month Name: December" << endl; break;
        default:
            cout << "Error: Invalid month number. Enter 1 to 12." << endl;
    }
    return 0;
}