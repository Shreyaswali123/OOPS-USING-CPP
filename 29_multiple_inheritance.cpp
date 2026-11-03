/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 29
Program Title: Multiple Inheritance
Concept Used: Multiple Inheritance

Description:
This program derives a class from Liquid and Fuel to demonstrate access to members from two base classes.

===============================================================================
*/
/*
Concept Explanation:
Multiple inheritance enables a derived class to obtain behavior from two or more base classes.
*/

// write a C++ program to implement multiple-inheritance for the given scenerio.
//
#include<iostream>
using namespace std;

class Liquid
{
    int volume;
public:
    void display1()
    {
        cout<<"Liquid"<<endl;
    }
};

class Fuel
{
    string type;
public:
    void display2()
    {
        cout<<"Fuel"<<endl;
    }
};

class Petrol:public Liquid,public Fuel
{
    string fuel_type;
public:
    void display3()
    {
        cout<<"Petrol"<<endl;
    }
};
int main()
{
    Liquid l1;
    Fuel f1;
    Petrol p1;
    l1.display1();
    f1.display2();
    p1.display3();
    p1.display2();
    p1.display1();

    return 0;
}
