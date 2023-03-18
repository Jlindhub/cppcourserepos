#include <iostream>
#include <string>
using namespace std;
int main(int argc, char* argv[])
{
    cout << "how much time did Marc say it'd take? give me the number and then the time frame." <<endl;
    float marcInput;
    float marcScale = 3; //change depending on how fast you feel marc is
    string timescale;
    while(!(cin >> marcInput >> timescale))
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "invalid input, try again.";
    }
    if(marcInput*marcScale != 1 && timescale.back() != 's')
    {
        char addS = 's';
        timescale.push_back(addS);
    }
    cout << "is marc going a bit [f]aster or [s]lower today, or is it as normal?" <<endl;
    char marcfast;
    while(!(cin >> marcfast))
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "invalid input, try again.";
    }
    switch (marcfast)
    {
    case 'f':marcScale = 1.5;break;
    case 's':marcScale = 5;break;
    default:marcScale = 3;
    }
    
    cout << "right, so that'l probably take uuuh " << marcInput * marcScale << " " << timescale << "." << endl;
    system("pause");
}
