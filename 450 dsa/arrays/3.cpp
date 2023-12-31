//dutch national flag algorithm. sorting array of 012

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sort012(int a[], int n)
    {
        int low = 0, mid = 0, high = n - 1;

        while (mid <= high)
        {
            if (a[mid] == 0)
            {
                swap(a[mid], a[low]);
                low++;
                mid++;
            }
            else if (a[mid] == 1)
                mid++;
            else
            {
                swap(a[mid], a[high]);
                high--;
            }
        }
    }
};

int main()
{
    int n;
    cout << " Enter number of elements : ";
    cin >> n;
    int a[n];

    cout << " Enter array elements :-";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        Solution ob;
        ob.sort012(a, n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}