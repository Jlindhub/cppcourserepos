// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <forward_list>
#include <iostream>
#include <valarray>

int main()
{
    std::cout << "Hello World!\n";
    system("pause");
    int swapone;
    swapone = 50;
    int swaptwo;
    swaptwo = 25;
    std::cout << "variable one is " << swapone << " and variable two is " << swaptwo << " input anything to swap. \n";
    system("pause");
    std::swap(swapone, swaptwo);
    std::cout << "variable one is now " << swapone << " and variable two is now " << swaptwo << " input anything to exit. \n";
    system("pause");

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
