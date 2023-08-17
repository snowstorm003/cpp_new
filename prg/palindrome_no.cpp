#include <iostream>
using namespace std;

int palindrome(int num)
{
    int rev=0;
        
    while(num>0)
    {
        int last_digit=num%10;
        rev=rev*10+last_digit;
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
        num=-num;

    int rev = palindrome(num);

    if(rev==num)
        cout<<" Plaindrome";
    else
        cout<<" Not palindrome";
}

//for negative input