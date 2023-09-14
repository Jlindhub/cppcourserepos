#include <cstdio>

void Swapper(int* pNumOne, int* pNumTwo)
{
    int temp = *pNumOne;
    *pNumOne = *pNumTwo;
    *pNumTwo = temp;
}


int main(int argc, char* argv[])
{
    int four = 4;
    int five = 5;
    printf("This is four: %d, This is five: %d \n", four, five);
    Swapper(&four, &five);
    printf("This used to be four: %d, This used to be five: %d", four, five);
    return 0;
}
