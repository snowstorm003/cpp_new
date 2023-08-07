#include <iostream>         //swap 2 number without 3rd variable
using namespace std;

int main()
{
    int celsius;
    cout<<" Enter temperture in celsius : ";
    cin>>celsius;

    int fahrenhiet = (celsius*9)/5+32;

    cout<<" Temperature in fahrenhiet : "<<fahrenhiet;
}