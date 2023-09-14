using namespace std;
#include <iostream>

bool palindrome(char* startPtr, int length)
{
    char* endPtr = startPtr + length-1;
    while(*endPtr == '\0') 
    {
        endPtr--;
    }
    while(startPtr <= endPtr)
    {
        if(*startPtr != *endPtr){return false;}
        startPtr++;
        endPtr--;
    }
    return true;
}

int main(int argc, char* argv[])
{
    char inputWord[20]{};
    cout << "what word would you like to palindrome-check? max length 20 characters.\n";
    cin >> inputWord;
    cout << palindrome(inputWord,size(inputWord));
    
    return 0;
}
