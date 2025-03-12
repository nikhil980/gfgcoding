//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
     int dp[45];
    int solve(int i, int n){
        if (i == n) return 1;
        if (i > n) return 0;
        if (dp[i] != -1) return dp[i];
        int take1 = solve(i + 1, n);
        int take2 = solve(i + 2, n);
        dp[i] = take1 + take2;
        return dp[i];
    }
    int countWays(int n) {
        memset(dp, -1, sizeof(dp));
        return solve(0,n);
    }
};



//{ Driver Code Starts.
int main() {
    // taking total testcases
    int t;
    cin >> t;
    while (t--) {
        // taking stair count
        int m;
        cin >> m;
        Solution ob;
        cout << ob.countWays(m) << endl; // Print the output from our pre computed array

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends