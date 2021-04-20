#include "Tile.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

Tile::Tile(){
    piece_state = 0;
}

///gets the tile color
bool Tile::getTileColor()const{
    return Tile_color;
}
///sets the tile color
void Tile::set_TileColor(bool isBlack){
    Tile_color = isBlack;
}
///checks if tile is empty
bool Tile::is_empty(){
    if(piece_state == EMPTY){
        return true;
    }
    else{
        return false;
    }
}

///checks if the Tile is there for win condition
bool Tile::tileThere() {
    if(is_empty) return true;
    else if (getTileColor) return true;
    else return false;
}
