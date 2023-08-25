#include <iostream>

struct vector2d
{
    int x;
    int y;
} ;


vector2d addvectors(vector2d first, vector2d second)
{
    vector2d result;
    result.x=first.x+second.x;
    result.y=first.y+second.y;
    return result;
}

int main(int argc, char* argv[])
{
    
    vector2d firstvector;
    firstvector.x = 1;
    firstvector.y = 2;
    vector2d secondvector;
    secondvector.x=1;
    secondvector.y=2;

    vector2d result = addvectors(firstvector,secondvector);
    std::cout << "first vector: " << firstvector.x << " and " << firstvector.y << "\n";
    std::cout << "second vector: " << secondvector.x << " and " << secondvector.y << "\n";
    std::cout << "resulting in " << result.x << " and " << result.y <<".";
    return 0;
}
