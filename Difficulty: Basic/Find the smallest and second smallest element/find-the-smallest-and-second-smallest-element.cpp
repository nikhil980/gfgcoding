//{ Driver Code Starts
#include <bits/stdc++.h>
#include <limits.h>
#include <random>
#include <sstream>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr)
    {
        vector<int>ans;
       sort(arr.begin(),arr.end());
       if(arr[0]!=arr[arr.size()-1])
       {
           ans.push_back(arr[0]);
           int a=1;
           while(arr[0]==arr[a])
           {
               a++;
           }
           ans.push_back(arr[a]);
           return ans;
       }
       else
       ans.push_back(-1);
       return ans ;
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
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.minAnd2ndMin(arr);
        if (ans[0] == -1)
            cout << -1 << endl;
        else
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends