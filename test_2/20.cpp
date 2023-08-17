#include <iostream>
using namespace std;

int addition(int arr[], int size)
{
    int total_sum=0;
    for(int i=0; i<size; i++)
    {
        int subarraySum=0;
        for(int j=i; j<size; j++)
        {
            subarraySum+=arr[j];
            total_sum+=subarraySum;
        }
    }

    return total_sum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<" Result : "<<addition(arr, size);

    return 0;
}