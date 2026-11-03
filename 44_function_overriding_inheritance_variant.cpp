/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 44
Program Title: Function Overriding in Inheritance
Concept Used: Function Overriding and Virtual Functions

Description:
This program defines a base implementation and a derived implementation of the same member function.

===============================================================================
*/
/*
Concept Explanation:
Function overriding lets a derived class provide its own implementation for a base-class function.
*/

// Class_10 prog_3 code but without virtual keyword NO (Runtime polymorphism / Late Binding)

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
    void show() override{
    cout<<"Derv2\n";}
};

int main()
{
    Base *ptr;
    Base b;
    Derv1 dv1;
    Derv2 dv2;
    ptr= &dv2;



//    Base* ptr;
//     ptr=&dv1;
//     ptr->show();
//     ptr=&dv2;
//     ptr->show();
//dv1.show();
ptr->show();
b.show();
dv1.show();
dv2.show();
}
