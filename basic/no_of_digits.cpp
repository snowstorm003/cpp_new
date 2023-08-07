#include <iostream>
using namespace std;

int no_of_digits(int num)
{
    int count=0;
        
    while(num>0)
    {
        int last_digit=num%10;
        count++;
        num=num/10;
    }

    return count;
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

    int count = no_of_digits(num);

    cout<<" Sum of the digits : "<<count;
}