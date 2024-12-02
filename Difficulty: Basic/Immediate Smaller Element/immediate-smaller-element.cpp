//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> immediateSmaller(vector<int>& arr) {
        //  code here
        vector<int>ans;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]<arr[i-1])
            {
                ans.push_back(arr[i]);
            }
            else
            {
                ans.push_back(-1);
            }
        }
        ans.push_back(-1);
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
        vector<int> ans = obj.immediateSmaller(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends