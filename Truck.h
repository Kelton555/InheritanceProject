// Kelton ___
// ________
// November 26, 2024
#ifndef TRUCK_H
#define TRUCK_H

#include <string>
#include "Vehicle.h"
using namespace std;

class Truck : Vehicle {
    protected:
        double towingCapacity;
    public:
        Truck(); // default constructor
        Truck(string, int, double); // constructor

        double getTowingCapacity() const; // getter
        void setTowingCapacity(double); // setter

        void displayInfo() const;
};

#endif