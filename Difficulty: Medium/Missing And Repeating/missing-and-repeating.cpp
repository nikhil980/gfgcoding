//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) 
    {
        long long r,m;
        
        long long n=arr.size();
        long long arr1[n+1]={0};
        
        for(long long i=0;i<n;i++)
        {
            arr1[arr[i]]++;
        }
        
        for(long long i=1;i<=n;i++)
        {
            if(arr1[i]==2)
            {
                r=i;
            }
            if(arr1[i]==0)
            {
                m=i;
            }
        }
        return {r,m};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends