#pragma once
#include "Number.h"
class SquareRoot :
	public Number
{
public:
	SquareRoot();
	~SquareRoot();
	virtual void show();
private:
	int m_value;
};

