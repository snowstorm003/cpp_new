#include <iostream>
using namespace std;

int main()
{
    int num;

    cout<<" Enter number : ";
    cin>>num;

    if(num==0)
        cout<<"Zero";
    else if(num>0)
        cout<<" Positive";
    else
        cout<<" Negative";
}