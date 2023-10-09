//kth smallest element

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int partition(int arr[], int start, int end)
    {

        int pivot = arr[start];

        int count = 0;
        for (int i = start + 1; i <= end; i++)
        {
            if (arr[i] <= pivot)
                count++;
        }

        int pivotIndex = start + count;
        swap(arr[pivotIndex], arr[start]);

        int i = start, j = end;

        while (i < pivotIndex && j > pivotIndex)
        {

            while (arr[i] <= pivot)
            {
                i++;
            }

            while (arr[j] > pivot)
            {
                j--;
            }

            if (i < pivotIndex && j > pivotIndex)
            {
                swap(arr[i++], arr[j--]);
            }
        }

        return pivotIndex;
    }

    void quickSort(int arr[], int start, int end)
    {

        if (start >= end)
            return;

        int p = partition(arr, start, end);

        quickSort(arr, start, p - 1);

        quickSort(arr, p + 1, end);
    }
    int kthSmallest(int arr[], int l, int r, int k)
    {
        quickSort(arr, l, r);

        while (k > 0)
        {
            l++;
            k--;
        }

        return arr[--l];
    }
};

int main()
{
    int number_of_elements;
    cout << " Enter number of elements : ";
    cin >> number_of_elements;
    int a[number_of_elements];

    cout << " Enter array elements :-";
    for (int i = 0; i < number_of_elements; i++)
        cin >> a[i];

    int k;
    cout << " Enter value of k : ";
    cin >> k;
    Solution ob;
    cout << ob.kthSmallest(a, 0, number_of_elements - 1, k) << endl;

    return 0;
}


// int main()
// {
//     priority_queue<int> pq;


// }
