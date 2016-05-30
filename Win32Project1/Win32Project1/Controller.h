#pragma once
#include "Board.h"
#include "Validator.h"
#include "Player.h"

class Controller
{
public:
	Controller();
	~Controller();

private:
	Board <5, 3> m_board;
	std::vector<Validator*> m_validators;
	std::vector <Player> m_players;

};

