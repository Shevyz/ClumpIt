#pragma once
class Square
{
public:
	Square();
	~Square();
	virtual void show() = 0;

protected:
	double m_endValue;
};

