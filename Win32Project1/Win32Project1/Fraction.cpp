#include "stdafx.h"
#include "Fraction.h"

Fraction::Fraction(int x, int y):m_numerator(x),m_denominator(y)
{
	m_endValue = (x / y);
}

Fraction::~Fraction()
{
}

void Fraction::show()
{
	std::cout << m_numerator << m_denominator;
}
