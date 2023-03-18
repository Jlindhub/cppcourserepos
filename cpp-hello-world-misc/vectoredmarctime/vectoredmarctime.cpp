

#include <iostream>
using namespace std;
struct vector2d
{
    int x;
    int y;
};

int main(int argc, char* argv[])
{
    cout << "hello. i add 2d vectors. please input the x coord now." << endl;
    vector2d firstPair;
    while(!(cin >> firstPair.x))
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "invalid input, please try again.";
    }
    cout << "please input the y coord now." << endl;
    while(!(cin >> firstPair.y))
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "invalid input, please try again.";
    }

    cout << "now for the second one. please input the second x coord now." << endl;
    vector2d secondPair;
    while(!(cin >> secondPair.x))
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "invalid input, please try again.";
    }
    cout << " please input the second y coord now." << endl;
    while(!(cin >> secondPair.y))
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "invalid input, please try again.";
    }
    cout << "you have given me: vector 1: x = " << firstPair.x <<" , y = "<< firstPair.y << " , and vector 2 x = " << secondPair.x <<" , y = "<< secondPair.y << endl;
    vector2d resultvector;
    resultvector.x = firstPair.x + secondPair.x;
    resultvector.y = firstPair.y + secondPair.y;
    cout << "together they form the vector x = "<< resultvector.x << " y = " << resultvector.y << endl;
    system("pause");
}
