#ifndef GAME_H
#define GAME_H
#include <queue>   // Provides queue<string>
#include <string>  // Provides string
using namespace std;
    class game
    {
    public:
    	// ENUM TYPE
	//enum who { HUMAN, NEUTRAL, COMPUTER }; // Possible game outcomes
	// CONSTRUCTOR and DESTRUCTOR
	game( ) { move_number = 0; }
	//virtual ~game( ) { }
	void play( );

    private:
        // MEMBER VARIABLES
	int move_number;                     // Number of moves made so far
    };

#endif