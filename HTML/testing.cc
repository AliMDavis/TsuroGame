#include <windows.h>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <cstddef>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
/////////////////////////////////////////////////////START TSURO GAME/////////////////////////////////////////////////////
	cout << "Do you want to start a Tsuro Game? (y/n)\n";
	char choice;
	cin >> choice;
		if(choice == 'y' || 'Y')
		{
			ShellExecute(NULL, "open", "file:///C:/Users/ovrbl/OneDrive/Desktop/TsuroProject/TsuroGame/HTML/Tsuro.html",
			NULL, NULL, SW_SHOWNORMAL);
		}else{
			cout << "Maybe next time?\n";
		}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//function to find amount of players

	//function to decide the winner

}























	/*bool game = true;
	if(game)
	{
		ofstream fout("generate.js");
		fout << "function myFunction() {\n";
		fout << "	document.getElementById(" << "\"demo\"" << ").innerHTML = " << "\"Winner!\"" << ";\n";
		fout << "}";
	}



	ShellExecute(NULL, "open", "file:///C:/Users/ovrbl/OneDrive/Desktop/TsuroProject/TsuroGame/HTML/title.html",
		NULL, NULL, SW_SHOWNORMAL);*/

	/*ShellExecute(NULL, "open", "file:///C:/Users/ovrbl/OneDrive/Desktop/TsuroProject/TsuroGame/HTML/Tsuro.html",
			NULL, NULL, SW_SHOWNORMAL);*/

			/*ShellExecute(NULL, "open", "file:///C:/Users/ovrbl/OneDrive/Desktop/TsuroProject/TsuroGame/HTML/title.html",
			NULL, NULL, SW_SHOWNORMAL);*/
	
	
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