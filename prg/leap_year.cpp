#include <iostream>
using namespace std;

int main()
{
    int year;

    cout<<" Enter year : ";
    cin>>year;

    if((year%100==0) && (year%400==0))
        cout<<" Leap year";
    else if((year%100!=0) && (year%4==0))
        cout<<" Leap year";
    else   
        cout<<" Non-leap year";
}