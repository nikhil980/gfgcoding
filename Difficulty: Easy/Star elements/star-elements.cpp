//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> getStar(vector<int>& arr)
    {
        int n=arr.size();
        vector<int>ans;
        int curr_max=arr[n-1];
        ans.push_back(curr_max);
        for(int a=n-2;a>=0;a--)
        {
            if(arr[a]>curr_max)
            {
                curr_max=arr[a];
                ans.push_back(curr_max);
            }
        }
        reverse(ans.begin(),ans.end());
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
        vector<int> ans = obj.getStar(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        // cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends