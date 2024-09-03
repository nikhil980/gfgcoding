//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    char firstRep (string S)
    {
         unordered_map<char,int>s;
         
         for(int i=0;i<S.length();i++)
         {
             s[S[i]]++;
         }
       
         for(int i=0;i<S.length();i++)
         {
             if(s[S[i]]>1)
             {
                 return S[i];
             }
         }
         return '#';
    }
    
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        char res = ob.firstRep (s);
        if (res == '#') cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}



// } Driver Code Ends