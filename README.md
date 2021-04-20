C++ 2 Group

Sophia Brown

Alyssa Vandale

Mihajlo Chonev

Aliyah Davis

************************************************************

Meeting Times: Wednesday 4-5pm // Friday @ 3pm

************************************************************

Final Project: Tsuro Game Implementation in C++; to be able to play a game of Tsuro

Currently: displays smaller version of Tsuro board

************************************************************

Compile:

g++ -Wall -c game.cc

g++ -Wall -c Tile.cc

g++ -Wall -c Tsuro.cc

g++ -Wall -c samplemain.cc

g++ -Wall -c card.cc

g++ -Wall samplemain.o Tsuro.o Tile.o game.o

./a.out

************************************************************

Repo: https://github.com/AliMDavis/TsuroGame

************************************************************

#Instructions:

This game is about the last player alive. Each Player places a tile during their turn that connects 
with the other paths already laying on the board. If there is none, the first players move will start
the path. The goal is to place the tiles and not fall off the edge of the board. 

Rules:
- Chose who will be player 1 and player 2
- Move your character where you want to start outside of the board
- Player 1 will go first; they will place one of their tiles onto the board and follow the path - then Player 2 will go
- Take turns
- If your piece moves off the board, you lose
- To start a new game, click the "NEW GAME" button

