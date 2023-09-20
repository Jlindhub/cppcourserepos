#include "String.h"
#include <iostream>
using namespace std;

//constructors
String::String(const char* input, int maxSize):max_size_{maxSize}, length{0}, buffer{new char[maxSize]{}}
{
    std::cout << "string created with " << input << endl;
    append(input);
}

String::String(int maxSize):max_size_{maxSize}, length{0}, buffer{new char[maxSize]{}}
{
    cout << "empty string created." << endl;
}

String::String(const String& other) //deep copy
{
    cout << "deep copy created from " << other.buffer << endl;
    //clone the other object, e.g. copy their Items, Buffers etc.
    this->buffer = new char[other.max_size_]{};
    this->max_size_ = other.max_size_;
    this->length = other.length;
    for(int i=0; i<length; i++)
    {
        this->buffer[i] = other.buffer[i];
    }
}

//operator defs
String& String::operator=(const String& other) //copy assignment - when copying into already initialized string
{
    cout << "string overwritten with " << other.buffer << endl;
    if (this == &other) return *this;  // performance benefit if `a = a`
    delete[] this->buffer;             // first, clean up this object, e.g. delete existing Items, Buffers, etc.
    this->buffer = new char[max_size_];// then, clone the other object, e.g. copy their Items, Buffers etc.
    this->max_size_=other.max_size_;
    this->length=other.length;
    for(int i=0; i<length; i++)
    {
        this->buffer = other.buffer;
    }
    return *this;
}

String String::operator+(const String& other) const
{
    String temp = other;
    temp.max_size_ = this->max_size_ + other.max_size_;
    temp.append(other.buffer);
    return temp;
}

String& String::operator+=(const String& other)
{
    cout << "appended " << this->buffer << "with " << other.buffer;
    append(other.buffer);
    return *this;
}

    
//movers
String::String( String&& other) noexcept
{
    cout<< "moving" << other.buffer << endl;
    this->buffer=other.buffer;
    this->max_size_=other.max_size_;
    this->length=other.length;
    other.buffer = nullptr;
    other.length = 0;
    other.max_size_ = 0;
}

String& String::operator=(String&& other) noexcept
{
    if(this == &other) return *this;
    
    cout << "string moved." << endl;
    delete[] this->buffer;
    this->buffer = new char[max_size_];
    this->max_size_=other.max_size_;
    this->length=other.length;
    for(int i=0; i<length; i++)
    {
        this->buffer = other.buffer;
    }
    return *this;
}

//destructor
String::~String()
{
    if(buffer)
        cout << "time to die, " << buffer << endl;
    else
    {
        cout << "time to die, nobody??" << endl;
    }
    delete[] buffer;
}

//other functions
void String::append(const char* input)
{
    while(*input!='\0')
    {
        buffer[length++]=*input++;
    }
}

void String::appendLine(const char* input)
{
    append(input);
    buffer[length++]='\n';
}

void String::readString() const
{
    cout << buffer << endl;
}
