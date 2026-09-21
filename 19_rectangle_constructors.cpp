/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01fe23bec249
Semester    : 7

Program No  : 19
Program Title: Rectangle Constructors Demonstration
Concept Used: Default Constructor, Parameterized Constructor, and Copy Constructor

Description:
This program creates Rectangle objects using a default constructor, a
parameterized constructor, and a copy constructor.

===============================================================================
*/
/*
Concept Explanation:
A default constructor uses no arguments, a parameterized constructor receives
initialization values, and a copy constructor initializes an object from
another object of the same class.
*/

// create a class rectangle having data members length and width. demonstrate default, parameterized and copy constructor to initialize members.

#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;   
public:
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default constructor called." << endl;
    }
    Rectangle(double l, double w) {
        length = l;
        width = w;
        cout << "Parameterized constructor called." << endl;
    }
    Rectangle(const Rectangle &r) {
        length = r.length;
        width = r.width;
        cout << "Copy constructor called." << endl;
    }
};

int main() {
    // Demonstrate the three constructor forms implemented above.
    Rectangle r1; // default constructor
    Rectangle r2(5.0, 3.0); // parameterized constructor
    Rectangle r3 = r2; // copy constructor

    return 0;
}