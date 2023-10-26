//4. Write a program to calculate the factorial of a number.

#include <iostream>         //swap 2 number without 3rd variable
using namespace std;

int factorial(int num)
{
    if(num==0)
        return 1;
    return num*factorial(num-1);
}

int main()
{
    int num;
    cout<<" Enter number : ";
    cin>>num;

    if(num<0)
    {
        cout<<" Invalid input. Kindly provide proper value.";
        return 0;
    }
    int result = factorial(num);

    cout<<" Factorial : "<<result;
}