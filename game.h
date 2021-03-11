#ifndef GAME_H
#define GAME_H
#include <string>  // Provides string
using namespace std;
    class game
    {
    public:

    //these are to know who wins and who is currently moving
    enum who{
        PLAYER_1, PLAYER_2, PLAYER_3, PLAYER_4
    };

	game( ) { move_number = 0; }
	void play( );
	virtual void restart( ) { move_number = 0; }
	virtual void display_board( ) const = 0;

    //these are functions that will be needed and implemented in later stages of this project
    virtual who winning() const;

    virtual void make_move(const string& move){
        ++move_number;
        //cout << "Move Number = " << move_number << endl;
    }


    private:
        // MEMBER VARIABLES
	int move_number;                     // Number of moves made so far
    };

#endif