//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
      int f (int n,int m, string &text1,string &text2,vector<vector<int>>&dp)
    {
            if(n<0||m<0)
            {
                return 0;
            }
            if(dp[n][m]!=-1)
            {
                return dp[n][m];
            }
            if(text1[n]==text2[m])
            {
                return dp[n][m]=1+f(n-1,m-1,text1,text2,dp);
            }
            else
            {
                return dp[n][m]=max(f(n-1,m,text1,text2,dp),f(n,m-1,text1,text2,dp));
            }
    }
   
    int longestPalinSubseq(string text2) {
        //code here
          string text1=text2;
          int n=text1.size();
          reverse(text2.begin(),text2.end());
          int m=text2.size();
       
       vector<vector<int>>dp(n,vector<int>(m,-1));
        return f(n-1,m-1,text1,text2,dp);
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    
cout << "~" << "\n";
}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends