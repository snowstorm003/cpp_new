//13. Write a C++ program to remove duplicate elements from an array.(sorted array)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// void remove_duplicates(int arr[], int len)
// {
//     unordered_map<int, bool> check;
//     for(int i=0; i<len; i++)
//     {
//         if(check.find(arr[i])==check.end())
//             cout<<arr[i]<<" ";
//         check[arr[i]]=false;
//     }

// }

void remove_duplicates(int arr[], int len)
{
    unordered_set<int> check;
    for(int i=0; i<len; i++)
    {
        if(check.find(arr[i])==check.end())
        {
            check.insert(arr[i]);
            cout<<arr[i]<<" ";
        }
    }
}


// two pointer approach for sorted arrays
// int remove_duplicates(int arr[], int len)
// {
//     int i=0;

//     for(int j=1; j<len; j++)
//     {
//         if(arr[j]!=arr[i])
//         {
//             i++;
//             arr[i]=arr[j];
//         }
//     }

//     return (i+1);
// }

int main()
{
    int arr[] = {6, 9, 2, 15, 0, 4, 6, 2, 0, 99, 99}; 
    int len = sizeof(arr)/sizeof(arr[0]);

    remove_duplicates(arr, len);

    // for(int i=0; i<pos; i++)
    //     cout<<arr[i]<<" ";

    return 0;
}