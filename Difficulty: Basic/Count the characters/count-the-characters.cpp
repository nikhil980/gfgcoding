//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
        int getCount (string S, int N)
        {
           unordered_map<char,int>ans;
           for(int i=0;i<S.length();i++)
           {
                  if(i+1 < S.length()) 
                {
                    if(S[i] == S[i+1])
                       continue;
                }
               ans[S[i]]++;
           }
          int f=0;
           for(auto e:ans)
           {
               if(e.second==N)
               {
                   f++;
               }
           }
           return f;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        int n; cin >> n;
        
        Solution ob;
        cout <<ob.getCount (s, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends