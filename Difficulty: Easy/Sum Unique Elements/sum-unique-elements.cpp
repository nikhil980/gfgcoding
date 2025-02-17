//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

//Back-end complete function Template for C++

class Solution {
  public:
    int unique_elements(vector<int> &arr) {
        // Your code here
        int ans=0;
        unordered_map<int,int>s;
        for(auto i:arr)
        {
            s[i]++;
        }
        for(auto i:s)
        {
            if(i.second==1)
            {
                ans+=i.first;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

vector<int> inputLine() {
    string str;
    getline(cin, str);
    stringstream ss(str);
    int num;
    vector<int> res;
    while (ss >> num) {
        res.push_back(num);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> v = inputLine();
        Solution obj;
        cout << obj.unique_elements(v) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends