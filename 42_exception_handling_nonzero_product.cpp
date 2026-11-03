/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 42
Program Title: Exception Handling for Zero Operands
Concept Used: Exception Handling

Description:
This program checks operands before multiplication and throws an exception when a zero operand is found.

===============================================================================
*/
/*
Concept Explanation:
A program can use exceptions to report invalid conditions detected during computation.
*/

//write a cpp program to handle multiplication of 2 variables using exceptions such that the product is non-zero...
#include<iostream>
using namespace std;
int main()
{
    int x=8,y=0;
    cout<<"Before try \n";
    try{
    cout<<"Inside try \n";
    if(x==0){
       throw x;
       cout<<"After throw"<<endl; //never executed
    }
     else if(y==0){
        throw y;
         cout<<"After throw"<<endl; //never executed
     }
    }
    catch(int x){
    cout<<"Exception Caught and x= "<<x<<endl;        //  this or
    }
     catch(int y){
    cout<<"Exception Caught and y= "<<y<<endl;               // this will be executed
    }
    cout<<"After Catch"<<endl;
    return 0;
}
