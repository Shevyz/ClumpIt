#include "stdafx.h"
#include "Integer.h"

Integer::Integer(int x):m_value(x)
{
	m_endValue = double(x);

}

Integer::~Integer()
{
}

void Integer::show()
{
	std::cout<<m_value<<" ";
}
