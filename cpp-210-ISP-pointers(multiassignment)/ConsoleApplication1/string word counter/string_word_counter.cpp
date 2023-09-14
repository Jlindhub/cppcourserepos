
#include <iostream>

int wordCounter(const char* ptr)
{
    if(*ptr == '\0') return 0;
    
    int wordsFound = 1;
    while(*ptr!='\0')
    {
        if(*ptr==' '){wordsFound++;}
        ptr++;
    }
    return wordsFound;
}



int main(int argc, char* argv[])
{
    char chString[]{"this is a test sentence."};

    std::cout << chString << "- is the sentence to analyze.";
    std::cout << "the sentence contains " << wordCounter(chString) << " words.";
    return 0;
}