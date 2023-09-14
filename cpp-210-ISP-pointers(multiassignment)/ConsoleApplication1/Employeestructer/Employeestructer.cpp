#include <iostream>
using namespace std;

struct employee
{
    char name[100];
    int salary;
};
int averageSalary(employee* list, int length)
{
    int total=0;
    for(int i=0; i<length; i++)
    {
        total += list->salary;
        list++;
    }
    return total/length;
}
void printAll(employee* list, int length)
{
    for(int i=0; i<length; i++)
    {
        cout << list->name << endl;
        list++;
    }
}

int main(int argc, char* argv[])
{
    int input;
    employee employees[5];
    employee* employeese = new employee[input];

    for(int i=0; i<5; i++)
    {
        cout<< "please input worker " << i+1 << "'s name. 100 characters maximum. \n";
        cin>>employees[i].name;
        cout<< "please input worker " << employees[i].name << "'s salary. numerals only, please. no more than " << INT_MAX << " is allowable.";
        cin>>employees[i].salary;
    }
    cout<<"you employ: " <<"\n";
    printAll(employees, std::size(employees));
    cout << "\n averaged salary expenditure per person: " << averageSalary(employees, std::size(employees));
    delete[] employeese;
    return 0;
}
