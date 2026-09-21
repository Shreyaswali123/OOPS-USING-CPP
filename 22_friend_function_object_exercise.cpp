/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01fe23bec249
Semester    : 7

Program No  : 22
Program Title: Friend Function Object-Argument Exercise
Concept Used: Friend Function and Object as a Function Argument

Description:
This program is an additional friend-function exercise in which add() receives
a numbers object and accesses its private members.

===============================================================================
*/
/*
Concept Explanation:
A friend function may receive an object as an argument and access the private
members permitted by the class's friend declaration.
*/

// check that we can take arguments as the parameters of the friend functions (to do)

//                          do the above

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
    // Create the object and pass it to the friend function.
    numbers N1;
    N1.setdata(3,5);
    cout<<"The Sum of the Two Numbers is: "<<add(N1)<<endl;

    return 0;
}
