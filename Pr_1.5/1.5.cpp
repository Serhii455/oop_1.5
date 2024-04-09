//1.5.cpp

#include "Date.h"
#include <iostream>

using namespace std;

int main() {
	Date dat1, dat2;
	Triad tr1;

	dat1.Read();
	dat1.Display();
	cout << dat1.toString() << endl;

	tr1.Read();
	dat2.Init(tr1);
	dat2.Display();
	cout << tr1.toString() << endl;

	dat2.incremDay();
	dat2.incremMonth();
	dat2.incremYear();
	dat2.Display();

	int n;
	cout << "(Day) n = "; cin >> n;
	dat2.moreDay(n);
	cout << "(Month) n = "; cin >> n;
	dat2.moreMonth(n);
	cout << "(Year) n = "; cin >> n;
	dat2.moreYear(n);

	dat2.Display();
}
