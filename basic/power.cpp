#include <iostream>
using namespace std;

int power(int num, int pow)
{
    int result=1;

    if(pow==0)
        return 1;

    if(pow<0)
        pow=-pow;

    for(int i=1; i<=pow; i++)
        result = result*num;

    return result;
}
int main()
{
    int num, pow;
    cout<<" Enter base number :  ";
    cin>>num;
    cout<<" Enter power :  ";
    cin>>pow;

    if(num==0)
    {
        cout<<" Result : "<<0;
        return 0;
    }

    int result = power(num, pow);

    if(pow<0)
    {
        cout<<" Result : "<<1<<"/"<<result;
        return 0;
    }

    cout<<" Result : "<<result;
}