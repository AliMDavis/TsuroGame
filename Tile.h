#include <iostream>
#include <iomanip>
#include <cstdlib>
#ifndef TILE_H
#define TILE_H
class Tile{
        public:
        Tile();
        bool getTileColor()const;///background color
        //int get_piece();///red or white piece
        bool is_empty();
        void set_TileColor(bool isBlack);
        //void set_piece(int piece);
        bool const static BBLACK = true;
        bool const static BWHITE = false;
        int const static EMPTY = 0;

        private:
        bool Tile_color;
        int piece_state;
};
#endif