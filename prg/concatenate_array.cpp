#include <iostream>
using namespace std;

void concatenate(int arr[], int arr2[], int arr3[], int size1, int size3)
{
    int j=0;

    for(int i=0; i<size3; i++)
    {
        if(i<size1)
            arr3[i]=arr[i];
        else
        {
            arr3[i]=arr2[j];
            j++;
        }
    }


    // for(int i=0; i<size1; i++)  arr3[i]=arr1[i];         //better approach
    // for(int i=0; i<size2; i++)  arr3[size1+i]=arr2[i];
}

int main()
{
    int arr[] = {10, 56, 999, -9, 0, -9999, 48};
    int arr2[] = {11, 45, 108};

    int size1=sizeof(arr)/sizeof(arr[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    int size3=size1+size2;

    int arr3[size3];

    concatenate(arr, arr2, arr3, size1, size3);

    cout<<" 1st Array:-";
    for(int i=0; i<size1; i++)
    cout<<" "<<arr[i];

    cout<<"\n 2nd Array:-";
    for(int i=0; i<size2; i++)
    cout<<" "<<arr2[i];

    cout<<"\n 3rd Array:-";
    for(int i=0; i<size3; i++)
    cout<<" "<<arr3[i];
    
}