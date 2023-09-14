
#include <iostream>
using namespace std;

struct person
{
    char name[20];
};

person* makeperson()
{
    person* p{new person};
    cout << "what would you like person " << +1 << "'s name to be?" << endl;
    cin>> p->name;
    cin.ignore(INT_MAX, '\n');
    return p;
}

int main(int argc, char* argv[]){
    cout<<"welcome to the people-maker. how many people do you want to create?" << endl;
    
    int input;
    cin>>input;
    cin.ignore(INT_MAX, '\n');
    auto* people = new person*[input];
    
    cout<<"you will now make " << input << " people by assigning each of them names." << endl;
    for(int i=0; i<input; i++)
    {
        people[i]=makeperson();
    }
    cout<< "you created: " << endl;
    for(int i=0; i<input;i++)
    {
        cout << people[i]->name;
        if(i<input-1){ cout << ", ";}
        else if(i<input){ cout << "." << endl;}
    }
    //cleanup:
    for(int i=0; i<input; i++)
    {
        delete people[i];
    }
    delete[] people;
    return 0;
}
