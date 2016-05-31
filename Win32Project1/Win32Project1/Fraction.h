#pragma once
#include "Number.h"
class Fraction :
	public Number
{
public:
	Fraction(int,int);
	~Fraction();
	virtual void show();
private:
	int m_numerator;
	int m_denominator;
};

