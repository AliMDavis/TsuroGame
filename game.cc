#include <cassert>    
#include <climits>    
#include <iostream>   
#include <queue>      
#include <string>     
#include "game.h"     
using namespace std;

    //*************************************************************************
    // STATIC MEMBER CONSTANTS
    // const int game::SEARCH_LEVELS;
    //*************************************************************************
    // PUBLIC MEMBER FUNCTIONS

    void game::play( ){
        restart();
	    display_board( );
    }



