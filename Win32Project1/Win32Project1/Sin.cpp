#include "stdafx.h"
#include "Sin.h"

Sin::Sin(double x)
{
	m_value = x;
	m_endValue = sin(x);
}

Sin::~Sin()
{
}

void Sin::show()
{
}
