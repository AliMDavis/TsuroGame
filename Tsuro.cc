#include "Tile.h"
#include "Tsuro.h"
#include "color.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;

void Tsuro::restart(){
    game::restart();
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            board[i][j].set_TileColor(Tile::BWHITE );   
        }
    }
}

void Tsuro::display_board() const{
    cout << B_BLACK << WHITE << "" << endl;
        ///displaying just the colors of the background
        cout << B_GREEN << BLACK;
        cout << "                      " << endl;
        cout << "       A    B    C    " << endl;
        cout << "                      " << endl;
        
        for(int i = 0; i < 3; i++){
            cout << B_GREEN << BLACK ;
            cout << "     ";
            cout << B_BLACK << WHITE;
            for(int j = 0; j < 3; j++){
                if(board[i][j].getTileColor()){
                    cout << B_BLACK<< "      ";
                }
                else{
                    cout << B_WHITE<< "      ";
                }
            }
            cout<< B_GREEN << endl;
            cout << B_GREEN << BLACK ;
            cout << "  " << 3-i << "  ";
            cout << B_BLACK << WHITE;
            for(int j = 0; j < 3; j++){
                string outString = "      ";
                Tile s = board[i][j];
                if(s.getTileColor()){
                    cout << B_BLACK;
                }
                else{
                    cout << B_WHITE;
                }
                cout << outString;
            }
            cout<< B_GREEN << endl;
            cout << B_GREEN << BLACK ;
            cout << "     ";
            cout << B_BLACK << WHITE;
            for(int j = 0; j < 3; j++){
                if(board[i][j].getTileColor()){
                    cout << B_BLACK<< "      ";
                }
                else{
                    cout << B_WHITE<< "      ";
                }
            }
            cout<< B_GREEN << endl;

        }
    cout << B_BLACK << WHITE << endl;
}