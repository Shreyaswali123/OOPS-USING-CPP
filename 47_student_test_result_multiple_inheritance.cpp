/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 47
Program Title: Student, Test, and Result Multiple Inheritance
Concept Used: Multiple Inheritance and Constructor Initializer List

Description:
This program creates a result class inheriting student and test information and initializes the result object.

===============================================================================
*/
/*
Concept Explanation:
A class can combine two base classes through multiple inheritance and initialize their state during construction.
*/

// Sir displayed my code...
// THIS IS THE CORRECT CODE OF Class_9 prog_3...

#include<iostream>
using namespace std;

class Student
{
    int roll_no;
    string name;
public:
   // Student(){};                                            //  (here)
    Student(int a,string b):roll_no(a),name(b){}

};

class Test
{
    int marks;
public:
   // Test(){};                                             //    (here)
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

      cout<<"This is the total marks :"<<total_marks<<"\n This is the percentage :"<<percentage<<endl;
    }
};

int main()
{
   // Student s1;                       //(solved this error)          //error because you need to declare a default constructor above in the Student class;
   //  Test t1;                          //(solved this error)          //error because you need to declare a default constructor above in the Test class;
    Result r1(97,85.7,632,"kingson",65);
    r1.display();

    return 0;
}
