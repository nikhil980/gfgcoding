//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        int l=0;
        int r=n-1;
        int start=-1;
        int last=-1;
        if(arr[0]==x&&arr[1]!=x)
        {
            return{0,0};
        }
        if(arr[r]==x&&arr[r-1]!=x)
        {
            return {r,r};
        }
        
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(arr[mid]<x)
            {
                l=mid+1;
            }
            else if(arr[mid]>x)
            {
                r=mid-1;
            }
            else
            {
                if(mid==0||arr[mid-1]!=arr[mid])
                {
                    start=mid;
                    break;
                }
                else
                {
                    r=mid-1;
                }
            }
        }
        l=0,r=n-1;
          while(l<=r)
        {
             int mid=(l+r)/2;
            if(arr[mid]<x)
            {
                l=mid+1;
            }
            else if(arr[mid]>x)
            {
                r=mid-1;
            }
            else
            {
                if(mid==n-1||arr[mid+1]!=arr[mid])
                {
                    last=mid;
                    break;
                }
                else
                {
                    l=mid+1;
                }
            }
        }
     
        if(start==-1&&last==-1)
        {
            return {-1,-1};
        }
        return {start,last};
    }
    
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends