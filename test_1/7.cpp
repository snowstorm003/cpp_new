#include <iostream>
using namespace std;

int find_sum(int num)
{
    int sum=0;

    if(num<0)
        num=-num;
        
    while(num>0)
    {
        int last_digit=num%10;
        sum=sum+last_digit;
        num=num/10;
    }

    return sum;
}

int main()
{
    int num;

    cout<<" Enter number : ";
    cin>>num;

    int sum = find_sum(num);

    cout<<" Sum of the digits : "<<sum;
}

//for negative input