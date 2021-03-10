#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include "card.h"
#include "Tsuro.h"
#include "Tile.h"

using namespace std;

///////////////SETS TILE CARDS WITH PORTS///////////////
card::card()
{
    int cardHeight = 6;
    int cardWidth = 8;
    vector <char> cardPorts = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    vector <vector<char>> tileCard;

    //Card size
    tileCard.resize(cardHeight);
    for (int i = 0; i < cardHeight; ++i)
    {
        tileCard[i].resize(cardWidth);
    }

    //cardPort[0] = A       cardPort[1] = B
    //cardPort[2] = C       cardPort[3] = D
    //cardPort[4] = E       cardPort[5] = F
    //cardPort[6] = G       cardPort[7] = H

    //Fill the vector with char (card border)
    tileCard[0] = {'.', '.', cardPorts[0], '.', '.', cardPorts[1], '.', '.'};
    tileCard[1] = {':', ' ', ' ', ' ', ' ', ' ', ' ', ':'};
    tileCard[2] = {cardPorts[7], ' ', ' ', ' ', ' ', ' ', ' ', cardPorts[2]};
    tileCard[3] = {cardPorts[6], ' ', ' ', ' ', ' ', ' ', ' ', cardPorts[3]};
    tileCard[4] = {':', ' ', ' ', ' ', ' ', ' ', ' ', ':'};
    tileCard[5] = {'.', '.', cardPorts[5], '.', '.', cardPorts[4], '.', '.'};
}


///////////////DISPLAY THE BASIC DESIGN OF A TILE///////////////
void card::displayCard()
{
    //Display the card
    for(int i = 0; i < cardHeight; ++i)
    {
        for(int j = 0; j < cardWidth; ++j)
        {
            cout << tileCard[i][j];
        }
        cout << endl;
    }
}


///////////////RANDOMLY ASSIGNS TILE CARDS TO PLAYERS///////////////
int card::randomCard()
{
    //random number 1-35 to pick a random tile
    int randomNum;
    //for(int i = 0; i < 10; i++)
    //{
        randomNum = (rand() % 35) + 1;
        //cout << randomNum << endl;
    //}
    return randomNum;
}


/*void card::tileOne()
{

    //cardPorts[0] = A       cardPorts[1] = B
    //cardPorts[2] = C       cardPorts[3] = D
    //cardPorts[4] = E       cardPorts[5] = F
    //cardPorts[6] = G       cardPorts[7] = H


    char position;  //player position

    //if position = port A then position = port E
    //if position = port E then position = port A
    if(position == cardPorts[0])
    {
        position == cardPorts[4];
    }else if(position == cardPorts[4]){
        position == cardPorts[0]
    }

    //if position = port B then position = port F
    //if position = port F then position = port B
    if(position == cardPorts[1])
    {
        position == cardPorts[5];
    }else if(position == cardPorts[5]){
        position == cardPorts[1];
    }

    //if position = port C then position = port H
    //if position = port H then position = port C
    if(position == cardPorts[2])
    {
        position == cardPorts[7];
    }else if(position == cardPorts[7]){
        position == cardPorts[2];
    }

    //if position = port D then position = port G
    //if position = port G then position = port D
    if(position == cardPorts[3])
    {
        position == cardPorts[6];
    }else if(position == cardPorts[6]){
        position == cardPorts[3];
    }
    
}*/
