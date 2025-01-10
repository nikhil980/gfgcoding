//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
         // code here
        unordered_map<char,int> charInd;
        int initial=-1;
        
        int ans=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(charInd.find(s[i]) != charInd.end())
                initial=max(initial , charInd[s[i]]);
        
            ans=max(ans, i - initial);
            charInd[s[i]]=i;
            
        }
        
        return ans;
        
        
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends