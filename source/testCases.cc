#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "tsuroGame.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

TEST_CASE("OPEN WEBPAGE")
{
    SECTION("Opens webpage")
    {
        tsuroGame temp;
        char choice = 'y';

        //User wants to open the game
        REQUIRE(temp.startGame(choice) == true);
    }

    SECTION("Doesn't open webpage")
    {
        tsuroGame temp;
        char choice = 'n';
        
        //User does not want to open the game
        REQUIRE(temp.startGame(choice) == false);
    }
}


TEST_CASE("Get number of players")
{
    SECTION("2 players")
    {
        tsuroGame temp;
        string tempFile = "players.txt";

        string s = temp.numOfPlayers(tempFile);
        //User wants to open the game
        REQUIRE(s == "2");
    }
}
/*TEST_CASE("Opening generate.js file")
{
    SECTION("Opens file")
    {
        tsuroGame temp;
        string tempFile = "temp.txt";
        bool open;

        open = temp.numOfPlayers(tempFile);
        //User wants to open the game
        REQUIRE(open == false);
    }


}*/

TEST_CASE("WHO IS WINNER")
{
    SECTION("Player 1 wins")
    {
        tsuroGame temp;
        bool p1 = true, p2 = false;
        string win;
        string req = "Player 1 Wins!";

        win = temp.whoWins(p1, p2);
        REQUIRE(win == req);

    }

    SECTION("Player 2 wins")
    {
        tsuroGame temp;
        bool p1 = false, p2 = true;
        string win;
        string req = "Player 2 Wins!";

        win = temp.whoWins(p1, p2);
        REQUIRE(win == req);
    }
}