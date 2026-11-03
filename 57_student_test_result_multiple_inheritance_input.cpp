/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 57
Program Title: Student, Test, and Result Input Program
Concept Used: Multiple Inheritance

Description:
This program accepts student and test information through separate classes and displays the result through a derived class.

===============================================================================
*/
/*
Concept Explanation:
Multiple inheritance combines independently defined student and test responsibilities in a result class.
*/

// create a class student that stores roll_no, name. Create a class test that stores marks of 3 subjects. Create a class result that inherits student and test and displays the result.

#include <iostream>
using namespace std;

class Student {
protected:
    int roll_no;
    string name;
public:
    void inputStudent() {
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter name: ";
        cin >> name;
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
    void displayResult() {
        displayStudent();
        displayTest();
    }
};

int main() {
    Result r;
    r.inputStudent();
    r.inputTest();
    r.displayResult();
    return 0;
}