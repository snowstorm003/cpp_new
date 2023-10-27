// 15. Write a C++ program to find the intersection of two arrays.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 4, 3, 0, 11, 1};
    int arr2[] = {2, 1, 9, 6, 0, 11, 3};

    priority_queue<int> pq;

    int len = (sizeof(arr1) / sizeof(arr1[0])) + (sizeof(arr2) / sizeof(arr2[0]));

    for (int i = 0, j = 0; i < len; i++)
    {
        if (i < 7)
            pq.push(arr1[i]);
        else
        {
            pq.push(arr2[j]);
            j++;
        }
    }

    int i = pq.top();
    pq.pop();
    int j = pq.top();
    int flag=INT_MIN;

    vector<int> result;

    while (!pq.empty())
    {
        if (j == i && flag!=j)
        {
            result.push_back(i);
            flag=i;
        }
        if (j != i)
            i = j;
        pq.pop();
        j = pq.top();
    }

    for (int i = 0; i < result.size(); i++)
        cout << " " << result[i];
}