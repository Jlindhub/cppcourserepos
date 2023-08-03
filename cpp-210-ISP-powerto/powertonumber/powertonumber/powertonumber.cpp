#include <sstream>
#include <cstdio>
using namespace std;

int main(int argc, char* argv[]){
    printf("give me two numbers separated by a ^, ex: 2^5\n");
    int num1, num2;
    int result = scanf_s("%d^%d", &num1, &num2);
    printf("written out this would be: ");
    for(int i=0; i<num2; i++)
    {
        printf("%d", num1);
        if(i!=num2-1||i>num2-1){printf("*");}
    }
    int product = pow(num1,num2);
    printf(" = %d", product);
   
}
