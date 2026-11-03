/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01fe23bec249
Semester    : 7

Program No  : 59
Program Title: Person, Student, and ITstudent Multilevel Inheritance Variant
Concept Used: Multilevel Inheritance

Description:
This program creates a three-level inheritance chain and invokes the member
functions available at each level through objects of the classes.

===============================================================================
*/
/*
Concept Explanation:
Multilevel inheritance forms a chain in which a class derives from another
derived class. The final derived class can access the inherited levels.
*/

#include<iostream>
using namespace std;

class person {
    public:
    void display1() {
        cout<<"I am a person class"<<endl;
    }
};

class student : public person {
    public:
    void display2() {
        cout<<"I am a student class"<<endl;
    }
};

class ITstudent : public student {
    public:
    void display3() {
        cout<<"I am an IT student class"<<endl;
    }
};

int main() {
    // Demonstrate the members available at each inheritance level.
    person p1;
    p1.display1();
    student s1;
    s1.display1();
    s1.display2();
    ITstudent it1;
    it1.display1();
    it1.display2();
    it1.display3();
}