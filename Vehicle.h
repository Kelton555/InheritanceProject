// Kelton ___
// ________
// November 26, 2024
#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle {
    protected:
        string manufacturer;
        int buildYear;
    public:
        Vehicle(); // default constructor
        Vehicle(string, int); // constructor

        // getters
        string getManufacturer() const;
        int getBuildYear() const;

        // setters
        void setManufacturer(string);
        void setBuildYear(int);

        void displayInfo() const;
};

#endif