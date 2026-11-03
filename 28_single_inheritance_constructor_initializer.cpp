/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 28
Program Title: Single Inheritance with Constructor Initializer List
Concept Used: Single Inheritance and Constructor Initializer List

Description:
This program creates a derived class from a base class and initializes inherited state through a constructor initializer list.

===============================================================================
*/
/*
Concept Explanation:
Single inheritance gives a derived class one direct base class. A constructor initializer list initializes base-class and data members before the constructor body runs.
*/

// today sir conducted viva and checked the github repo .
//write a cpp program with single level inheritance using constructor initializer list.(coppied prog_1 from class_6 and editing it below)
// Single Level inheritance.

#include<iostream>
using namespace std;

class Animal
{
// int legs=4;                   //old
int legs;
int eyes;

public:
    Animal(int f,int h):legs(f),eyes(h){} // new line added
    void display1()
    {
        cout<<"This is Base Class"<<endl;
        cout<<"\nLegs= "<<legs<<endl;
        cout<<"\nEyes= "<<eyes<<endl;

    }
};

class Dog: public Animal
{
    // bool tail = true;
    string dog_tail_color;                //new line added
public:
    Dog(int a,int b,string tail_color):Animal(a,b),dog_tail_color(tail_color){}   //new line added
    void display2()
    {
        cout<<"This is Derived Class"<<endl;
     //   cout<<"\nLegs= "<<legs<<endl;
    //    cout<<"\nEyes= "<<eyes<<endl;
        cout<<"\nTail_color= "<<dog_tail_color<<endl;
    }
};

int main()
{
   // Animal a1(4,2);
    Dog d1(7,5,"brown");
    d1.display1();
    d1.display2();
}
