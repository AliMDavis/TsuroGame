#ifndef TESTING_H
#define TESTING_H
#include <windows.h>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <cstddef>
#include <cstdlib>

using namespace std;

class tsuroGame
{
    public:
        bool startGame(char choice);      //Does the user want to start a game or not
        string whoWins(bool player1, bool player2);                 //Which player wins the game
        string numOfPlayers(string fileName);

    private:
        bool player1, player2;

};
#endif