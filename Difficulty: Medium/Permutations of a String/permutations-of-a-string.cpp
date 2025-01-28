//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  vector<string>ans;
    
    void fun(string &ptr,int i)
    {
         if(i>=ptr.length())
    {
        ans.push_back(ptr);
        return;
    }
    for(int j=i;j<ptr.length();j++)
    {
        swap(ptr[i],ptr[j]);
        //recursivecall
        fun(ptr,i+1);
        //bactrakingcall
        swap(ptr[i],ptr[j]);
    }
    }
    
    vector<string> findPermutation(string &ptr) 
    {
        fun(ptr,0);
        vector<string>a;
        unordered_set<string>k;
        for(auto i:ans)
        {
            if(k.find(i)==k.end())
            {
                 k.insert(i);
                 a.push_back(i);
            }
           
            
        }
        return a;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        vector<string> ans = ob.findPermutation(S);
        sort(ans.begin(), ans.end());
        for (auto i : ans) {
            cout << i << " ";
        }
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends