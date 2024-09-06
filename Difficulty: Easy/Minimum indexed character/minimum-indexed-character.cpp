//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
	string printMinIndexChar(string str, string patt)
	{
	    unordered_set<char>h;
          for(int i=0;i<patt.length();i++)
          {
              h.insert(patt[i]);
          }
        for(int i=0;i<str.length();i++)
        {
            if(h.find(str[i])!=h.end())
            {
                string x;
                x +=str[i];
                return x;
            }
        }
        return "$";
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string str;
        cin>>str;
        string patt;
        cin >> patt;
        Solution obj;
        cout<<obj.printMinIndexChar(str, patt)<<endl;
    }
    
	return 0;
}
// } Driver Code Ends