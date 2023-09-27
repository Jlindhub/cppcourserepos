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
template<class T, class TTotal>
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
template<class T>
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
    const char* names[5] = {"Hello", "World"};
    bool average3 = tAverage(names, size(names));

    cout << averaged << endl;
    cout << chararrav << endl;
    cout << average3 << endl;
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