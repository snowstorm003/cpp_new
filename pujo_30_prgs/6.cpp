//6. Write a program to find the reverse of a number.

#include <iostream>
using namespace std;

int find_sum(int num)
{
    int rev=0;
        
    while(num>0)
    {
        int last_digit=num%10;
        rev=(rev*10)+last_digit;
        num=num/10;
    }

    return rev;
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

    int rev = find_sum(num);

    cout<<" Reverse of the digits : "<<rev;
}

//for negative input