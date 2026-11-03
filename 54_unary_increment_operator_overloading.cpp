/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 54
Program Title: Unary Increment Operator Overloading
Concept Used: Unary Operator Overloading

Description:
This program overloads prefix and postfix increment operators for a counter class.

===============================================================================
*/
/*
Concept Explanation:
Unary operator overloading defines how an operator with one operand behaves for a user-defined type.
*/

// program for unary operator overloading ... for increment operator (++)

#include<iostream>
using namespace std;

class Counter{
int val;
public:
    Counter(int v=0): val(v) {}

    Counter& operator++(){    // PREFIX ++c                // compare to this
    val++;
    return *this;
    }

Counter operator++(int){   // we write (int) because to give different signature compared to the above{Counter& operator++()}    // POSTFIX c++
Counter temp=*this;
val++;
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
