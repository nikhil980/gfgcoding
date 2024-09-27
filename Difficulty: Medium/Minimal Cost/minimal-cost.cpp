//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   
        int minimizeCost(int k, vector<int>& arr) {
        int n = arr.size();
        vector<int>dp(n,0);
        for(int i=n-2;i>=0;i--){
            int ans = INT_MAX;
            for(int j=i+1;j<min(n,i+k+1);j++){
                ans = min(dp[j] + abs(arr[i]-arr[j]),ans);
            }
            dp[i] = ans;
        }
        return dp[0];
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
        int res = obj.minimizeCost(k, arr);
        cout << res << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends