#include <string>
using namespace std;
#include <iostream>

void capitalizer(char* charPtr)
{
    while(*charPtr != '\0')
    {
        if(*charPtr >='a' && *charPtr <='z' )
        {
            *charPtr += 'A'-'a';
        }
        charPtr++;
    }
}
int main(int argc, char* argv[])
{
    string str{};
    cout << "please give me what you want capitalized. \n";
    getline(cin, str);
    capitalizer(const_cast<char*>(str.c_str()));
    cout << str << endl;
    return 0;
}
