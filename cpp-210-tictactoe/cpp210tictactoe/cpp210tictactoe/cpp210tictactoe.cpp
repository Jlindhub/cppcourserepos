#include <iostream>
using namespace std;
bool positionUnoccupied(int selected, char row[])
{
    if(row[selected] == '1' || row[selected] == '2' || row[selected] == '3' ) {return true;} //+48 is due to this being an ASCII value comparison.
    return false;
    
}
int main(int argc, char* argv[])
{
    char firstrow[3] = {'1','2','3'};
    char secondrow[3] = {'1','2','3'};
    char thirdrow[3]= {'1','2','3'};
    cout << "welcome to tic tac toe. this is a lightweight version that only has pvp. small indie developer please understand. \n";
    cout << "instructions: first select the row (1,2,3 top to bottom) and then the position in that row (1,2,3 left to right). \n";
    cout << "player 1 will have Xes, player 2 will have O's.  player one starts. \n";
    bool gaming = true;
    bool playerOneTurn = true;
    while(gaming)
    {
        cout << firstrow[0] << " | " << firstrow[1] << " | " << firstrow[2] << "\n";
        cout << "---------\n";
        cout << secondrow[0] << " | " << secondrow[1] << " | " << secondrow[2] << "\n";
        cout << "---------\n";
        cout << thirdrow[0] << " | " << thirdrow[1] << " | " << thirdrow[2] << "\n";
    
        if(playerOneTurn)
        {
            int rowselection;
            int placeselection;
            cout << "player one, please make your selection.\n";
            cout << "row, then place in row.\n";
            try{cin >> rowselection; if(rowselection>3 || rowselection<1){throw 69420;}}
            catch (...){cout << "invalid selection, please try again\n";continue;}
            
            try{cin >> placeselection; if(placeselection>3 || placeselection<1){throw 69420;}}
            catch (...){cout << "invalid selection, please try again\n";continue;}
            
            switch (rowselection)
            {
            case 1:
                //todo: insert check if position is occupied
                if(positionUnoccupied(placeselection, firstrow)){firstrow[placeselection-1] = 'X';}
                else{ cout<<"that place is already occupied, please try again.\n";continue; }
                break;
            case 2:
                if(positionUnoccupied(placeselection, secondrow)){secondrow[placeselection-1] = 'X';}
                else{ cout<<"that place is already occupied, please try again.\n";continue; }
                break;
            case 3:
                if(positionUnoccupied(placeselection, thirdrow)){thirdrow[placeselection-1] = 'X';}
                else{ cout<<"that place is already occupied, please try again.\n";continue; }
                break;
            default:
                cout << "something broke lol";
                break;
            }
            //todo: insert win check
            playerOneTurn = false;
            continue;
        }
        
        if(!playerOneTurn)
        {
            int rowselection;
            int placeselection;
            cout << "player two, please make your selection.\n";
            cout << "row, then place in row.\n";
            try{cin >> rowselection; if(rowselection>3 || rowselection<1){throw 69420;}}
            catch (...){cout << "invalid selection, please try again\n";continue;}
            
            try{cin >> placeselection; if(placeselection>3 || placeselection<1){throw 69420;}}
            catch (...){cout << "invalid selection, please try again\n";continue;}
            
            switch (rowselection)
            {
            case 1:
                if(positionUnoccupied(placeselection, firstrow)){firstrow[placeselection-1] = 'O';}
                else{ cout<<"that place is already occupied, please try again.\n";continue; }
                break;
            case 2:
                if(positionUnoccupied(placeselection, secondrow)){secondrow[placeselection-1] = 'O';}
                else{ cout<<"that place is already occupied, please try again.\n";continue; }
                break;
            case 3:
                if(positionUnoccupied(placeselection, thirdrow)){thirdrow[placeselection-1] = 'O';}
                else{ cout<<"that place is already occupied, please try again.\n";continue; }
                break;
            default:
                cout << "something broke lol";
                break;
            }
            //todo: insert win check
            playerOneTurn = true;
            continue;
        }

    
        return 0;
    }
}
