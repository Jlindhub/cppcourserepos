#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
    cout<<"please give me a time in seconds. or just a bunch of numbers like how you'll probably do.";
    int inputseconds;
    cin>>inputseconds;
    int hours;
    int minutes;
    int seconds;
    minutes=inputseconds/60;
    hours=minutes/60;

    seconds=inputseconds % 60;
    minutes = minutes % 60;
    cout<<"your time is: " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds.";
    
    return 0;
}