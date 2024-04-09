//Date.h

#pragma once
#include "Triad.h"
#include <string>

class Date
{
	Triad triad;
public:
	void Init(Triad);
	void Read();
	void Display() const;

	void incremDay();
	void incremMonth();
	void incremYear();

	void moreDay(int n);
	void moreMonth(int n);
	void moreYear(int n);

	std::string toString();
};
