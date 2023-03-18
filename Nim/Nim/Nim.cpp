#include <forward_list>
#include <iostream>
#include <valarray>
#include <random>
#include <time.h>
using namespace std;

int main()
{
    cout << "welcome to the game of nim. i will assume you know how to play and that you want me at proper capability, since you've already seen this game.\n";
    cout << "i will flip a coin to determine who starts. 1 means you start, 0 means i start.\n";
    srand(time(0));
    bool turn = rand() % 2;
    cout << "the coinflip returned... ";

    if(turn){cout<<"1. you will start.\n";}
    else{cout<<"0. i will start.\n";}

    int pilesize = 8 + (rand() % 24);
    bool gameActive = true;

    while(gameActive)
    {
        for(int i=0; i<pilesize; i++){std::cout<<"I";}
        cout << "\n" << pilesize << " sticks left in the pile. \n";

        if(turn) //player turn
            {
            bool validmove = true;
            cout << "player turn. draw 1, 2, or 3 sticks.\n";
            int playerdraw;
            try{cin >> playerdraw; if(playerdraw>3 || playerdraw<1){throw 69420;}}
            catch (...)
            {
                cout << "invalid number, please try again\n";
                validmove = false;
            }
            if(validmove){pilesize -= playerdraw;}
            if(pilesize<=0){cout<<"seems you lost. better luck next time."; break;}
            if(validmove){turn=false;}
            }
        else
        {
            int aidraw = -1 + pilesize % 4;
            if (aidraw == 0) { aidraw =1+ rand() % 3;}
            if(aidraw ==-1) {aidraw=3;}
            cout << "my turn. i draw " << aidraw <<". \n";
            pilesize -= aidraw;
            if(pilesize<=0){cout<<"seems i lost. good work."; break;}
            turn=true;
        }
    }
}