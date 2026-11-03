/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 30
Program Title: Multiple Inheritance and Member Ambiguity
Concept Used: Multiple Inheritance and Ambiguity

Description:
This program illustrates the ambiguous member situation that can occur when two inheritance paths expose a member with the same name.

===============================================================================
*/
/*
Concept Explanation:
When multiple base classes provide members with the same name, an unqualified reference can be ambiguous and requires disambiguation.
*/

// Multiple-inheritance , Function-overriding... (program with error int i is ambiguious...) ERROR

#include<iostream>
using namespace std;

class A
{
public:
    int i;
};

class B:public A
{
public:
    int j;
};

class C: public A
{
    public:
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
    obj1.i=10;//
    obj1.j=20;
    obj1.k=30;
    obj1.sum=obj1.i+obj1.j+obj1.k;
    cout<<"The Sum is:   "<<obj1.sum<<endl;
}
