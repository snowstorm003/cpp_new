#include <iostream>         //swap 2 number without 3rd variable
using namespace std;

int main()
{
    int num1, num2;

    cout<<" Enter 1st number : ";
    cin>>num1;
    cout<<" Enter 2nd number : ";
    cin>>num2;

    cout << num1 << "," << num2 << "\n";

    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;

    cout << num1 << "," << num2;
}
