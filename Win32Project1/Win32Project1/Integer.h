#pragma once
#include "Number.h"
#include <iostream>
class Integer :
	public Number
{
public:
	Integer(int );
	~Integer();
	virtual void show();
private:
	int m_value;
};

