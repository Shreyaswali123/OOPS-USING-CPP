/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 55
Program Title: Unary Decrement Behavior Using Operator Overloading
Concept Used: Unary Operator Overloading

Description:
This program applies unary operator overloading to decrement a counter value in prefix and postfix forms.

===============================================================================
*/
/*
Concept Explanation:
Unary operator overloading customizes single-operand operations for class objects, including prefix and postfix forms.
*/

// program for unary operator overloading ... for decrement operator (--)

#include<iostream>
using namespace std;

class Counter{
int val;
public:
    Counter(int v=0): val(v) {}

    Counter& operator++(){    // PREFIX --c
    val--;
    return *this;
    }

Counter operator++(int){      // POSTFIX c--
Counter temp=*this;
val--;
return temp;        // returns the old value
}

int get(){return val;}

};

int main()
{
Counter c;
c++;
cout<<"The returned value is: "<<c.get()<<endl;
++c;
cout<<"The returned value is: "<<c.get();
    return 0;
}
