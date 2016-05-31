#include "stdafx.h"
#include "Ex.h"

Ex::Ex(double x)
{
	m_value = x;
	m_endValue = exp(x);
}

Ex::~Ex()
{
}

void Ex::show()
{
	std::cout << m_value;
}
