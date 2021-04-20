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
	
	//Enter file location:
	//Enter generate.js:

    tsuroGame tg;

	if(tg.startGame(choice) == true)
	{
		ShellExecute(NULL, "open", "file:///C:/Users/samar/OneDrive/Desktop/TsuroGame/source/Tsuro.html",
		NULL, NULL, SW_SHOWNORMAL);
	}else if(tg.startGame(choice) == false){
		cout << "Maybe next time?\n";
		exit(EXIT_FAILURE);
	}

    //need to finish whoWins()
    string winner;
    bool p1, p2;
    winner = tg.whoWins(p1, p2);

	//string fileName = "generate.js";
	string fileName = "players.txt";
	tg.numOfPlayers(fileName);
}