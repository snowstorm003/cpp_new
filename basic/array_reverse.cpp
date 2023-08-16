#include <iostream>
using namespace std;

void reverse(int arr[], int arr2[], int size)
{
    int j=0;
    for(int i=size-1; i>=0; i--)
    {
        arr2[i]=arr[j];
        j++;
    }
}

int main()
{
    int arr[] = {10, 56, 999, -9, 0, -9999, 48};

    int size=sizeof(arr)/sizeof(arr[0]);

    int arr2[size];

    reverse(arr, arr2, size);

    cout<<" Old Array:-";
    for(int i=0; i<size; i++)
        cout<<" "<<arr[i];

    cout<<"\n New Array:-";
    for(int i=0; i<size; i++)
        cout<<" "<<arr2[i];
    
    return 0;
}