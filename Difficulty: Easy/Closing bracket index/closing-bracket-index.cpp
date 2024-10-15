//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int closing (string s, int pos)
        {
        	if(s[pos]!='[')
        	{
        	    return pos;
        	}
        	int cnt=1;
        	for(int i=pos+1;i<s.length();i++)
        	{
        	    
        	    if(s[i]=='[')
        	    {
        	        cnt++;
        	    }
        	    if(s[i]==']')
        	    {
        	        cnt--;
        	    }
        	    if(cnt==0)
        	    {
        	        return i;
        	    }
        	}
        	return -1;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int pos; cin >> pos;
        Solution ob;
		cout <<ob.closing (s, pos) << '\n';
	}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends