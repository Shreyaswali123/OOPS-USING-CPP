/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01fe23bec249
Semester    : 7

Program No  : 05
Program Title: Area of a Rectangle
Concept Used: Basic C++ Input/Output and Arithmetic

Description:
This program reads the length and breadth of a rectangle and calculates its
area using multiplication. It does not use a class or other OOPS feature.

===============================================================================
*/
/*
Concept Explanation:
The program demonstrates basic console input, output, variables, and an
arithmetic expression in C++.
*/

#include<iostream>
using namespace std;

int main()
{
    // Read the rectangle dimensions and calculate the area.
    int length, breadth;
    cout<<"Enter length and breadth of rectangle: ";
    cin>>length>>breadth;
    int area = length * breadth;
    cout<<area<<endl;

    return 0;
}