#ifndef TSURO_H
#define TSURO_H
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string> 
#include <vector>
#include "Tile.h"
#include "game.h"
using namespace std;

class Tsuro:public game{
    public:
    //void display_board();
    void restart();
    virtual void display_board( ) const;
    void transferTile(vector<Tile> IndividualTile);

    private:
    Tile board[3][3];
    vector<Tile> IndividualTile;
};

#endif