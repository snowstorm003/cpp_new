//kadance algorithm to find max subarray sum

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        long long max_sum=INT_MIN, sum=0, start, ans_start, ans_end;
        
        for(int i=0; i<n; i++)
        {
            if(sum==0)
                start=i;
                
            sum=sum+arr[i];
            
             if(sum>max_sum)
             {
                max_sum=sum;
                ans_start=start;
                ans_end=i;
             }
            if(sum<0)
                sum=0;
        }
        
        return max_sum;
        
    }
};


int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends