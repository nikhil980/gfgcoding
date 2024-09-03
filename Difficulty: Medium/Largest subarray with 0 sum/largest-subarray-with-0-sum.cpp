//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr, int n)
    {
        unordered_map<int,int>s;
        
          int res=0;
          int pre_sum=0;
         
          for(int i=0;i<n;i++)
          {
              pre_sum +=arr[i];
              if(pre_sum==0)
              {
                  res=i+1;
              }
               if(s.find(pre_sum)==s.end())
              {
                  s.insert({pre_sum,i});
              }
              if(s.find(pre_sum)!=s.end())
              {
                  res=max(res,i-s[pre_sum]);
              }
             
          }
          return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i) {
            cin >> array1[i];
        }
        Solution ob;
        cout << ob.maxLen(array1, m) << endl;
    }
    return 0;
}

// } Driver Code Ends