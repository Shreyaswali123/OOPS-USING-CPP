/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01fe23bec249
Semester    : 7

Program No  : 12
Program Title: Time Class with Member Function Arguments
Concept Used: Class, Object, and Member Functions with Arguments

Description:
This program defines a Time class, initializes two objects through a member
function with arguments, and displays both times.

===============================================================================
*/
/*
Concept Explanation:
Member functions can receive parameters to set or process an object's data.
Objects provide separate instances of the same class.
*/

// define class Time with  members hour,minute and second. Also define function to setTime() to initialize the members, print() to display time. Demonstrate class Time for two objects

#include <iostream>
using namespace std;

class Time {
    private:
        int hour, minute, second;

    public:
        void setTime(int h, int m, int s);
        void print();
};

void Time::setTime(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
}

void Time::print() {
    cout << "Time: " << hour << ":" << minute << ":" << second << endl;
}

int main() {
    // Create two Time objects and initialize them through a member function.
    Time t1, t2;
    int h, m, s;
    cout << "Enter time in hours, minutes and seconds: ";
    cin >> h >> m >> s;

    t1.setTime(h, m, s);
    t2.setTime(14, 15, 20);

    t1.print();
    t2.print();

    return 0;
}