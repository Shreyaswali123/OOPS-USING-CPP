/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01fe23bec249
Semester    : 7

Program No  : 01
Program Title: Demonstration of a Class and Object
Concept Used: Class, Object, Encapsulation, and Member Functions

Description:
This program defines a class with data members and member functions, then
creates an object to assign and display the stored values.

===============================================================================
*/
/*
Concept Explanation:
A class groups data and related functions into one user-defined type. An
object is an instance of that class used to access its public interface.
*/

#include<iostream>
using namespace std;
class test
{
    int marks;
    float spi;
    public:
    void setdata(int x, float y)
    {
        marks=x;
        spi=y;
    }   
    void showdata()
    {
        cout<<"value of marks is:"<<marks<<endl;
        cout<<"value of spi is:"<<spi<<endl;
    }
};

int main()
{
    // Create an object and use its member functions.
    test t1;
    t1.setdata(100,9.5);
    t1.showdata();
    return 0;
}