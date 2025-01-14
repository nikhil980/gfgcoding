//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> dupLastIndex(vector<int>& arr) {
        // code here
         int indx=-1;
        int ans=-1;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]==arr[i-1])
            {
                indx=i;
                ans=arr[i];
            }
        
        }
        
        return {indx,ans};
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    Solution ob;
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        vector<int> result = ob.dupLastIndex(nums);
        for (int val : result) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends