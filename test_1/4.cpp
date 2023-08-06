#include <iostream>
using namespace std;

int fact(int num)
{
    if(num==0)
        return 1;
        
    int factorial = 1;

    for(int i=1; i<=num; i++)
        factorial = factorial*i;
    
    return factorial;
}

int main()
{
    int num;

    cout<<" Enter number : ";
    cin>>num;

    int factorial = fact(num);

    cout<<" Factorial of "<<num<<" is "<<factorial;
}

//for negative input
