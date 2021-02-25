#ifndef GAME_H
#define GAME_H
#include <string>  // Provides string
using namespace std;
    class game
    {
    public:
	game( ) { move_number = 0; }
	void play( );
	virtual void restart( ) { move_number = 0; }
	virtual void display_board( ) const = 0;

    private:
        // MEMBER VARIABLES
	int move_number;                     // Number of moves made so far
    };

#endif