#include <iostream>
using namespace std;

int main()
{
    int row;
    cout<<" Enter number of rows : ";
    cin>>row;
    int counter = 1;
    for (int i = 1; i <= row; i++)        //change 4 to no. of rows input
    {
        for (int j = row-1; j >= i; j--)    //change 3 to no. of rows-1 
            cout << " ";
        for (int k = 1; k <= counter; k++)
        {
            if (k % 2 == 0)
                cout << "^";
            else
                cout << "*";
        }
        counter += 2;
        cout << "\n";
    }
}