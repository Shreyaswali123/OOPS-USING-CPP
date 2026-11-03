/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 39
Program Title: Vehicle, Car, and Sports Car with Protected Members
Concept Used: Multilevel Inheritance and Protected Access

Description:
This program uses a multilevel vehicle hierarchy and protected access for inherited functionality.

===============================================================================
*/
/*
Concept Explanation:
Protected members are accessible within a class and its derived classes, enabling controlled inheritance access.
*/

// Write a C++ program to implement multi-level inheritance using vehicle, car and sports car as classes use appropriate member functions and datamembers



//{{{    "  Checking by changing to protected in the base class   " }}}  PLAY WITH IT!!!



#include<iostream>
using namespace std;

class vehicle
{
    int no_of_wheeles=4,no_of_doors=5;
protected:
    void display1()
    {
        cout<<"The vehicle class: No.of Wheeles :"<<no_of_wheeles<<"\nNo_of Doors :"<<no_of_doors<<endl;
    }

};

class car:public vehicle
{
    string color="Blue";
    string type="SUV";
public:
    void display2()
    {
        display1();
        cout<<"The color: "<<color<<"\nthe Type: "<<type<<endl;
    }
};

class sports_car:public car
{
    int cc=1400;
public:
    void display3()
    {
        display1();                                  // You cannot access the protected class in the main you can only call it in the derived class...

        cout<<"The CC is: "<<cc<<endl;
    }

};
int main()
{
    vehicle v;
    car c;
    sports_car s;
//    v.display1();                      // You cannot access the protected class in the main you can only call it in the derived class... (see above)
    cout<<endl;
  //  c.display1();
    c.display2();
    cout<<endl;
 //   s.display1();
    s.display2();
    s.display3();

    return 0;
}
