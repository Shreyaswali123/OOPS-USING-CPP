/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 32
Program Title: String Concatenation Using Operator Overloading
Concept Used: Binary Operator Overloading

Description:
This program defines an overloaded plus operator for a class intended to combine string values.

===============================================================================
*/
/*
Concept Explanation:
Operator overloading gives an operator a class-specific meaning while retaining the operator syntax.
*/

// program for binary operator overloading ... to concatinate two strings

//write a c++ program to add two complex numbers with operator overloading.
#include<iostream>
using namespace std;

class String_Concat{
string str_1, str_2;
public:

   String_Concat(string r=0): str_1(r){};
    String_Concat operator+(const String_Concat &s){                // operator function
    return String_Concat(str_1 + str_2);
    }
    void show() { cout << s ; }
};

int main(){
String_Concat a("hi"), b("bye");
String_Concat s = a + b;       // calls a.operator+(b)
s.show();
}
