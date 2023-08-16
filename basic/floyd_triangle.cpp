#include <iostream>
using namespace std;

void pattern(int row)
{
    int k=1;

    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<"\n";
    }
}

int main()
{
    int row;

    cout<<" Enter the number of rows : ";
    cin>>row;

    pattern(row);
}