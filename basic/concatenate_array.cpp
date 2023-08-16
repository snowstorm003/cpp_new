#include <iostream>
using namespace std;

void concatenate(int arr[], int arr2[], int arr3[], int size)
{
    int j=0;

    for(int i=0; i<size*2; i++)
    {
        if(i<size)
            arr3[i]=arr[i];
        else
        {
            arr3[i]=arr2[j];
            j++;
        }
    }
}

int main()
{
    int arr[] = {10, 56, 999, -9, 0, -9999, 48};
    int arr2[] = {11, 45, 108, -77, 14, -123, 69};

    int size=sizeof(arr)/sizeof(arr[0]);

    int arr3[size*2];

    concatenate(arr, arr2, arr3, size);

    cout<<" 1st Array:-";
    for(int i=0; i<size; i++)
    cout<<" "<<arr[i];

    cout<<"\n 2nd Array:-";
    for(int i=0; i<size; i++)
    cout<<" "<<arr2[i];

    cout<<"\n 3rd Array:-";
    for(int i=0; i<size*2; i++)
    cout<<" "<<arr3[i];
    
}