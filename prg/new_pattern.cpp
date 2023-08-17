#include <iostream>
using namespace std;

int main()
{
    int row;
    cout<<" Enter no. of rows : ";
    cin>>row;

    int prev=1, k=0, i, j;

    for(i=1; i<=row; i++)
    {
        for(j=1; j<=prev+k; j++)        //formula  j<(i^2+i+1)
            cout<<"*";
        prev=j-1;
        k=k+2;
        cout<<"\n";
    }
}

// *                    1
// ***                  3
// *******              7
// *************        15