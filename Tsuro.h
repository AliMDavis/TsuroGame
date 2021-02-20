#ifndef TSURO_H
#define TSURO_H
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string> 
#include "Tile.h"
#include "game.h"
using namespace std;

class Tsuro:public game{
    public:
    void display_board();

    private:
    Tile board[3][3];
};

#endif