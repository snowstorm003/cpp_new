#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{
    for(int i=0; i<size/2; i++)
    {
        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
}

int main()
{
    int arr[] = {10, 5, -9, 0, 58, 1025, 691};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"\n Original :- \n";

    for(int i=0; i<size; i++)
        cout<<" "<<arr[i];

    reverse(arr, size);

    cout<<"\n Reverse :- \n";

    for(int i=0; i<size; i++)
        cout<<" "<<arr[i];
}