//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> arranged(vector<int>& arr) 
    {
        vector<int>ans;
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>=0)
            {
                pos.push_back(arr[i]);
                continue;
            }
             if(arr[i]<0)
            {
                neg.push_back(arr[i]);
            }
        }
        int a=0;
        int b=0;
        for(int i=0;i<arr.size();i++)
        {
             ans.push_back(pos[a]);
             ans.push_back(neg[b]);
             a++;
             b++;
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
        Solution obj;
        vector<int> ans = obj.arranged(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends