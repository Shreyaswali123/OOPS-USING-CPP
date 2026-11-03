/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 40
Program Title: Function Overriding with Runtime Polymorphism
Concept Used: Virtual Functions and Runtime Polymorphism

Description:
This program overrides a base-class function in derived classes and demonstrates late binding.

===============================================================================
*/
/*
Concept Explanation:
Runtime polymorphism uses virtual functions so the implementation matching the actual object type is selected at run time.
*/

// Function overriding in inheritance using virtual keyword. (Runtime polymorphism / Late Binding)

#include<iostream>
using namespace std;

class Base{
public:
     virtual void show(){
    cout<<"Base"<<endl;
    }
};

class Derv1: public Base{
public:
    void show()
    {
        cout<<"Derv1\n";
    }
};

class Derv2:public Base
{
public:
    void  show(){
    cout<<"Derv2\n";}
};

int main()
{
    Derv1 dv1;
    Derv2 dv2;
    Base* ptr;
     ptr=&dv1;
     ptr->show();
     ptr=&dv2;
     ptr->show();
}
