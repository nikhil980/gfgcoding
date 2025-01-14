//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
          unordered_map<int,int>s;
          int n =arr.size();
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
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends