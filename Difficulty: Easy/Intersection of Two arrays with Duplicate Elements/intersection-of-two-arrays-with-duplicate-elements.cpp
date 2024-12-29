//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        // code here
        
        unordered_set<int>a1(a.begin(),a.end());
        unordered_set<int>a2(b.begin(),b.end());
        
         set<int>ans;
        if(a1.size()>a2.size())
        {
            for(auto i:a1)
            {
                if(a2.find(i)!=a2.end())
                {
                   ans.insert(i); 
                }
            }
        }
        else
        {
             for(auto i:a2)
            {
                if(a1.find(i)!=a1.end())
                {
                   ans.insert(i); 
                }
            }
        }
        
        return {ans.begin(),ans.end()};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr1, arr2;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr1.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            arr2.push_back(number);
        }

        Solution ob;
        vector<int> res = ob.intersectionWithDuplicates(arr1, arr2);
        sort(res.begin(), res.end());

        if (res.size() == 0) {
            cout << "[]" << endl;
        } else {
            for (auto it : res)
                cout << it << " ";
            cout << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends