#include <iostream>
using namespace std;
struct threeVector //was class, but since it's all public by necessity...
{

    int x, y, z;
    threeVector(const int x,const int y,const int z):x{x}, y{y}, z{z} {} //constr. with values
    threeVector():x{0}, y{0}, z{0} {} //empty-constr.
    explicit threeVector(const int i):x{i}, y{i}, z{i} {} //empty-constr.

    //some of these definitions are probably unnecessary. oh well.
    //operator defs
    threeVector operator+(const threeVector& other) const {return threeVector{x+other.x, y+other.y, z+other.z};}
    threeVector operator-(const threeVector& other) const {return threeVector{x-other.x, y-other.y, z-other.z};}
    threeVector operator*(const threeVector& other) const {return threeVector{x*other.x, y*other.y, z*other.z};}
    threeVector operator/(const threeVector& other) const {return threeVector{x/other.x, y/other.y, z/other.z};}

    //single-other defs
    threeVector operator+(const int other) const {return threeVector{x+other, y+other,z+other};}
    threeVector operator-(const int other) const {return threeVector{x-other, y-other,z-other};}
    threeVector operator*(const int other) const {return threeVector{x*other, y*other,z*other};}
    threeVector operator/(const int other) const {return threeVector{x/other, y/other,z/other};}

    //reference operator defs
    threeVector operator+=(const threeVector& other) {x=x+other.x; y=y+other.y; z=z+other.z; return *this;}
    threeVector operator-=(const threeVector& other) {x=x-other.x; y=y-other.y; z=z-other.z; return *this;}
    threeVector operator*=(const threeVector& other) {x=x*other.x; y=y*other.y; z=z*other.z; return *this;}
    threeVector operator/=(const threeVector& other) {x=x/other.x; y=y/other.y; z=z/other.z; return *this;}

    //increment operator defs
    threeVector& operator++()   {x++; y++; z++; return *this;}
    threeVector operator++(int) {threeVector const old = *this; operator++(); return old;}
    //ask marc about how/why this^ works - why return old? what do we do with the operator++() return? nothing?

    
    //equality operator defs (inline redundant?) - too many parameter error?
    friend auto operator<=>(const threeVector& lhs, const threeVector& rhs) = default;
    //can't get functional. <=> not a thing in this ver?
    bool operator==(const threeVector& rhs) const {return x==rhs.x && y==rhs.y && z==rhs.z; }
    
    bool operator!=(const threeVector& rhs) const {return !(*this==rhs);}
    bool operator< (const threeVector& rhs) const {return x<rhs.x && y<rhs.y && z<rhs.z; }
    bool operator> (const threeVector& rhs) const {return rhs < *this;}
    bool operator<=(const threeVector& rhs) const {return !(*this > rhs);}
    bool operator>=(const threeVector& rhs) const {return !(*this < rhs);}

    //cast defs
    explicit operator int() const { return x+y+z; }
    
};
//other-value first operator definitions for 3vector
threeVector operator+(const int i, const threeVector& v) {return {v.x+i, v.y+i,v.z+i};}
threeVector operator-(const int i, const threeVector& v) {return {v.x-i, v.y-i,v.z-i};}
threeVector operator*(const int i, const threeVector& v) {return {v.x*i, v.y*i,v.z*i};}
threeVector operator/(const int i, const threeVector& v) {return {v.x/i, v.y/i,v.z/i};}

class Animal{};
class Dog : public Animal{};

int main(int argc, char* argv[])
{
    threeVector testVector(1,2,3);
    threeVector otherTest(4,5,6);
    threeVector newVector = testVector * otherTest;
    cout <<  newVector.x << " " << newVector.y <<" " << newVector.z << " should say: 4, 10, 18";
    newVector++;
    newVector = newVector * 2;
    newVector = 2 * newVector;

    threeVector singleVector(3);
    int i = static_cast<int>(singleVector);

    return 0;
}
