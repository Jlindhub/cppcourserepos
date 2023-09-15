#include <iostream>
using namespace std;

enum class Operation{add,multiply,subtract, null};

class Calculator
{
    int num;
    Operation operation;
    
    public:
    Calculator() : num{0}, operation{Operation::null}
    {
    }
    void setNumber(const int number)
    {
        if(operation==Operation::add){this->num += number;}
        else if(operation==Operation::multiply){this->num *= number;}
        else if(operation==Operation::subtract){this->num -= number;}
        else{this->num = number;}
    }
    void setOperation(const Operation var)
    {
        this->operation = var;
    }
    void clear()
    {
        this->setOperation(Operation::null);
        this->setNumber(0);
    }
    int getNumber() const
    {
        return this->num;
    }
};

int main(int argc, char* argv[])
{
    Calculator calculator{};
    calculator.setNumber(5); // change the state (field)
    calculator.setOperation(Operation::add); // enum
    calculator.setNumber(3);
    printf("%d\n", calculator.getNumber()); // should say 8
    calculator.clear();
    calculator.setNumber(2);
    calculator.setOperation(Operation::multiply);
    calculator.setNumber(3);
    calculator.setOperation(Operation::subtract);
    calculator.setNumber(1);
    printf("%d\n", calculator.getNumber()); // should say 5

    return 0;
}