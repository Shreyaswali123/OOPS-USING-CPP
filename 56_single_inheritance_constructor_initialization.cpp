/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 56
Program Title: Single Inheritance with Constructor Initialization
Concept Used: Single Inheritance and Constructor Initializer List

Description:
This program constructs a derived object while initializing the inherited base-class value.

===============================================================================
*/
/*
Concept Explanation:
A derived constructor can invoke the base constructor through its initializer list.
*/

//write a cpp program with single level inheritance using constructor initializer list
#include <iostream>
using namespace std;

class Base {
protected:
    int baseValue;
public:
    Base(int value) : baseValue(value) {
        cout << "Base class constructor called with value: " << baseValue << endl;
    }
};

class Derived : public Base {
public:
    Derived(int value) : Base(value) {
        cout << "Derived class constructor called with value: " << baseValue << endl;
    }
};

int main() {
    Derived obj(20);
    Derived obj2(30);
    Derived obj3(40);
    Base obj4(50);
    return 0;
}