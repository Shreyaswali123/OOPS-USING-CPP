/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01FE23BEC249
Semester    : 7TH

Program No  : 46
Program Title: Exception Handling with Different Exception Types
Concept Used: Exception Handling

Description:
This program demonstrates throwing an exception and handling it according to its type.

===============================================================================
*/
/*
Concept Explanation:
Exception handlers can be selected by the type of the value thrown from a try block.
*/

//write a cpp program to handle multiplication of 2 variables using exceptions such that the product is non-zero...
 // Sirs re modeled because throw is type differed like one throw per datatype

#include<iostream>
using namespace std;
int main()
{
    int x=2,y=0;
    cout<<"Before try \n";
    try{
    cout<<"Inside try \n";
    if(x==0){
       throw x;
       cout<<"After throw"<<endl; //never executed
    }
     else if(y==0){
        throw 2.50;
         cout<<"After throw"<<endl; //never executed
     }
    }
    catch(int x){
    cout<<"Exception Caught and x= "<<x<<endl;        //  this or
    }
     catch(double z){
    cout<<"Exception Caught and y= "<<z<<endl;               // this will be executed
    }
    cout<<"After Catch"<<endl;
    return 0;
}
