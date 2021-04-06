#include <windows.h>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <cstddef>
#include <cstdlib>

#include "tsuroGame.h"

using namespace std;

/////////////////////////////START-TSURO-GAME/////////////////////////////
bool tsuroGame::startGame(char choice)
{
		if(choice == 'y' || 'Y')
		{
			return true;
		}else{
			return false;
		}
}
///////////////////////////////////////////////////////////////////////////


//////////////////////////WHICH PLAYER WINS GAME//////////////////////////
string tsuroGame::whoWins(bool player1, bool player2)
{
	string str;

	if(player1)
	{
		return str = "Player 1 Wins!";
	}else{
		return str = "Player 2 Wins!";
	}
}
///////////////////////////////////////////////////////////////////////////

