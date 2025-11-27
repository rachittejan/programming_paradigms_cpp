#include <iostream>
#include <string>
using namespace std;

// Define the Car class
class Car {
public:
    // Data Members
    string brand;
    int price;

    // Member function to display car information
    void display_info() {
        cout << "Brand: " << brand << ", Price: $" << price << endl;
    }
};

int main() {
    // Create multiple objects of the Car class
    Car car1;
    Car car2;
    
    // Assign values to car1 object
    car1.brand = "Toyota";
    car1.price = 25000;
    
    // Assign values to car2 object
    car2.brand = "Honda";
    car2.price = 22000;

    cout << "--- Car Information ---" << endl;
    car1.display_info();
    car2.display_info();

    return 0;
}