#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int max_element(int arr[], int size)
{
    return *max_element(arr, arr+size);
}
int main()
{
    int arr[]={10, 12, 20, 100, 3, 59};
    int size=sizeof(arr)/sizeof(arr[0]);

    int max=max_element(arr, size);

    cout<<" Maximum : "<<max;
}