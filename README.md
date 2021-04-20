# C++ 2 Group

Sophia Brown

Alyssa Vandale

Mihajlo Chonev

Aliyah Davis

************************************************************

**Meeting Times:** Wednesday 4-5pm // Friday @ 3pm 
(We meet other days if necessary and we all agree on an open time slot.)

************************************************************

**Final Project:** 2 player Tsuro Game on a 6x6 board

************************************************************

**Compile:**

g++ -Wall -c tsuroGame.cc main.cc
g++ -Wall tsuroGame.o main.o
./a.exe


**Compile Test Cases:**
g++ -Wall -c tsuroGame.cc testCases.cc
g++ -Wall tsuroGame.o testCases.o
./a.exe

************************************************************

**Repo:** https://github.com/AliMDavis/TsuroGame

************************************************************

# Instructions:

This game is about the last player alive. Each Player places a tile during their turn that connects 
with the other paths already laying on the board. If there is none, the first players move will start
the path. The goal is to place the tiles and not fall off the edge of the board. 

**Rules:**
- Chose who will be player 1 and player 2
- Move your character where you want to start outside of the board
- Player 1 will go first; they will place one of their tiles onto the board and follow the path - then Player 2 will go
- Take turns
- If your piece moves off the board, you lose
- To start a new game, click the "NEW GAME" button

*************************************************************

# Notes: 

- The win function is not fully implemented, players can see who wins in real time to see who wins and judge for themselves. 

*************************************************************

# To Do List for Next Devs:

1. win fuction for when a player goes off the board it returns the player who won
2. adding more players and support for more players
3. fixing the file locations to happen when a person downlaods it they don't have to change their file name
4. smoother player moving
5. AI moving a piece
6. moving pieces without using keys, the program does it for you when you place a tile

*************************************************************

Thank you for playing our game and checking out our GitHub! I hope you had fun!

