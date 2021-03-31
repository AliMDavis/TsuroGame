#include <cassert>    
#include <climits>    
#include <iostream>   
#include <queue>      
#include <string>     
#include "game.h"     
using namespace std;

    void game::play( ){
        restart();
	    display_board( );
    }

    game::who game::winning() const{
        //defult until we implement all the functions for the game
        return PLAYER_1;
    }


