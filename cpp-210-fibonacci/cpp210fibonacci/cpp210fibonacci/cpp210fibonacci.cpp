#include <iostream>
using namespace std;

int fibonacciRecursive(int num)
{
    if(num == 0 || num == 1) return num; //fib0 and fib1 are always 0 and 1
    return fibonacciRecursive(num-1) + fibonacciRecursive(num-2);
    
}
int fibonacciIterative(int num)
{
    if(num == 0 || num == 1) return num; //fib0 and fib1 are always 0 and 1
    int previous = 1; 
    int current = 1;
    int next = 1;
    for(int i = 3; i<=num; i++) //starts at 3 due to 0 and 1 being covered in if statement, and 2 being = 1
    {
        next=current + previous;
        previous = current;
        current = next;
    }
    return next;
}
int main(int argc, char* argv[])
{
    int fibnumber = 0;
    cout << "what fibonacci sequence number would you like to know? \n";
    while(!(cin >> fibnumber)){
        cin.clear();
        cin.ignore(1000000, '\n');
        cout << "invalid input, try again.";
    }
    cout << "do you want me to run it recursively or iteratively? 1 for recursive, 0 for iterative. \n";
    bool trueforrecursive = 1;
    while(!(cin >> trueforrecursive)){
        cin.clear();
        cin.ignore(1000000, '\n');
        cout << "invalid input, try again.";
    }
    if(trueforrecursive){
        cout << "fibonacci sequence point " << fibnumber << " has value " << fibonacciRecursive(fibnumber) <<".\n";
    }
    else
    {
        cout << "fibonacci sequence point " << fibnumber << " has value " << fibonacciIterative(fibnumber) <<".\n";

    }
    system("pause");
    return 0;
}
