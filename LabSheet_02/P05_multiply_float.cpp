#include <iostream>
using namespace std;

int main() {
    // Use float data type for floating-point numbers
    float factor1, factor2;
    float product_result;

    // Initialize/input floating-point numbers
    factor1 = 15.5f;
    factor2 = 3.2f;

    // Calculate the product
    product_result = factor1 * factor2;

    // Display the result
    cout << "The product of " << factor1 << " and " << factor2 << " is: " << product_result << endl;
    return 0;
}