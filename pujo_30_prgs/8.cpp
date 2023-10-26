//8. Write a program to find the average of an array of numbers.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, -8, 0, 11, -58, 999};
    int len=sizeof(arr)/sizeof(arr[0]);
    int sum=0, avg=0;

    for(int i=0; i<len; i++)
        sum=sum+arr[i];
    
    avg=sum/len;

    cout<<avg;
}