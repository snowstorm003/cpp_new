//7. Write a C++ program to find the sum of an array of integers.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, -8, 0, 11, -58, 999};
    int len=sizeof(arr)/sizeof(arr[0]);
    int sum=0;

    for(int i=0; i<len; i++)
        sum=sum+arr[i];

    cout<<sum;
}