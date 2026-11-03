/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 27
Program Title: Multiple Inheritance with Liquid and Fuel
Concept Used: Multiple Inheritance

Description:
This program derives a class from two independent base classes to demonstrate multiple inheritance.

===============================================================================
*/
/*
Concept Explanation:
Multiple inheritance allows one derived class to inherit members from more than one base class.
*/

// write a c++ program to implement multiple inheritance for the following scenario: 

#include <iostream>
using namespace std;
class liquid {
public:
    void displayLiquid() {
        std::cout << "This is a liquid." << std::endl;
    }
};

class Fuel {
public:
    void displayFuel() {
        std::cout << "This is a fuel." << std::endl;
    }
};

class Petrol : public liquid, public Fuel {
public:
    void displayPetrol() {
        std::cout << "This is petrol, which is both a liquid and a fuel." << std::endl;
    }
};

int main() {
    Petrol petrol;
    petrol.displayLiquid(); // Accessing method from liquid class
    petrol.displayFuel();   // Accessing method from Fuel class
    petrol.displayPetrol(); // Accessing method from Petrol class
    return 0;
}