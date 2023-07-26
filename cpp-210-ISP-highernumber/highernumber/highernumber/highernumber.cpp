#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
    int firstnum;
    int seconum;
    cout << "please input two numbers, and i'll return the bigger one. give me the first one now. \n";
    cin >> firstnum;
    cout << "give me the second one please.\n";
    cin.clear();
    cin >> seconum;
    if(firstnum==seconum){cout<<"you gave me the same number twice you dork.";}
    else if(firstnum>seconum){cout<<firstnum <<" is the greater number.";}
    else{ cout<<seconum<< " is the greater number.";}
    
    return 0;
}
