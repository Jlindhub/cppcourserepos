#include <iostream>
using namespace std;

struct threeVector //was class, but since it's all public by necessity...
{

    int x, y, z;
    threeVector(const int x,const int y,const int z):x{x}, y{y}, z{z} {} //constr. with values
    threeVector():x{0}, y{0}, z{0} {} //empty-constr.

    //some of these definitions are probably unnecessary. oh well.
    //operator defs
    threeVector operator+(const threeVector& other) const {return threeVector{x+other.x, y+other.y, z+other.z};}
    threeVector operator-(const threeVector& other) const {return threeVector{x-other.x,y-other.y,z-other.z};}
    threeVector operator*(const threeVector& other) const {return threeVector{x*other.x, y*other.y,z*other.z};}
    threeVector operator/(const threeVector& other) const {return threeVector{x/other.x, y/other.y, z/other.z};}

    //single-other defs
    threeVector operator+(const int other) const {return threeVector{x+other, y+other,z+other};}
    threeVector operator-(const int other) const {return threeVector{x-other, y-other,z-other};}
    threeVector operator*(const int other) const {return threeVector{x*other, y*other,z*other};}
    threeVector operator/(const int other) const {return threeVector{x/other, y/other,z/other};}

    //reference operator defs
    threeVector operator+=(const threeVector& other) {this->x=x+other.x; this->y=y+other.y; this->z=z+other.z; return *this;}
    threeVector operator-=(const threeVector& other) {this->x=x-other.x; this->y=y-other.y; this->z=z-other.z; return *this;}
    threeVector operator*=(const threeVector& other) {this->x=x*other.x; this->y=y*other.y; this->z=z*other.z; return *this;}
    threeVector operator/=(const threeVector& other) {this->x=x/other.x; this->y=y/other.y; this->z=z/other.z; return *this;}

    //increment operator defs
    threeVector& operator++()   {this->x++; this->y++; this->z++; return *this;}
    threeVector operator++(int) {threeVector const old = *this; operator++(); return old;}
    //ask marc about how/why this^ works - why return old? what do we do with the operator++() return? nothing?

};
//other-value first operator definitions for 3vector
threeVector operator+(const int i, const threeVector& v) {return {v.x+i, v.y+i,v.z+i};}
threeVector operator-(const int i, const threeVector& v) {return {v.x-i, v.y-i,v.z-i};}
threeVector operator*(const int i, const threeVector& v) {return {v.x*i, v.y*i,v.z*i};}
threeVector operator/(const int i, const threeVector& v) {return {v.x/i, v.y/i,v.z/i};}




int main(int argc, char* argv[])
{
    threeVector testVector(1,2,3);
    threeVector otherTest(4,5,6);
    threeVector newVector = testVector * otherTest;
    cout <<  newVector.x << " " << newVector.y <<" " << newVector.z << " should say: 4, 10, 18";
    newVector++;
    newVector = newVector * 2;
    newVector = 2 * newVector;
    return 0;
}
