#include <iostream>
using namespace std;

int main()
{
    int length, breadth;

    cout<<" Enter length : ";
    cin>>length;
    cout<<" Enter breadth : ";
    cin>>breadth;

    int area = 2*(length+breadth);

    cout<<" Area : "<<area;
}