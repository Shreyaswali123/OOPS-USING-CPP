/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 35
Program Title: Student, Test, and Result Inheritance Variant
Concept Used: Multiple Inheritance

Description:
This program defines student and test data classes for a result class that inherits from both.

===============================================================================
*/
/*
Concept Explanation:
Multiple inheritance lets a result class combine student information and test information from separate base classes.
*/

//This code Has errors... FOR THE CORRECT CODE GO TO class_9 prog_4.

#include<iostream>
using namespace std;

class Student
{
    int roll_no;
    string name;
public:
    //Student(){};                                              no need
    Student(int a,string b):roll_no(a),name(b){}

};

class Test
{
    int marks;
public:
    //Test(){};                                                 no need
    Test(int c):marks(c){}
};

class Result:public Student,public Test
{
    int total_marks;
    float percentage;
public:
    Result(int d,float e,int r,string n,int m):Student(r,n),Test(m),total_marks(d),percentage(e){}
    void display()
    {

      cout<<total_marks<<percentage<<endl;
    }
};

int main()
{
   // Student s1;                                 no need
    //Test t1;                                    no need
    Result r1(97,85.7,632,"kingson",65);        //  no need (because its parameterized constructor)
    r1.display();

    return 0;
}
