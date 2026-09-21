/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01fe23bec249
Semester    : 7

Program No  : 02
Program Title: Student Details Using a Class and Object
Concept Used: Class, Object, Public Data Members, and Member Functions

Description:
This program creates a student object, stores student details, and displays
the details through a member function.

===============================================================================
*/
/*
Concept Explanation:
A class provides the structure for an object. Public data members and member
functions can be accessed through the object in this example.
*/

//write a c++ program to create a student class woth data members name and age and display the details using an object 
#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int age;
    void setdata()
    {
        cin>>name;
        cin>>age;
    }
    void showdata()
    {
        cout<<"value of name is:"<<name<<endl;
        cout<<"value of age is:"<<age<<endl;
    }
};

int main()
{
    // Create a student object and display its details.
    student s1;
    s1.name = "John Doe"; // Example name
    s1.age = 20; // Example age
    s1.showdata();
    return 0;
}