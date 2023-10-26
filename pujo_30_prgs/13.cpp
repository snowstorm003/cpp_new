//13. Write a C++ program to remove duplicate elements from an array.(sorted array)

#include <iostream>
using namespace std;

int remove_duplicates(int arr[], int len)
{
    int i=0;

    for(int j=1; j<len; j++)
    {
        if(arr[j]!=arr[i])
        {
            i++;
            arr[i]=arr[j];
        }
    }

    return (i+1);
}

int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 3, 33}; //sorted array
    int len = sizeof(arr)/sizeof(arr[0]);

    int pos = remove_duplicates(arr, len);

    for(int i=0; i<pos; i++)
        cout<<arr[i]<<" ";

    return 0;
}