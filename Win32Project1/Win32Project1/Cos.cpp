#include "stdafx.h"
#include "Cos.h"

Cos::Cos(double x)
{
	m_value = x;
	m_endValue = cos(x);
}

Cos::~Cos()
{
}

void Cos::show()
{
	std::cout << m_value;
}
