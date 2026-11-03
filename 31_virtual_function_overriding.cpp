/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 31
Program Title: Virtual Function Overriding
Concept Used: Virtual Functions and Runtime Polymorphism

Description:
This program overrides a virtual draw function in a derived class to demonstrate late binding.

===============================================================================
*/
/*
Concept Explanation:
A virtual function allows a derived implementation to be selected through a base-class interface at run time.
*/

// one base class one derived class. (we use virtual functions when we encounter  (Diamond problem in inheritance) but here
                        // only we have 1 base class and 1 derived class so why are we using virtual function? => we are using virtual function here because
                        // here we want to do function override (Late binding)  ).


#include<iostream>
using namespace std;

class Shape{
public:
    virtual void draw(){               //now virtual
    cout<<"Generic shape";
    }
};

class Circle: public Shape{
public:
    void draw() override
    {
    cout<<"Circle";
    }
    };

int main()
{
    Shape *s= new Circle();
    s->draw();            //Output: "Circle" <-- Late binding!
}
