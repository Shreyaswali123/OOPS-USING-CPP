/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 45
Program Title: Abstract Vehicle Class with Car and Bike
Concept Used: Abstraction and Pure Virtual Function

Description:
This program defines an abstract vehicle interface and implements mileage behavior in car and bike classes.

===============================================================================
*/
/*
Concept Explanation:
An abstract class exposes a required interface through a pure virtual function that derived classes implement.
*/

// write a c++ program with classes abstract class vehicle and derived class car and bike to display features of vehicle such as no.of wheels, mileage
//                , fuel capacity

#include<iostream>
using namespace std;

class Vehicle{
public:
    float mileage=1.1;
    virtual float disp_mileage()=0;

};

class Car: public Vehicle{
public: float disp_mileage()
{
    return mileage*2;
}
};

class Bike: public Vehicle{
public: float disp_mileage()
{
    return mileage*4;
}
};

int main()
{
    float x;
    Vehicle *v1, *v2;
    Car c;
    Bike b;
    v1=&c;
    v2=&b;
    x=v1->disp_mileage();
    cout <<x;
    return 0;
}
