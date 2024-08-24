//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>arr, int n, int k)
    {
        int l=0;
        int r=n-1;
        int result=-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(arr[mid]==k)
            {
                return mid;
            }
            if(arr[mid]>=k)
            {
                result=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
                result=mid+1;
            }
         
        }
        return result;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends