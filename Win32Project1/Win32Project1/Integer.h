#pragma once
#include "Number.h"
class Integer :
	public Number
{
public:
	Integer();
	~Integer();
	virtual void show();
private:
	int m_value;
};
