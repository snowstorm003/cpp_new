#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout<<" Enter 1st number : ";
    cin>>num1;
    cout<<" Enter 2nd number : ";
    cin>>num2;
    cout<<" Enter 3rd number : ";
    cin>>num3;

    float  avg = (num1+num2+num3)/3;

    cout<<" Average : "<<avg;
}