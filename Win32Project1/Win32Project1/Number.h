#pragma once
#include "Square.h"
class Number :
	public Square
{
public:
	Number();
	~Number();
	virtual void show() = 0;
};

