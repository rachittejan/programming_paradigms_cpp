#include <iostream>
using namespace std;

int main() {
    int day_number;

    cout << "Enter a day number (1 to 7): ";
    cin >> day_number;

    // Use switch statement for selection based on integer value
    switch (day_number) {
        case 1:
            cout << "Day Name: Monday" << endl;
            break;
        case 2:
            cout << "Day Name: Tuesday" << endl;
            break;
        case 3:
            cout << "Day Name: Wednesday" << endl;
            break;
        case 4:
            cout << "Day Name: Thursday" << endl;
            break;
        case 5:
            cout << "Day Name: Friday" << endl;
            break;
        case 6:
            cout << "Day Name: Saturday" << endl;
            break;
        case 7:
            cout << "Day Name: Sunday" << endl;
            break;
        default:
            // Executed if none of the cases match
            cout << "Error: Invalid day number. Please enter a number from 1 to 7." << endl;
    }
    return 0;
}