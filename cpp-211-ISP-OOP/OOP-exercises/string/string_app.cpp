
#include <iostream>

#include "String.h"
using namespace std;

class Hero {
    String _name;
public:
    Hero(const String& name) : _name{ name } { }
    Hero(String&& name) : _name{std::move(name)} { }
};

int main() {
    String zeusName{ "Zeus", 100 };
    Hero zeus{std::move(zeusName) };
    Hero hercules{ String{ "Hercules", 100 } };
    return 0;
}

//
// int main(int argc, char* argv[])
// {
//
//     String test{"test", 100};
//         cout << "test before copy: ";
//     test.readString();
//     {
//         String other = test; // copy constructor because other did not exist before -- clone their buffer and assign it
//         //other = test;   // copy assignment because we assign a new value to an already constructed value --
//                         //destroy existing buffer on copy and then clone their buffer and assign it
//         cout << "test after copy: ";
//         test.readString();
//         cout << "other: ";
//         other.readString();
//     }
//         cout << "test after other destruction: ";
//     test.readString();
//     return 0;
// }