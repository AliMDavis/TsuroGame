#include <windows.h>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <cstddef>
#include <cstdlib>

#include "tsuroGame.h"

using namespace std;

/////////////////////////////START-TSURO-GAME/////////////////////////////
bool tsuroGame::startGame(char choice)
{
		if(choice == 'y' || 'Y')
		{
			return true;
		}else{
			return false;
		}
}
///////////////////////////////////////////////////////////////////////////




















	//function to find amount of players

	//function to decide the winner

	/*ifstream ins("generate.js");
	string line;
		while(getline(ins, line))
		{
			cout << line << endl;
		}*/
	/*bool game = true;
	if(game)
	{
		ofstream fout("generate.js");
		fout << "function myFunction() {\n";
		fout << "	document.getElementById(" << "\"demo\"" << ").innerHTML = " << "\"Winner!\"" << ";\n";
		fout << "}";
	}
	
	/*if (argc == 2) {
        ifstream textFile(argv[1]);

        if (textFile) 
		{
            ofstream htmlFile("title.html");
            if (htmlFile) {

                htmlFile << "<html>" << '\n' << "<head>" << '\n' <<"<title>" << argv[1] << "</title>" << '\n' << "</head>" << 
				'\n' << "<body>" << '\n';

                std::string line{};
                while (std::getline(textFile, line)) {
                    // Write the line and append a <br>
                    htmlFile << line << "<br>" << '\n';
                }

                htmlFile << "</body>" << '\n' << "</html>" << '\n';
            }

    	}*/
    //}


    //return 0;


//}