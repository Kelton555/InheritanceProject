// Kelton ___
// ________
// November 26, 2024

#include <iostream>
#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle() { // default constructor
    manufacturer = "Undefined Manufacturer";
    buildYear = 0;
}

Vehicle::Vehicle(string sManufacturer, int iBuildYear) { // constructor
    manufacturer = sManufacturer;
    buildYear = iBuildYear;
}

// getters
string Vehicle::getManufacturer() const {
    return manufacturer;
}

int Vehicle::getBuildYear() const {
    return buildYear;
}

// setters
void Vehicle::setManufacturer(string sManufacturer) {
    manufacturer = sManufacturer;
}

void Vehicle::setBuildYear(int iBuildYear) {
    buildYear = iBuildYear;
}

void Vehicle::displayInfo() const {
    cout << "Manufacturer: " << manufacturer << endl
         << "Year Built: " << buildYear << endl;
}