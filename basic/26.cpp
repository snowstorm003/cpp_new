#include <iostream>
using namespace std;

int factorial(int num)
{
    if(num==0)
        return 1;
    return num * factorial(num-1);
}

int main()
{
    int num;

    cout<<" Enter number : ";
    cin>>num;

    if(num<0)
        cout<<" Invalid input";

    int result = factorial(num);

    cout<<" Factorial : "<<result;
}