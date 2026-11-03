/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 52
Program Title: Division Exception Handling Variant
Concept Used: Exception Handling

Description:
This program is a variant of the division-by-zero exercise showing exception behavior around an invalid division.

===============================================================================
*/
/*
Concept Explanation:
Exception handling can transfer control when an invalid operation is detected during execution.
*/

// modification to the prev code (prog_5)


// write a cpp program for exception handling the divide by zero error...
// now we switch the throw and the return to see what happens ; now the exception is not handeled by us (the defind exception handle),
// it is handled by the system (eg. codeblox or vsccode or etc...)
#include<iostream>
using namespace std;

double division(int a,int b){
    int c;
if(b==0){
    c=a/b;
     throw "Division by zero condition!!!";
}
return c;
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
