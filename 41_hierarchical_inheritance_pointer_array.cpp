/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 41
Program Title: Hierarchical Inheritance Using an Array of Base Pointers
Concept Used: Hierarchical Inheritance and Runtime Polymorphism

Description:
This program stores pointers to derived shape objects in a base-pointer array and invokes their drawing behavior.

===============================================================================
*/
/*
Concept Explanation:
Base-class pointers can refer to derived objects, allowing a collection of related objects to use polymorphic calls.
*/

// one base class three derived class.      same as prog_2 but  //Array of pointer objects


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
//    Shape *s1= new Circle();
//    Shape *s2= new Square();
//    Shape *s3= new Triangle();
//    s1->draw();            //Output: "Circle" <-- Late binding!
//    s2->draw();
//    s3->draw();
//

Shape *shapes[3]={new Circle(),new Square(),new Triangle()};
for (int i=0;i<3;i++)
    shapes[i]->draw();


}
