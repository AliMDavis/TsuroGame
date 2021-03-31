<<<<<<< HEAD:Tsuro.h
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

    //this is a function that will be implemented in later stages of this project
    bool is_vaild();

    void load_tiles(vector<Tile> tiles);

private:
    Tile board[3][3];
    vector<Tile> IndividualTile;

    //this will be implemented later in the project
    //it is the vector that will hold all the players moves
    vector<string> player_moves;

    vector<Tile> tiles;
};

=======
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

>>>>>>> master:sourceCode/Tsuro.h
#endif