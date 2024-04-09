//Triad.cpp

#include "Triad.h"
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

void Triad::incremDay() {
	int tmp = getDay();
	setDay(++tmp);
}

void Triad::incremMonth() {
	int tmp = getMonth();
	setMonth(++tmp);
}

void Triad::incremYear() {
	int tmp = getYear();
	setYear(++tmp);
}

std::string Triad::toString() {
	std::stringstream sout;
	sout << getDay() << "." << getMonth() << "." << getYear();
	return sout.str();
}

bool Triad::Init(int d, int m, int y) {
	if (y <= 2100 && y >= 0 && m <= 12 && m >= 1 && d <= 31 && d >= 1) {
		setDay(d);
		setMonth(m);
		setYear(y);
		return true;
	}
	else return false;
}

void Triad::Read() {
	int d, m, y;
	do {
		cout << "Enter day: ";
		cin >> d;
		cout << "Enter month: ";
		cin >> m;
		cout << "Enter year: ";
		cin >> y;
	} while (!Init(d, m, y));

}

void Triad::Display() const {
	cout << "d: " << getDay() << "\nm: " << getMonth() << "\ny: " << getYear() << endl;
}
