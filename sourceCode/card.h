#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <vector>

using namespace std;

class card{
    public:
        card();
        void displayCard();
        int randomCard();

        //void tileOne();
        

        //NEEDED FUNCTIONS//
        //bool isOnBoard();
        //void setOnBoard();
        //void rotateLeft();
        //void rotateRight();


    private:
        int cardHeight;
        int cardWidth;
        vector <char> cardPorts;
        vector <vector<char>> tileCard;
};
#endif