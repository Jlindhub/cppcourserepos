#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
    int numbergiven=0;
   
    cout << "please input your age, i'll tell you how old you'll be a year from now.\n";
    cin>>numbergiven;
    if(numbergiven!=0)
    {
        cout<<"you will be "<<numbergiven+1;
    }
    else
    {
        cout<<"i can't help you if you won't give me a numerical value.";
    }
    return 0;
}