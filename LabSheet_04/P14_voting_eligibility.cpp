#include <iostream>
using namespace std;

const int VOTING_AGE_MINIMUM = 18;

int main() {
    int person_age;

    cout << "Enter your age: ";
    cin >> person_age;

    if (person_age >= VOTING_AGE_MINIMUM) {
        cout << "You are eligible to vote." << endl;
    } else {
        // Calculate years left until eligibility
        int years_left = VOTING_AGE_MINIMUM - person_age;
        cout << "You are NOT eligible to vote." << endl;
        cout << "You will be eligible in " << years_left << " year(s)." << endl;
    }
    return 0;
}