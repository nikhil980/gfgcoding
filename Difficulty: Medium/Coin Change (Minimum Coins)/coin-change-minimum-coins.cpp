//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
     int func(int i, vector<int>&coins,int sum,vector<vector<int>>&dp){
        
      
        if(i==0){
            if(sum%coins[0] == 0)return sum/coins[0];
            else return INT_MAX;
        }
        
        if(dp[i][sum] != -1)return dp[i][sum];
        
        int ntake = func(i-1,coins,sum,dp);
        int take = INT_MAX;
        if(sum>=coins[i]){
            take  = func(i,coins,sum-coins[i],dp);
            if(take != INT_MAX){
                take += 1;
            }
        }
        
        return dp[i][sum] = min(take,ntake);
    }
    int minCoins(vector<int> &coins, int sum) {
      
        int n = coins.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        return (func(n-1, coins, sum,dp) == INT_MAX) ? -1 : func(n-1, coins, sum,dp);
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minCoins(arr, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends