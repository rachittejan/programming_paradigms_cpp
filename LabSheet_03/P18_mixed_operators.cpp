#include <iostream>
using namespace std;

int main() {
    float principal = 1000.0f;
    float rate = 5.0f;
    int time = 2;
    int tax_rate = 10;
    float expression_value;

    // Expression combining arithmetic and type casting (mixed operators)
    // Value = (Principal * Rate * Time / 100) + (Tax Rate)
    // Note: Result of the first part is promoted to float due to float variables.
    expression_value = (principal * rate * time / 100.0f) + tax_rate;

    cout << "Principal: " << principal << endl;
    cout << "Rate: " << rate << endl;
    cout << "Time: " << time << endl;
    cout << "Tax Rate: " << tax_rate << endl;
    cout << "\nCalculated Value (Interest + Tax): " << expression_value << endl; // (1000*5*2/100) + 10 = 100 + 10 = 110
    return 0;
}