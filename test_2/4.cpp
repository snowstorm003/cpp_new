#include <iostream>
using namespace std;

int main()
{
    int arr[100000], input, pos;

    for(int i=0; i<100000; i++)
    {
        cout<<" Enter element(press -9999 to complete input) : ";
        cin>>input;

        if(input!=-9999)
            arr[i]=input;
        else
        {
            pos=i;
            break;
        }
    }

    int count=0;

    for(int i=0; i<pos; i++)
    {
        if(arr[i]%2==0)
            count++;
    }

    cout<<" Frequency of even integers : "<<count;
}