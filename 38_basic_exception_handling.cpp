/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 38
Program Title: Basic Exception Handling
Concept Used: Exception Handling

Description:
This program throws and catches an integer exception using try, throw, and catch blocks.

===============================================================================
*/
/*
Concept Explanation:
Exception handling separates error signaling with throw from error processing with catch around a try block.
*/

//Example 1 of Exception Handling.
#include<iostream>
using namespace std;
int main()
{
    int x=-1;
    cout<<"Before try \n";
    try{
    cout<<"Inside try \n";
    if(x<0){
       throw x;
       cout<<"After throw"<<"(never executed)\n";
    }
    }
    catch(int x){
    cout<<"Exception Caught and x= "<<x<<endl;
    }
    cout<<"After Catch"<<"(will be executed) \n";
    return 0;
}
