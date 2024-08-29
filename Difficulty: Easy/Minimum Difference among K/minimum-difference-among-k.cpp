//{ Driver Code Starts
#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minDiff(vector<int>& a, int k) 
    {
         int n=a.size();
         sort(a.begin(),a.end());
         int i=0;
         int ans=INT_MAX;
         while(k<=n)
         {
             ans=min(a[k-1]-a[i],ans);
             k++;
             i++;
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
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        cout << obj.minDiff(arr, k) << endl;
    }
    return 0;
}
// } Driver Code Ends