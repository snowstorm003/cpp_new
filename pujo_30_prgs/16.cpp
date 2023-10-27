//16. Write a program to find the union of two arrays.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

set<int> find_union(int arr1[], int arr2[], int len1, int len2)
{
    set<int> result;

    for(int i=0, j=0; i<len1+len2; i++)
    {
        if(i<len1)
            result.insert(arr1[i]);
        if(i>=len1)
        {
            result.insert(arr2[j]);
            j++;
        }
    }

    return result;
}

int main()
{
    int arr1[] = {1, 2, 4, 3, 0, 11, 1};
    int arr2[] = {2, 1, 9, 3};

    int len1 = sizeof(arr1)/sizeof(arr1[0]);
    int len2 = sizeof(arr2)/sizeof(arr2[0]);

    set<int> result = find_union(arr1, arr2, len1, len2);

    for(auto itr = result.begin(); itr!=result.end(); itr++)
        cout<<" "<<*itr;
}