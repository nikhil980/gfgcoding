//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxLength(string& str) {
        // code here
          stack<int>s;
       s.push(-1);
       int count=0;
       for(int i=0;i<str.length();i++)
       {
           if(str[i]=='(')
           {
               s.push(i);
           }
           else
           {
               s.pop();
               if(s.empty())
               {
                   s.push(i);
               }
               int ans=i-s.top();
               count=max(ans,count);
           }
       }
         return count;
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
        cout << ob.maxLength(S) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends