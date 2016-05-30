#pragma once
#include "Square.h"

template <class size, class seq>
class Board
{
public:
	Board();
	~Board();
private:
	Square* std::array[size][size] m_squares;
};

template<class size, class seq>b
inline Board<size, seq>::Board()
{
}

template<class size, class seq>
inline Board<size, seq>::~Board()
{
}
