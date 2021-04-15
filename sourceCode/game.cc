#include <cassert>    
#include <climits>    
#include <iostream>   
#include <queue>      
#include <string>     
#include "game.h"
#include "color.h"  
#include "Tile.h"   
using namespace std;

    void game::play( ){
        restart();
	    display_board( );
    }

    game::who game::winning() const{
        //if (tileThere()) return PLAYER_2;
        //else return PLAYER_1;

    }


