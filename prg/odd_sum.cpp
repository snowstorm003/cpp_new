#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<" Enter the value of n : ";
    cin>>n;

    int sum=0;

    for(int i=1; i<=n; i=i+2)
        sum=sum+i;

    cout<<" Sum : "<<sum;
}