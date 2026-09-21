/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01fe23bec249
Semester    : 7

Program No  : 25
Program Title: Animal and Dog Single Inheritance
Concept Used: Single Inheritance

Description:
This program derives the dog class from the animal class and uses the derived
object to call inherited and derived-class member functions.

===============================================================================
*/
/*
Concept Explanation:
In single inheritance, one derived class inherits accessible members from one
base class. The derived class can also define its own members.
*/

#include<iostream>
using namespace std;

class animal 
{
    int legs = 4;
    public: 
    void display1()
    {
        cout<<"I have "<<legs<<" legs"<<endl;
    }
};

class dog : public animal
{   bool tail = true;
    public:
    void display2()
    {
        cout<<"I am a dog"<<endl;
        cout<<"I have a tail: "<<tail<<endl;
    }
};

int main()
{  
    // Use the derived object to access base and derived behavior.
    dog d1;
    d1.display1();
    d1.display2();
    return 0;
}