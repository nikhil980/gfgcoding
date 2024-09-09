//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string s)
    {
      stack<char>st;
        for(int i=s.length();i>=0;i--)
        {
            
            if(st.empty())
            {
                st.push(s[i]);
            }
            if(st.top()==s[i])
            {
                continue;
            }
            else
            {
                st.push(s[i]);
            }
        }
        string ans="";
        while(!st.empty())
       {
           ans +=st.top();
           st.pop();
       }
       return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




// } Driver Code Ends