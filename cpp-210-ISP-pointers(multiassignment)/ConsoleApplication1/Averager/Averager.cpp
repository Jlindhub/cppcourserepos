#include <iostream>
#include <xutility>

int averager(int* array, int length)
{
    int returner = 0;
    //marcian solution:
    // int* end = array + length;
    // while(end != array)
    // {
    //     returner += *(array++);
    // }

    for(int i=0; i<length; i++)
    {
        returner = returner + *array;
        array++;
    }
    returner = returner/length;
    return returner;
}


int main(int argc, char* argv[])
{
    int numbers[5]{1,2,4,5};
    int averageNum = averager(numbers,std::size(numbers));
    std::cout << "the average is: " << averageNum;
    
}

/*

int main() {
int keyToTheUniverse[]{3,6,9};
printNumbers(keyToTheUniverse, std::size(keyToTheUniverse));
}
*/
