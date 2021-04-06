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

    tsuroGame start;

	if(start.startGame(choice) == true)
	{
		ShellExecute(NULL, "open", "file:///C:/Users/ovrbl/OneDrive/Desktop/Tsuro/TsuroGame/HTML/Tsuro.html",
		NULL, NULL, SW_SHOWNORMAL);
	}else if(start.startGame(choice) == false){
		cout << "Maybe next time?\n";
		exit(EXIT_FAILURE);
	}
}