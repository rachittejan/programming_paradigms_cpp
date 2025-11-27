#include <iostream>
using namespace std;

int main() {
    float distance_km;
    float distance_meters, distance_centimeters;

    cout << "Enter distance in Kilometers (KM): ";
    cin >> distance_km;

    // Conversion: 1 KM = 1000 Meters
    distance_meters = distance_km * 1000.0f;

    // Conversion: 1 Meter = 100 Centimeters (1 KM = 1000 * 100 = 100,000 CM)
    distance_centimeters = distance_meters * 100.0f;

    cout << "\nDistance in Meters: " << distance_meters << " m" << endl;
    cout << "Distance in Centimeters: " << distance_centimeters << " cm" << endl;
    return 0;
}