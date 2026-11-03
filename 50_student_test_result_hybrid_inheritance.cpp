/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 50
Program Title: Student, Test, and Result Class Hierarchy
Concept Used: Multiple Inheritance and Constructor Initializer List

Description:
This program combines student and test classes in a result class and displays the computed result.

===============================================================================
*/
/*
Concept Explanation:
A result class can reuse student and test members through multiple inheritance and initialize inherited data.
*/


// sir displayed this code (Shreyas Wali's code) ...

//do my version in next code (Class_9 - prog_6)



// create a class student that stores roll_no, name. Create a class test that stores marks of 3 subjects. Create a class result that inherits student and test and displays the result.
// use the intialization list in the constructor of the result class to initialize the roll_no and name of the student.
// create a class student that stores roll_no, name. Create a class test that stores marks of 3 subjects. Create a class result that inherits student and test and displays the result.
// use the intialization list in the constructor of the result class to initialize the roll_no and name of the student.
#include <iostream>
using namespace std;

class Student {
protected:
    int roll_no;
    string name;
public:
    Student(int roll, string studentName) : roll_no(roll), name(studentName) {
        cout << "Student class constructor called with roll number: " << roll_no << " and name: " << name << endl;
    }
    void displayStudent() {
        cout << "Roll Number: " << roll_no << endl;
        cout << "Name: " << name << endl;
    }
};

class Test {
protected:
    int marks[3];
public:
    void inputTest() {
        for (int i = 0; i < 3; i++) {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
    void displayTest() {
        for (int i = 0; i < 3; i++) {
            cout << "Marks for subject " << i + 1 << ": " << marks[i] << endl;
        }
    }
};

class Result : public Student, public Test {
public:
    Result(int roll, string studentName) : Student(roll, studentName) {}

    int calculateTotal() {
        return marks[0] + marks[1] + marks[2];
    }

    double calculatePercentage() {
        return calculateTotal() / 3.0;
    }

    void displayResult() {
        displayStudent();
        displayTest();
        cout << "Total Marks: " << calculateTotal() << endl;
        cout << "Percentage: " << calculatePercentage() << "%" << endl;
    }
};

int main() {
    Result r(515, "Vrunda");
    r.inputTest();
    r.displayResult();
    return 0;
}
