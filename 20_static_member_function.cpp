/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01fe23bec249
Semester    : 7

Program No  : 20
Program Title: Static Member Function and Static Data Member
Concept Used: Static Data Member and Static Member Function

Description:
This program maintains a static count value in Item and displays it through a
static member function after updates from different objects.

===============================================================================
*/
/*
Concept Explanation:
A static data member is shared by all objects of a class. A static member
function can be called using the class name and operates on class-level data.
*/

// Write a c++ program to implement static member Functions... Display only the count(static variable).

#include<iostream>
using namespace std;

class Item{
    static int Count;
    int c;
public:
    static void display()
    {
        cout<<"The value of count :"<<Count<<endl;
    }
    int getdata(int a)
    {
        c=a;
        Count=c;
        return 0;
    }

};

int Item:: Count;


int main()
{
    // Access the shared static member through the class and its objects.
    Item i1,i2,i3;
    Item::display();
    i1.getdata(100);
    Item::display();
    i2.getdata(200);
    Item::display();
    i3.getdata(300);
    Item::display();
    return 0;

}
