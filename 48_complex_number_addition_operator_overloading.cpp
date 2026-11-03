/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 48
Program Title: Complex Number Addition Using Operator Overloading
Concept Used: Binary Operator Overloading

Description:
This program overloads the plus operator to add two complex number objects.

===============================================================================
*/
/*
Concept Explanation:
Binary operator overloading defines how an operator such as plus works for objects of a user-defined class.
*/

//write a c++ program to add two complex numbers with operator overloading.
#include<iostream>
using namespace std;

class Complex{
float re, im;
public:
    Complex(float r=0,float i=0): re(r),im(i){};
    Complex operator+(const Complex &c){                // operator function
    return Complex(re + c.re, im +c.im);
    }
    void show() { cout << re <<" + " << im <<"i"; }
};

int main(){
Complex a(2,3), b(4,5);
Complex c = a + b;       // calls a.operator+(b)
c.show();            //    Output: 6 + 8i
}
