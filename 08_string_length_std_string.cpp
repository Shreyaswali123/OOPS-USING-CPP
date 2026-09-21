/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01fe23bec249
Semester    : 7

Program No  : 08
Program Title: Length of a String Using std::string
Concept Used: std::string and Member Function

Description:
This program stores a string and displays its length using the length() member
function provided by the C++ standard string type.

===============================================================================
*/
/*
Concept Explanation:
std::string is a C++ library type that represents text. Its length() member
function returns the number of characters in the string.
*/

#include <iostream>
#include <string> // Required for std::string and its begin()/end() iterators

using namespace std;

int main() {
    // Create a string and obtain its length using the library member function.
    string str = "Hello World!"; // Converts string literal to std::string
    int length = str.length(); // Use the length() member function of std::string to get the length

    cout << "Length of the string: " << length << endl;
    return 0;
}