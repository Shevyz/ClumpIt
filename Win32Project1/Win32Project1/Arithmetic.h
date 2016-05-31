#pragma once
#include "Validator.h"
class Arithmetic :
	public Validator
{
public:
	Arithmetic();
	~Arithmetic();
	virtual bool Validate(std::vector<int>);

};