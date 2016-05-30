#pragma once
#include <vector>

class Validator
{
public:
	Validator();
	~Validator();
	virtual bool Validate() = 0;
protected:
	std::vector<int> m_sequence;
};

