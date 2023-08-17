#include <iostream>
using namespace std;

int main()
{
    int row;
    cout<<" Enter number of rows : ";
    cin>>row;
    int counter = 1;
    for (int i = 1; i <= row; i++)        
    {
        for (int j = row-1; j >= i; j--)    
            cout << " ";
        for (int k = 1; k <= counter; k++)
        {
            if(k==1 || k==counter)
                cout<<"*";
            else if(i==row)
                cout<<"*";
            else
                cout<<" ";
        }
        counter += 2;
        cout << "\n";
    }
}