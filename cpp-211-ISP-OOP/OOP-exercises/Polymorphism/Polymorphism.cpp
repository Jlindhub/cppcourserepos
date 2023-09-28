#include <algorithm>
#include <iostream>
using namespace std;

template<class Tout, class Tin>
Tout NarrowCast(Tin input)
{
    Tout result = static_cast<Tout>(input);
    Tin revertCheck = static_cast<Tin>(result);
    if(revertCheck!=input){throw 69420;}
    return result;
}

template<class T> //generic array sorter concept: check for compatability with <=>
concept sorteable = requires (T input, T input2)
{
    input > input2;
};

//generic array sorter: compare first value of each array
template<sorteable T>
void BubbleSort(T* input, size_t length)
{
    //idk what this sort is. cyclesort? 
    T* end = input+length;
    while(input != end)
    {
        T* ptr2=input+1;
        while(ptr2 != end)
        {
            if(*input > *ptr2)
            {
                T temp = *input;
                *input = *ptr2;
                *ptr2 = temp;
            }
            ++ptr2;
        }
        ++input;
    }
}


template<class T>
concept averagable = requires (T input, size_t length) {
    input+=input;
    input/length;
};
template<class T, averagable TTotal>
T tAverage(T* input, size_t arrlength)
{
    TTotal total = 0;
    T* end = input + arrlength;
    while (input != end)
    {
        total += *input;
        input++;
    }
    return total/arrlength;
}
template<averagable T>
T tAverage(T* input, size_t arrlength)
{
    return tAverage<T, T>(input, arrlength);
}

template<>
char tAverage(char* input, size_t arrlength)
{
    return tAverage<char, int>(input, arrlength);
}
int main(int argc, char* argv[])
{
    char a = 'a';
    int converted = NarrowCast<int>(a);
    cout << converted << endl;
    double arr[5] = {0.5,1.5,2.5,3.5,4.5};
    double averaged = tAverage(arr, size(arr));
    char chararr[5] = {'a','b','c','d','e'};
    char chararrav = tAverage(chararr,size(chararr));

    cout << averaged << endl;
    cout << chararrav << endl;

    int sorttest[5] = {4,5,2,3,1};
    cout << sorttest << endl;
    BubbleSort(sorttest,size(sorttest));
    for (int i : sorttest)
    {
        cout << i;
    }

    string stringtest[5] = {"Hello", "World", "Test", "Foo", "Six"};
    cout << stringtest << endl;
    BubbleSort(stringtest,size(stringtest));
    for (string i : stringtest)
    {
        cout << i;
    }
    cout << endl;

    return 0;
}




/*
template <typename T>
concept multipliable = requires (T a, T b) {
    a*b;
};

multipliable auto sqr(multipliable auto value){
    return value * value;
}

int main() {
    int i = 5;
    sqr(i);
    sqr(&i); // ERROR
}   

*/