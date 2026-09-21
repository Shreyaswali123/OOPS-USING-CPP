/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01fe23bec249
Semester    : 7

Program No  : 06
Program Title: Find the Biggest Number in an Array
Concept Used: Arrays, Loops, and Conditional Statements

Description:
This program accepts five numbers, compares the array elements, and displays
the largest value.

===============================================================================
*/
/*
Concept Explanation:
An array stores multiple values of the same type. A loop and a conditional
statement are used to inspect the values and retain the current maximum.
*/

// Find biggest number in the array 
#include <iostream>
using namespace std;

int main() {
    // Read the array values before searching for the maximum.
    int arr[5];
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "The biggest number in the array is: " << max << endl;
    return 0;
}