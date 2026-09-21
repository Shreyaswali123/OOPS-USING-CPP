/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01fe23bec249
Semester    : 7

Program No  : 15
Program Title: Calculate Car Mileage Using a Parameterized Constructor
Concept Used: Parameterized Constructor and Encapsulation

Description:
This program initializes a Car object with distance and fuel values through a
parameterized constructor and calculates the mileage.

===============================================================================
*/
/*
Concept Explanation:
A parameterized constructor receives values when an object is created and uses
them to initialize the object's data members.
*/

// write a c++ program to calculate the milage of a car using constructor and function arguments. The program should take the distance traveled and the amount of fuel consumed as input, and then calculate and display the mileage.
#include <iostream>
using namespace std;

class Car {
    private:
        double distance, fuel;

    public:
        Car(double d, double f);
        void calculateMileage();
};

Car::Car(double d, double f) {
    distance = d;
    fuel = f;
}

void Car::calculateMileage() {
    if (fuel > 0) {
        double mileage = distance / fuel;
        cout << "Mileage: " << mileage << " km/l" << endl;
    } else {
        cout << "Error: Fuel consumption cannot be zero or negative." << endl;
    }
}

int main() {
    // Construct the Car object with the values entered by the user.
    double distance, fuel;
    cout << "Enter the distance traveled (in km): ";
    cin >> distance;
    cout << "Enter the amount of fuel consumed (in liters): ";
    cin >> fuel;

    Car car(distance, fuel);
    car.calculateMileage();

    return 0;
}