#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        int ar[n];
        int start=0, end=n-1;
        for(int i=0, j=n-1; i<n; i++, j--)
        {
            if(arr[i]>0)
            {
                ar[start]=arr[i];
                start++;
            }
            
            if(arr[j]<0)
            {
                ar[end]=arr[j];
                end--;
            }
        }
        
        for(int i=0; i<n; i++)
            arr[i]=ar[i];
    }
};

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
