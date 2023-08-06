#include <iostream>
using namespace std;





int main(int argc, char* argv[])
{
    char alphabet[26];
    for(int i=0; i<26; i++)
    {
        alphabet[i]=static_cast<char>(i + 65);
    }
    for (auto letter : alphabet)
    {
        cout << letter << " ";
    }


return 0;
    
}