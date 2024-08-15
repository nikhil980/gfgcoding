//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of cuts.
     int dp[10005];
     int maxi(int n, int x, int y, int z)
     {
         if(n==0)
         {
             return 0;
         }
         
         int a=INT_MIN;
         int b=INT_MIN;
         int c=INT_MIN;
         if(dp[n]!=-1) return dp[n];
         if(n>=x) a=maxi(n-x,x,y,z);
         if(n>=y) b=maxi(n-y,x,y,z);
         if(n>=z) c=maxi(n-z,x,y,z);
         
         return dp[n]= 1+max(a,max(b,c));
     }
   int maximizeTheCuts(int n, int x, int y, int z)
    {
      memset(dp,-1,sizeof(dp));
       
       int a=maxi(n,x,y,z);
       if(a<0) {return 0;}
       
       return a;
    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends