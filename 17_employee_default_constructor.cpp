/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01fe23bec249
Semester    : 7

Program No  : 17
Program Title: Employee Record Using a Default Constructor
Concept Used: Default Constructor, Class, and Object

Description:
This program creates an Employee object whose default constructor reads the
employee record, and then displays the stored record.

===============================================================================
*/
/*
Concept Explanation:
A default constructor is called when an object is created without constructor
arguments. It can initialize data and perform setup for the object.
*/

// write a c++ program to read employee record with id name salary dept and display it
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int id;
    string name;
    double salary;
    string dept;    
public:
    Employee();
    void display();
};

Employee::Employee() {
    id = 0;
    name = "";
    salary = 0.0;
    dept = "";

    cout << "Enter Employee ID: ";
    cin >> id;
    cin.ignore(); // to ignore the newline character after reading id
    cout << "Enter Employee Name: ";
    getline(cin, name);
    cout << "Enter Employee Salary: ";
    cin >> salary;
    cin.ignore(); // to ignore the newline character after reading salary
    cout << "Enter Employee Department: ";
    getline(cin, dept);
}

void Employee::display() {
    cout << "\nEmployee Record:\n";
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;
    cout << "Department: " << dept << endl;
}

int main() {
    // Object construction invokes the default constructor to read the record.
    Employee emp;
    emp.display();
    return 0;
}