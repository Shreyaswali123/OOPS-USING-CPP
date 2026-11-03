/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 33
Program Title: Vehicle, Car, and Sports Car Multilevel Inheritance
Concept Used: Multilevel Inheritance

Description:
This program builds a three-level inheritance chain from vehicle to car to sports car.

===============================================================================
*/
/*
Concept Explanation:
Multilevel inheritance forms a chain in which a class derives from a class that is itself derived from another class.
*/

// Write a C++ program to implement multi-level inheritance using vehicle, car and sports car as classes use appropriate member functions and datamembers

#include<iostream>
using namespace std;

class vehicle
{
    int no_of_wheeles=4,no_of_doors=5;
public:
    void display1()
    {
        cout<<"The vehicle class: No.of Wheeles :"<<no_of_wheeles<<"\nNo_of Doors :"<<no_of_doors<<endl;
    }

};

class car:public vehicle
{
    string color="Blue";
    string type="SUV";
public:
    void display2()
    {
        cout<<"The color: "<<color<<"\nthe Type: "<<type<<endl;
    }
};

class sports_car:public car
{
    int cc=1400;
public:
    void display3()
    {
        cout<<"The CC is: "<<cc<<endl;
    }

};
int main()
{
    vehicle v;
    car c;
    sports_car s;
    v.display1();
    cout<<endl;
    c.display1();
    c.display2();
    cout<<endl;
    s.display1();
    s.display2();
    s.display3();

    return 0;
}
