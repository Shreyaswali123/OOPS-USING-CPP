/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01fe23bec249
Semester    : 7

Program No  : 24
Program Title: Common Friend Function for Two Classes (Variant)
Concept Used: Friend Function, Private Data Access, and Forward Declaration

Description:
This program is a variant of the common friend-function exercise. It adds
private values from ABC and XYZ through one friend function.

===============================================================================
*/
/*
Concept Explanation:
Declaring a function as a friend in two classes lets that function access the
private members of both classes. A forward declaration enables the declarations
to refer to the other class.
*/

// Write a C++ program to find the sum of two private data members numA and numB of two classes ABC and XYZ using a common friend function.
// Assume that the protoype for both the classes will be int add(ABC,XYZ); ...

#include<iostream>
using namespace std;
class XYZ;
class ABC
{
int numA;
public:
    void getdataABC(int d)
    {
        numA=d;
    }
   friend int add(ABC a1,XYZ b1);
};

class XYZ
{
int numB;
public:
    friend int add(ABC a1,XYZ b1);
    void getdataXYZ(int e)
    {
        numB=e;
    }
};

    int add(ABC a1,XYZ b1)
    {
        return(a1.numA+b1.numB);
    }

int main()
{
    // Initialize both class objects before calling the common friend function.
    ABC a;
    XYZ b;
    a.getdataABC(2);
    b.getdataXYZ(6);
    cout<<"the Sum is : "<<add(a,b)<<endl;
    return 0;
}
