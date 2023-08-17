#include <iostream>
using namespace std;

int find_product(int num)
{
    int product=1;
        
    while(num>0)
    {
        int last_digit=num%10;
        product=product*last_digit;
        num=num/10;
    }

    return product;
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
    
    int product = find_product(num);

    cout<<" Product of the digits : "<<product;
}

//for negative input