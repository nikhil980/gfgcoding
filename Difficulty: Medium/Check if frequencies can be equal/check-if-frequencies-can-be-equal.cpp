//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    bool sameFreq(string& s) {
        // code here
        unordered_map<char,int>map;
        
        for(auto i:s)
        {
            map[i]++;
        }
        unordered_map<int,int>m;
        for(auto i:map)
        {
            m[i.second]++;
        }
        if(m.size()>2)
        {
            return false;
        }
        if(m.size()==1)
        {
            return true;
        }
        vector<pair<int,int>>arr;
        
        for(auto i:m)
        {
         
            arr.push_back(i);
        }
        
        
        
        if(arr[0].second==1)
        {
            if(arr[0].first>arr[1].first)
            {
                if(arr[0].first-arr[1].first==1){
                return true;}
                else
                {
                    return false;
                }
            }
            else if(arr[0].first==1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
           if(arr[1].first>arr[0].first)
            {
                if(arr[1].first-arr[0].first==1){
                return true;}
                else
                {
                    return false;
                }
            }
            else if(arr[1].first==1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;

        getline(cin, s);
        Solution ob;
        cout << (ob.sameFreq(s) ? "true" : "false") << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends