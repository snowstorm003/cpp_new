#include <iostream>
using namespace std;

int main()
{
    int row;
    cout<<" Enter number of rows : ";
    cin>>row;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<=i; j++)
            cout<<"*";
        cout<<"\n";
    }
}