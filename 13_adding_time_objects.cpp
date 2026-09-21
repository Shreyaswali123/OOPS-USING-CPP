/*
===============================================================================
Name        : Shreyas P Wali
Roll No     : 516
Division    : E
SRN         : 01fe23bec249
Semester    : 7

Program No  : 13
Program Title: Adding Time Objects as Function Arguments
Concept Used: Class, Object, and Objects as Function Arguments

Description:
This program creates Time objects and passes two of them to a member function
that calculates and stores their combined time.

===============================================================================
*/
/*
Concept Explanation:
An object can be supplied as an argument to a function. A member function can
use the private data of object arguments belonging to the same class.
*/

#include <iostream>
using namespace std;

class Time {
    private:
        int hour, minute, second;

    public:
        void setTime(int h, int m, int s);
        void addTime(Time t1, Time t2);
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

void Time::addTime(Time t1, Time t2) {
    int totalSeconds = (t1.hour * 3600 + t1.minute * 60 + t1.second) + (t2.hour * 3600 + t2.minute * 60 + t2.second);
    hour = totalSeconds / 3600;
    minute = (totalSeconds % 3600) / 60;
    second = totalSeconds % 60;
}

int main() {
    // Create input, fixed, and result Time objects.
    Time t1, t2, t3;
    int h, m, s;
    cout << "Enter time in hours, minutes and seconds: ";
    cin >> h >> m >> s;

    t1.setTime(h, m, s);
    t2.setTime(14, 15, 20);

    t1.print();
    t2.print();
    t3.addTime(t1, t2);
    cout << "After adding the two times: "<<endl;
    t3.print();
    return 0;
}