#include <iostream>
using namespace std;

int find_sum(int num)
{
    int sum=0;
        
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

    if(num<0)
    {
        cout<<" Invalid input. Kindly enter proper input.";
        return 0;
    }

    int sum = find_sum(num);

    cout<<" Sum of the digits : "<<sum;
}

//for negative input