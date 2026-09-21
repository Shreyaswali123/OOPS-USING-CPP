/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01fe23bec249
Semester    : 7

Program No  : 04
Program Title: Rectangle Area Using the this Pointer
Concept Used: this Pointer, Class, Object, and Member Functions

Description:
This program stores rectangle dimensions in a class and calculates the area.
The this pointer distinguishes data members from same-named parameters.

===============================================================================
*/
/*
Concept Explanation:
The this pointer refers to the current object inside a non-static member
function. It can distinguish a data member from a parameter with the same name.
*/

#include<iostream>
using namespace std;
class area
{
    int w,l;
    public:
    void setdata(int w,int l)
    {
        this->w=w;
        this->l=l;
    }   
    void showdata()
    {
        cout<<"value of width is:"<<w<<endl;
        cout<<"value of length is:"<<l<<endl;
        cout<<"value of area is:"<<w*l<<endl;
    }
};

int main()
{
    // Read dimensions, store them in an object, and display the result.
    int w,l;
    area t1;
    cin>>w>>l;
    t1.setdata(w,l);
    t1.showdata();
    return 0;
}