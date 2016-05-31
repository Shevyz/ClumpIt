#include "stdafx.h"
#include "Log.h"

Log::Log(double x)
{
	m_value = x;
	m_endValue = log(x);
}

Log::~Log()
{
}

void Log::show()
{
}
