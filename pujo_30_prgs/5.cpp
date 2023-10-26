//5. Write a C++ program to check if a number is prime.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    cout<<" Enter number : ";
    cin>>num;

    int c=0;

    for(int i=2; i<sqrt(num); i++)
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