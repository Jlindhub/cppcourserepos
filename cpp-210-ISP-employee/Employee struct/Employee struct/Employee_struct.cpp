#include <iostream>
using namespace std;
struct employee
{
    string dateJoined;
    string salary; 
    string personNum;
    string phoneNum;
    string firstname; 
    string lastname; 
    string address;
    //we're a stringly typed language.
    /* actual reasoning for string use: renders the fields safe against numbers starting with a 0
     * which causes problems as that signifies an octal number in compiling.
     * also makes length of entry a non-issue. but we should not use this if we want to use pointers.
     * good thing i don't know about pointers yet :)
     * also allows for notes in saved data - see example employee.
     */
    bool male; //because we're being old fashioned, right?
};

int main() {
    employee example{"20230825","0(intern)","9709016969","0736196969","Ex","Ample","Sampleroad 55",true};
    cout << example.firstname << " " << example.lastname << ", salary: " << example.salary;


    return 0;
}