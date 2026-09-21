/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01fe23bec249
Semester    : 7

Program No  : 07
Program Title: Read and Display Basic Student Data
Concept Used: Basic C++ Input/Output and Primitive Data Types

Description:
This program reads an integer, a floating-point value, and a character, then
displays each value with a label.

===============================================================================
*/
/*
Concept Explanation:
C++ provides primitive data types for different kinds of values. Stream
operators are used here to read and display those values.
*/

#include<iostream>

int main()
{
    // Store values of three different primitive data types.
    int age;
    float gpa;
    char grade;
    std::cin>>age>>gpa>>grade;
    std::cout<<"Age: "<<age<<std::endl;
    std::cout<<"GPA: "<<gpa<<std::endl;
    std::cout<<"Grade: "<<grade<<std::endl;
    return 0;
} 