#include <iostream>

struct vector2d { int x; int y; };

struct Player
{
    char Name[10];
    int Score;
    vector2d pos;
    vector2d vel;
};

struct players
{
    Player playerOne;
    Player playerTwo;
};

struct chest
{
    vector2d pos;
    bool Collected;
};
struct key
{
    vector2d pos;
    bool Collected;
};

struct collectables
{
    chest chest1;
    chest chest2;
    chest chest3;
    chest chest4;
    key key;
};

struct goal
{
    vector2d pos;
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
    game.players.playerOne.Score = 69;
    std::cout << game.players.playerOne.Score;
    return 0;
}
