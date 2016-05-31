#pragma once
#include "Number.h"

class SquareRoot :
	public Number
{
public:
	SquareRoot(int);
	~SquareRoot();
	virtual void show();
private:
	int m_value;
};

