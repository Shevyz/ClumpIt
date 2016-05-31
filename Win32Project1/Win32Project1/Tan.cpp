#include "stdafx.h"
#include "Tan.h"

Tan::Tan(double x)
{
	m_value = x;
	m_endValue = tan(x);
}

Tan::~Tan()
{
}

void Tan::show()
{
}
