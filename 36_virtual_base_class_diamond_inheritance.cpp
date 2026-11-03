/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 36
Program Title: Virtual Base Class in Diamond Inheritance
Concept Used: Multiple Inheritance and Virtual Base Classes

Description:
This program resolves the repeated-base ambiguity in a diamond inheritance structure using virtual base classes.

===============================================================================
*/
/*
Concept Explanation:
A virtual base class ensures that a shared ancestor occurs only once in the final derived object.
*/

// Multiple-inheritance , Function-overriding... (program with error int i is ambiguious...) error SOLVED using Virtual Base Class
#include<iostream>
using namespace std;

class A
{
public:
    int i;
};

class B:virtual public A           // you can put the keyword("virtual") before or after the acces-specifiers("public")
{
public:
    int j;
};

class C: public virtual A
{
public :
    int k;
};

class D: public B,public C
{
public:
    int sum;
};

int main()
{
    D obj1;
    obj1.i=10;
    obj1.j=20;
    obj1.k=30;
    obj1.sum=obj1.i+obj1.j+obj1.k;
    cout<<"The Sum is:   "<<obj1.sum<<endl;
}
