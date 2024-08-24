//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> arr, long long x)
    {
         int n=arr.size();
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
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends