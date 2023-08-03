#include <iostream>
using namespace std;

void checker(char character)
{
    if(character>='A' && character <='Z')
    {
        cout << "you gave me a capital letter.";
    }
    else if (character>='a' && character<='z')
    {
        cout << "you gave me a non-capital letter.";
    }
    else if (character>='0' && character<='9')
    {
        cout << "you gave me a number.";
    }
    else
    {
        cout << "it's neither a letter nor a number, so it's some other symbol.";
    }
}

int main(int argc, char* argv[])
{
    char input;
    cout << "please input a single character, i'll tell you what it's categorized as. \n";
    cout << "if you input multiple, only the first input will be recognized.\n";
    cin >> input;
    checker(input);
    return 0;
}
