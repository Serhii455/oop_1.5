//Date.cpp

#include "date.h"
#include <iostream>
#include <sstream>

using namespace std;

void Date::Init(Triad t) {
    triad = t;
}

void Date::Read() {
    int d, m, y;
    cout << "Enter Day: ";
    cin >> d;
    cout << "Enter Month: ";
    cin >> m;
    cout << "Enter Year: ";
    cin >> y;
    triad.setDay(d);
    triad.setMonth(m);
    triad.setYear(y);
}

void Date::Display() const {
    cout << endl;
    cout << "d: " << triad.getDay() << "\nm: " << triad.getMonth() << "\ny: " << triad.getYear() << endl;
    cout << endl;
}

void Date::incremDay() {
    triad.incremDay();
}

void Date::incremMonth() {
    triad.incremMonth();
}

void Date::incremYear() {
    triad.incremYear();
}

void Date::moreDay(int n) {                                                 
    triad.setDay(triad.getDay() + n);
}

void Date::moreMonth(int n) {
    triad.setMonth(triad.getMonth() + n);
}

void Date::moreYear(int n) {
    triad.setYear(triad.getYear() + n);
}

std::string Date::toString() {
    stringstream sout;
    sout << triad.getDay() << "." << triad.getMonth() << "." << triad.getYear();
    return sout.str();
}   
