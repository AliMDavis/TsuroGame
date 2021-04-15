#include <windows.h>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <cstddef>
#include <cstdlib>

#include "tsuroGame.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Do you want to start a Tsuro Game? (y/n)\n";
	char choice;
    cin >> choice;

    tsuroGame tg;

	if(tg.startGame(choice) == true)
	{
		ShellExecute(NULL, "open", "file:///C:/Users/samar/OneDrive/Desktop/TsuroGame/HTML/Tsuro.html",
		NULL, NULL, SW_SHOWNORMAL);
	}else if(tg.startGame(choice) == false){
		cout << "Maybe next time?\n";
		exit(EXIT_FAILURE);
	}

    //need to grab p1 and p2
    string winner;
    bool p1, p2;
    winner = tg.whoWins(p1, p2);

	string fileName = "generate.js";
	bool open = tg.numOfPlayers(fileName);
}