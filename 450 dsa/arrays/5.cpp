//union of two arrays

#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:

    int doUnion(int a[], int n, int b[], int m)  {
        
       vector <int> arr;
       for(int i=0; i<n; i++)
        arr.push_back(a[i]);
        
       for(int i=0; i<m; i++)
        arr.push_back(b[i]);
        
        sort(arr.begin(), arr.end());
        
        auto ar = unique(arr.begin(), arr.end());
        
        arr.erase(ar, arr.end());
        
        return arr.size();
    }
};


int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
