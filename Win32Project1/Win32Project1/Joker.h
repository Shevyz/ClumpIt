#pragma once
#include "Square.h"
class Joker :
	public Square
{
public:
	Joker() { m_endValue = 0; }; //take away
	~Joker();
	virtual void show();
};

