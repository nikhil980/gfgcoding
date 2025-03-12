//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int dp[1005][1005];
    int fn(string& s1, string& s2, int i , int j){
        if(j==s2.size())return s1.size()-i;
        if(i==s1.size())return s2.size()-j;
        if(dp[i][j]!=-1)return dp[i][j];
        int ans=1e5;
        if(s1[i]==s2[j])ans=min(ans,fn(s1,s2,i+1,j+1));
        ans=min(ans,fn(s1,s2,i+1,j)+1);
        ans=min(ans,fn(s1,s2,i,j+1)+1);
        ans=min(ans,fn(s1,s2,i+1,j+1)+1);
        return dp[i][j]=ans;
    }
    int editDistance(string& s1, string& s2) {
        memset(dp,-1,sizeof(dp));
       return fn(s1,s2,0,0);
    }
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        string s1;
        getline(cin, s1);
        string s2;
        getline(cin, s2);
        Solution ob;
        int ans = ob.editDistance(s1, s2);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends