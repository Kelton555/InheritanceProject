// Kelton ___
// ________
// November 26, 2024

#include <iostream>
#include <iomanip>
#include <string>
#include "Truck.h"

Truck::Truck() : Vehicle() { // default constructor
    towingCapacity = 0.0;
}

Truck::Truck(string sManufacturer, int iBuildYear, double dTowingCapacity) : Vehicle(sManufacturer, iBuildYear) { // constructor
    towingCapacity = dTowingCapacity;
}

double Truck::getTowingCapacity() const { // getter
    return towingCapacity;
}

void Truck::setTowingCapacity(double dTowingCapacity) { // setter
    towingCapacity = dTowingCapacity;
}

void Truck::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Towing Capacity: " << setprecision(1) << fixed << towingCapacity << endl;
}