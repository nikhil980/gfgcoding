//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<vector<int>> findAllPairs(vector<int> &arr, int target) {
        // Code here
        
          set<vector<int>>ans;
       for(int i =0;i<arr.size();i++)
       {
           for(int j=0;j<arr.size();j++)
           {
               if(i!=j)
               {
                  if((arr[i]+arr[j])==target)
                  {
                      if(ans.find({i,j})==ans.end()&&ans.find({j,i})==ans.end()){
                      ans.insert({i,j});
                      }
                  }
               }
           }
       }
       vector<vector<int>>k;
       for(auto i:ans)
       {
           k.push_back(i);
       }
       return k;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int target;
        cin >> target;
        cin.ignore();
        Solution ob;

        vector<vector<int>> res = ob.findAllPairs(arr, target);

        if (res.size() == 0) {
            cout << "[]\n";
        }
        for (int i = 0; i < res.size(); i++) {
            for (int j = 0; j < res[i].size(); j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends