#pragma once
#include "Square.h"
#include "Integer.h"
#include "Cos.h"
#include "Ex.h"
#include "Fraction.h"
#include "Function.h"
#include "Joker.h"
#include "Log.h"
#include "Sin.h"
#include "Tan.h"
#include "SquareRoot.h"

#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include<vector>
#include <iostream>

//            0      1         2       3         4          5       6      7       8        9
enum squares { joker, function, fraction, integer, squareroot, logorithm, sinus, tangens, cosinus, exponential };

template <int size>
class Board
{
public:
	Board();
	~Board();
private:
	std::vector<std::vector<Square*>> m_array;
	int m_range;
};


template<int size>
inline Board<size>::Board()
{
	//should randomly build all different types
	m_array.resize(size);
	m_range = size*size;
	srand(time(NULL));

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++) {
			switch (rand() % 5)
			{
			case joker:m_array[i].emplace_back(new Joker); break;
			case function:
			{
				double num = rand() % m_range;
				switch (rand() % 5 + 5) //choose one of the fucntions
				{
				case exponential:m_array[i].emplace_back(new Ex(num)); break;
				case logorithm:m_array[i].emplace_back(new Log(num)); break;
				case sinus:m_array[i].emplace_back(new Sin(num)); break;
				case cosinus:m_array[i].emplace_back(new Cos(num)); break;
				case tangens:m_array[i].emplace_back(new Tan(num)); break;
				}
			}break;
			case squareroot: {
				int num = rand() % m_range / 2;
				m_array[i].emplace_back(new SquareRoot(sqrt(num))); //this way its defientely a number whose square root is integer
				break;
			}
			case integer:
			{
				m_array[i].emplace_back(new Integer(rand() % m_range));
				break;
			}
			case fraction:m_array[i].emplace_back(new Fraction(rand() % m_range, rand() % m_range)); break;
			}
			//std::cout << m_array[i][j]->getEnd() << " ";


		}
	}


	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++) {
			m_array[i][j]->show();
			std::cout << " ";
		}

		std::cout << std::endl;
	}

}

template<int size>
inline Board<size>::~Board()
{
}
