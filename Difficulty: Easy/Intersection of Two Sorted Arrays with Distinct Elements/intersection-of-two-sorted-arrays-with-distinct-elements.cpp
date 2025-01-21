//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        // Your code here
        
     unordered_set<int>s(a.begin(),a.end());
     vector<int>ans;
     for(auto i:b)
     {
         if(s.find(i)!=s.end())
         {
             ans.push_back(i);
         }
     }
     return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a, b;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.intersection(a, b);
        if (ans.size() == 0) {
            cout << "[]" << endl;
            cout << "~" << endl;
            continue;
        }
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends