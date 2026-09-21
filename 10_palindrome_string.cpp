/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01fe23bec249
Semester    : 7

Program No  : 10
Program Title: Check Whether a String Is a Palindrome
Concept Used: String Handling, Loops, and Conditional Statements

Description:
This program compares characters from opposite ends of an input string to
determine whether the string reads the same in both directions.

===============================================================================
*/
/*
Concept Explanation:
A palindrome remains the same when reversed. Comparing matching characters
from the two ends provides a way to test this property.
*/

// Write a c++ program to check palindrome of a string without using the built-in function
#include <iostream>
#include <string>
using namespace std;
int main() {
    // Compare corresponding characters from the beginning and end.
    string str;
    cin>>str;
    int length = str.length();
    bool isPalindrome = true;
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }
    return 0;
}
