// Kelton ___
// ________
// November 26, 2024

#include <iostream>
#include <string>
#include "Car.h"

Car::Car() : Vehicle() { // default constructor
    doors = 0;
}

Car::Car(string sManufacturer, int iBuildYear, int iDoors) : Vehicle(sManufacturer, iBuildYear) { // constructor
    doors = iDoors;
}

int Car::getDoors() const { // getter
    return doors;
}

void Car::setDoors(int iDoors) { // setter
    doors = iDoors;
}

void Car::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Doors: " << doors << endl;
}