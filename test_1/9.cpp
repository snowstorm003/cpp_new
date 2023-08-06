#include <iostream>
using namespace std;

int gcd(int num1, int num2)
{
    if(num2==0)
        return num1;
    return gcd(num2, num1%num2);
}

int main()
{
    int num1, num2;

    cout<<" Enter 1st number : ";
    cin>>num1;
    cout<<" Enter 2nd number : ";
    cin>>num2;

    int lcm = (num1*num2)/gcd(num1, num2);

    cout<<" LCM :"<<lcm;
}