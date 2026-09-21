/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01fe23bec249
Semester    : 7

Program No  : 18
Program Title: Employee Record Using a Parameterized Constructor
Concept Used: Parameterized Constructor and this Pointer

Description:
This program initializes an Employee object with an id, name, salary, and
department using a parameterized constructor.

===============================================================================
*/
/*
Concept Explanation:
A parameterized constructor accepts initialization values. The this pointer
is used when constructor parameters have the same names as data members.
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
    Employee(int id, string name, double salary, string dept)
    {
    this->id = id;
    this->name = name;
    this->salary = salary;
    this->dept = dept;
    }
    void display();
};


void Employee::display() {
    cout << "\nEmployee Record:\n";
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;
    cout << "Department: " << dept << endl;
}

int main() {
    // Construct an initial object, then assign a newly constructed Employee.
    Employee Emp(0, "", 0.0, "");
    int id;
    string name;    
    double salary;
    string dept;
    cout << "Enter Employee ID, Name, Salary, and Department: "<< endl;
    cin >> id >> name >> salary >> dept;
    Emp = Employee(id, name, salary, dept);
    Emp.display();
    return 0;
}