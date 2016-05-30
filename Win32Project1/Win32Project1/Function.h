#pragma once
#include "Number.h"
class Function :
	public Number
{
public:
	Function();
	~Function();
	virtual void show() = 0;
protected:
	double m_value;
};

