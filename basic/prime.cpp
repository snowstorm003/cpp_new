#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<" Enter number : ";
    cin>>num;

    int c=0;

    for(int i=2; i<num/2; i++)
    {
        if(num%i==0)
        {
            c++;
            break;
        }
    }

    if(c==1)
        cout<<" Not prime";
    else
        cout<<" Is prime";
}