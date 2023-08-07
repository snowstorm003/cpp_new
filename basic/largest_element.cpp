#include <iostream>
using namespace std;

int largest(int arr[], int size)
{
    int max=arr[0];
    for(int i=1; i<size; i++)
    {
        if(max<arr[i])
            max=arr[i];
    }

    return max;
}
int main()
{
    int arr[]={10, 12, 30, 45, 2 , 1, 1000};
    int size=sizeof(arr)/sizeof(arr[0]);

    int max  = largest(arr, size);
    cout<<" Maximum : "<<max;
}