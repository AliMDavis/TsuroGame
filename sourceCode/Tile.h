#include <iostream>
#include <iomanip>
#include <cstdlib>
#ifndef TILE_H
#define TILE_H
class Tile{

        public:
                Tile();
                bool getTileColor()const;///background color
                bool is_empty();
                void set_TileColor(bool isBlack);
                bool const static BBLACK = true;
                bool const static BWHITE = false;
                int const static EMPTY = 0;

        private:
                bool Tile_color;
                int piece_state;

               

};
#endif