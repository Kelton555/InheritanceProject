// Kelton ___
// ________
// November 26, 2024

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

#include <iostream>
#include <string>

using namespace std;

int getIntInput();
double getDoubleInput();
string getStringInput();

int getIntInput(string);
double getDoubleInput(string);
string getStringInput(string);


int main() {
    cout << "Vehicle Program\n\n";

    // vehicle
    cout << "Vehicle:\n";
    cout << "Enter manufacturer: ";
    string manufacturer = getStringInput();
    cout << "Enter year built: ";
    int buildYear = getIntInput();

    Vehicle vehicle(manufacturer, buildYear);
    cout << "Vehicle Info:\n";
    vehicle.displayInfo();
    cout << endl;

    // car
    cout << "Car:\n";
    cout << "Enter manufacturer: ";
    manufacturer = getStringInput();
    cout << "Enter year built: ";
    buildYear = getIntInput();
    cout << "Enter number of doors: ";
    int doors = getIntInput();

    Car car(manufacturer, buildYear, doors);
    cout << "Car Info:\n";
    car.displayInfo();
    cout << endl;

    // truck
    cout << "Truck:\n";
    cout << "Enter manufacturer: ";
    manufacturer = getStringInput();
    cout << "Enter year built: ";
    buildYear = getIntInput();
    cout << "Enter towing capacity: ";
    double towingCapacity = getDoubleInput();

    Truck truck(manufacturer, buildYear, towingCapacity);
    cout << "Truck Info:\n";
    truck.displayInfo();

    return 0;
}

// returns an integer from the user, with error checking
int getIntInput() {
    int input;
    cin >> input;

    while (cin.fail()) {
        cout << "Error. Enter an integer: ";
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cin >> input;
    }
    cin.ignore(INT_MAX, '\n'); // clear remaining newline

    return input;
}

// returns a double from the user, with error checking
double getDoubleInput() {
    double input;
    cin >> input;

    while (cin.fail()) {
        cout << "Error. Enter a number: ";
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cin >> input;
    }
    cin.ignore(INT_MAX, '\n'); // clear remaining newline

    return input;
}

// returns a string from the user (getline), with error checking
string getStringInput() {
    string input;
    getline(cin, input);

    while (cin.fail()) {
        cout << "Error. Enter a string: ";
        cin.clear();
        cin.ignore(INT_MAX, '\n'); // if getline failed, presumably it missed the newline. the worst that can happen is the user has to hit enter again
        getline(cin, input);
    } // getline already eats the newline, so no need to ignore it after the loop

    return input;
}