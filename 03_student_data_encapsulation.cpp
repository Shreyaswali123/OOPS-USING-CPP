/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01fe23bec249
Semester    : 7

Program No  : 03
Program Title: Student Data Encapsulation
Concept Used: Encapsulation and Member Functions

Description:
This program keeps student data members private and accesses them through
public member functions of the student class.

===============================================================================
*/
/*
Concept Explanation:
Encapsulation combines data and the functions that operate on it inside a
class. Private data can be accessed through the class's public interface.
*/

//write a c++ program to create a student class woth data members name and age and display the details using an object 
#include<iostream>
using namespace std;
class student
{
    string name;
    int age;
    public:
    void setdata();
    void showdata()
    {
        cout<<"value of name is:"<<name<<endl;
        cout<<"value of age is:"<<age<<endl;
    }
};

void student::setdata()
{
    cin>>name;
    cin>>age;
}

int main()
{
    // Create the object and invoke its public interface.
    student s1;
    s1.setdata();
    s1.showdata();
    return 0;
}