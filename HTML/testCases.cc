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

        REQUIRE(temp.startGame(choice) == true);
    }

    SECTION("Doesn't open webpage")
    {
        tsuroGame temp;
        char choice = 'n';

        REQUIRE(temp.startGame(choice) == false);
    }
}