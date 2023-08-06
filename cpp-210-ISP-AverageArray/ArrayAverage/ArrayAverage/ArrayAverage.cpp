#include <iostream>
#include <complex>
using namespace std;
int main(int argc, char* argv[])
{
    cout << "i require 9 numbers, please give me the numbers and i will return the average.\n";
    int storageArray[9];
    for(int i=0; i<9;)
    {
        cout << "please input number " << i+1 << " now.\n";
        cin >> storageArray[i];
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "invalid input, please try again. \n";
        }
        else{ i++; }
    }
    long long gatherer =0;
    for (const int i : storageArray)
    {
        gatherer = gatherer + i;
    }
    cout << "the total for these numbers is " << gatherer << ", and the average is " << gatherer/9 << ". \n ";
    system("pause");
    return 0;
}
