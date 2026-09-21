/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01fe23bec249
Semester    : 7

Program No  : 16
Program Title: Distance Class with a Parameterized Constructor
Concept Used: Parameterized Constructor, Class, and Object

Description:
This program initializes feet and inches through a parameterized constructor
and displays the distance stored in the object.

===============================================================================
*/
/*
Concept Explanation:
A parameterized constructor initializes an object with values supplied at the
time of object creation.
*/

//Create a class distance having data members feet and inch. create parameterized constructor to initialize members feet and inch
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inch;
public:
    Distance(int f, int i) {
        feet = f;
        inch = i;
    }
    void display() {
        cout << "Distance: " << feet << " feet " << inch << " inches" << endl;
    }
};

int main() {
    // Create a Distance object with constructor arguments.
    Distance d(5, 10);
    d.display();
    return 0;
}