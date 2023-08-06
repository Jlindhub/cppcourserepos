#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
    int origArray[5] = {1,2,3,4,5};
    cout << "original array: ";
    for (int i : origArray) {cout << i << " ";}
    cout << "\n";
    
    for(int i=0; i<4;i++)
    {
        swap(origArray[i],origArray[i+1]);
        cout << "cycle: "<< i << ". ";
        for(int j:origArray){cout << j << " ";}
        cout << "\n";
    }
    
    cout << "modified array: ";
    for(int i:origArray){cout << i << " ";}
    return 0;
}
