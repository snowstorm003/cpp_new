#include <iostream>
using namespace std;

int main()
{
    int s1, s2, s3;

    cout<<" Enter 1st side length : ";
    cin>>s1;
    cout<<" Enter 2nd side length : ";
    cin>>s2;
    cout<<" Enter 3rd side length : ";
    cin>>s3;

    int perimeter = s1+s2+s3;

    cout<<" Perimeter of Traingle : "<<perimeter;
}