//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
      unordered_map<int,int>s;
        
          int res=0;
          int pre_sum=0;
         
          for(int i=0;i<n;i++)
          {
              pre_sum +=arr[i];
              if(pre_sum==k)
              {
                  res=i+1;
              }
               if(s.find(pre_sum)==s.end())
              {
                  s.insert({pre_sum,i});
              }
              if(s.find(pre_sum-k)!=s.end())
              {
                  res=max(res,i-s[pre_sum-k]);
              }
          }
          return res;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends