#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int arr[n]; 
        int start=0, end=n-1;
        
        for(int i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                arr[start]=0;
                start++;
            }
            if(a[i]==2)
            {
                arr[end]=2;
                end--;
            }
        }
        
        for(int i=start; i<=end; i++)
            arr[i]=1;
        
        for(int i=0; i<n; i++)
            a[i]=arr[i];
    }
    
};

int main() {
        int n;
        cout<<" Enter number of elements : ";
        cin >>n;
        int a[n];

        cout<<" Enter array elements :-";
        for(int i=0;i<n;i++){
            cin >> a[i];

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}