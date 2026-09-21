/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01fe23bec249
Semester    : 7

Program No  : 09
Program Title: Length of a String Without a Built-in Length Function
Concept Used: Character Arrays and Loops

Description:
This program counts characters in a null-terminated character array by
iterating until the null character is found.

===============================================================================
*/
/*
Concept Explanation:
A C-style string is terminated by '\0'. Traversing the array until that
terminator allows the length to be counted manually.
*/

// write a c++ program to find the length of a string without using the built-in function```cpp
#include <iostream>
using namespace std;
int main() {
    // Count characters until the null terminator is reached.
    char str[] = "Hello World! namaste";
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }
    cout << "Length of the string: " << length << endl;
    return 0;
}