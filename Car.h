// Kelton ___
// ________
// November 26, 2024
#ifndef CAR_H
#define CAR_H

#include <string>
#include "Vehicle.h"
using namespace std;

class Car : Vehicle {
    protected:
        int doors;
    public:
        Car(); // default constructor
        Car(string, int, int); // constructor

        int getDoors() const; // getter
        void setDoors(int); // setter

        void displayInfo() const;
};

#endif