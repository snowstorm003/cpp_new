#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int size)
{
    if (size < 3)
    {
        cout << " Invalid input. Kindly give proper input.";
        return 0;
    }
    int first, second, third;
    first = second = third = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] < first) // for non-distinct give <=
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third && arr[i] < second) // for non-distinct give <=
        {
            third = arr[i];
        }
    }

    if (second == INT_MIN)
        cout << " Non-distinct element not given as input\n";
    cout << " First : " << first << " Second : " << second << " Third : " << third;
}

int main()
{
    int size, arr[] = {10, 10, 10, 10, 10};
    size = sizeof(arr) / sizeof(arr[0]);

    largest(arr, size);
    return 0;
}