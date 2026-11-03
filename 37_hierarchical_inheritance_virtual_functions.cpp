/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 37
Program Title: Hierarchical Inheritance with Virtual Functions
Concept Used: Hierarchical Inheritance and Runtime Polymorphism

Description:
This program derives several shape classes from one base class and invokes overridden drawing functions.

===============================================================================
*/
/*
Concept Explanation:
Hierarchical inheritance gives multiple derived classes one common base; virtual functions support selecting each derived behavior.
*/

// one base class three derived class.


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
    void draw()
    {
    cout<<"Circle";
    }
    };

    class Square: public Shape{
public:
    void draw()
    {
    cout<<"Square";
    }
    };

    class Triangle: public Shape{
public:
    void draw()
    {
    cout<<"Triangle";
    }
    };

int main()
{
    Shape *s1= new Circle();
    Shape *s2= new Square();
    Shape *s3= new Triangle();
    s1->draw();            //Output: "Circle" <-- Late binding!
    s2->draw();
    s3->draw();
}
