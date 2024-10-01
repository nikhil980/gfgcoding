//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int altProduct(vector<int>& arr)
    {
          sort(arr.begin(),arr.end());
          
          int ans=0;
          int n=0;
          int x=arr.size()-1;
          while(n<x)
          {
              ans +=arr[n]*arr[x];
              x--;
              n++;
          }
          return ans;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.altProduct(arr);
        cout << res << endl;
        // cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends