


#include <iostream>


struct firstPlayer
{
    char Name[10];
    int Score;
    int PosX;
    int PosY;
    int VelX;
    int VelY;
};

struct secondPlayer
{
    char Name[10];
    int Score;
    int PosX;
    int PosY;
    int VelX;
    int VelY;
};
struct players
{
    firstPlayer playerone;
    secondPlayer playertwo;
};


struct chest1 { int PosX; int PosY; bool Collected; };
struct chest2 { int PosX; int PosY; bool Collected; };
struct chest3 { int PosX; int PosY; bool Collected; };
struct chest4 { int PosX; int PosY; bool Collected; };
struct key{int PosX;int PosY;bool Collected;};

struct collectables
{
    chest1 chest1;
    chest2 chest2;
    chest3 chest3;
    chest4 chest4;
    key key;
};


struct goal
{
    int PosX;
    int PosY;
    int WidthX;
    int HeightY;
};


struct Game
{
    players players;
    collectables items;
    goal endgoal;
    int remainingMinutes;
};

int main(int argc, char* argv[])
{
    //exercise didn't say anything about doing anything with the structs, but will add test sample.
    //test example:
    Game game;
    game.players.playerone.Score = 69;
    std::cout << game.players.playerone.Score;
    return 0;
}
