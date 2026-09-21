/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01fe23bec249
Semester    : 7

Program No  : 14
Program Title: Addition of Two Complex Numbers Using a Class
Concept Used: Class, Object, Encapsulation, and Objects as Arguments

Description:
This program stores real and imaginary parts in Complex objects and adds two
complex numbers through a member function.

===============================================================================
*/
/*
Concept Explanation:
A class can encapsulate related data and operations. Here, private complex
number components are initialized, displayed, and combined through methods.
*/

// define class complex with members real and imaginary. Also define function setData() to initialize the members, print() to display complex number and add() to add two complex objects. Demonstrate class complex for two objects
#include <iostream>
using namespace std;

class Complex {
    private:
        int real, imaginary;

    public:
        void setData(int r, int i);
        void add(Complex c1, Complex c2);
        void print();
};

void Complex::setData(int r, int i) {
    real = r;
    imaginary = i;
}

void Complex::print() {
    cout << "Complex number: " << real << " + " << imaginary << "i" << endl;
}

void Complex::add(Complex c1, Complex c2) {
    real = c1.real + c2.real;
    imaginary = c1.imaginary + c2.imaginary;
}

int main() {
    // Create objects for the two inputs and the addition result.
    Complex c1, c2, c3;
    int r, i;
    cout << "Enter real and imaginary parts of the first complex number: ";
    cin >> r >> i;

    c1.setData(r, i);
    c2.setData(3, 4);

    c1.print();
    c2.print();

    c3.add(c1, c2);
    cout << "After adding the two complex numbers: " << endl;
    c3.print();
    return 0;
}