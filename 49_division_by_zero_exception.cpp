/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 49
Program Title: Division by Zero Exception Handling
Concept Used: Exception Handling

Description:
This program detects division by zero and reports the condition using exception handling.

===============================================================================
*/
/*
Concept Explanation:
Exceptions allow an invalid arithmetic condition to be signaled and handled separately from normal computation.
*/

// write a cpp program for exception handling the divide by zero error...
#include<iostream>
using namespace std;

double division(int a,int b){
if(b==0){
    throw "Division by zero condition!!!";
    }
    return(a/b);
}

int main()
{
 int x=50,y=0;
 double z=0;
 try{
 z=division(x,y);
 cout<<z<<endl;
 }
 catch(const char*msg){
 cout<<msg<<endl;
 }
 return 0;
}
