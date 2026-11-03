/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 53
Program Title: Student, Test, and Result Multiple Inheritance Variant
Concept Used: Multiple Inheritance

Description:
This program stores student and test information in base classes and derives a result class from them.

===============================================================================
*/
/*
Concept Explanation:
Multiple inheritance allows one result class to combine the members of student and test base classes.
*/

// this is my version of Walis code.
// GTU program:
//Create a class Student that stores roll_no,name. Create a class Test that stores marks obtained in five subjects.
//class Result derived from student and Test contains the total_marks and percentage obtained in test. Input and display information of a student

#include<iostream>
using namespace std;

class Student
{
protected:
    int roll_no;
    string name;
public:
    Student(int a, string b):roll_no(a),name(b){}
};

class Test
{
protected:
    int marks[5];
public:
    void input_marks()
    {
        cout<<"Enter the Subject Marks out of 100\n"<<endl;
        for(int i=0;i<5;i++)
        {
            cout << "Enter the Marks of "<< i+1 <<"th"<<" Subject: ";
            cin>>marks[i];
        }
    }
};

class Result:public Student,public Test
{
    int total_marks;
    float percentage;
public:
    Result(int a,string b):Student(a,b){}


    void calculate_total_marks()
    {
        total_marks = marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
    }

    void calculate_percentage()
    {
        percentage=total_marks/5;
    }

   void display_result()
    {
        cout << "\n\n\nStudent Name: " <<name<< "\n Roll No: "<<roll_no;
        for(int i=0;i<5;i++)
        {
            cout<<"\n"<<i+1<<"st Subject Marks: "<<marks[i];
        }
        cout << "\nTotal Marks: "<<total_marks<<"/500"<<"\npercentage: "<<percentage<<"%"<<endl;
    }
};

int main()
{
    Result r1(632,"Kingson");
    r1.input_marks();
    r1.calculate_total_marks();
    r1.calculate_percentage();
    r1.display_result();
    return 0;
}

