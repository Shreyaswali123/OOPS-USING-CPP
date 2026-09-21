/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01fe23bec249
Semester    : 7

Program No  : 21
Program Title: Friend Function with an Object Argument
Concept Used: Friend Function and Private Data Access

Description:
This program declares add() as a friend of numbers so it can add the two
private data members of a numbers object.

===============================================================================
*/
/*
Concept Explanation:
A friend function is not a member of a class, but a class can grant it access
to private and protected members through a friend declaration.
*/



#include<iostream>
using namespace std;

class numbers{
       int num1,num2;
public:
    void setdata(int a,int b);
    friend int add(numbers N);
};

void numbers::setdata(int a,int b)
{
    num1=a;
    num2=b;
}

int add(numbers N)
{
return(N.num1+N.num2);
}

int main()
{
    // Pass the object to the friend function for addition.
    numbers N1;
    N1.setdata(3,5);
    cout<<"The Sum of the Two Numbers is: "<<add(N1)<<endl;

    return 0;
}
