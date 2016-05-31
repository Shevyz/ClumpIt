#pragma once
#include "Square.h"
#include <math.h> //for squareroot and all function classes
#include<iostream>
class Number :
	public Square
{
public:
	Number();
	~Number();
	virtual void show() = 0;
};

