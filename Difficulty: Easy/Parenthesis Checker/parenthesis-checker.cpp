//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
       
        if(x.length()<=1)
        {
            return false;
        }
        stack<char>st;
        int i=0;
        for(i;i<x.length();i++)
        {
            if(x[i]=='(')
            {
                st.push(')');
                continue;
            }
            if(x[i]=='{')
            {
                st.push('}');
                continue;
            }
            if(x[i]=='[')
            {
                st.push(']');
                continue;
            }
            if(st.empty()&&(x[i]==')'||x[i]==']'||x[i]=='}'))
            {
                return false;
            }
            if(x[i]==st.top())
            {
                st.pop();
                continue;
            }
            else
            {
                return false;
            }
           
          
        }
       
        if(i<x.length()-1)
        {
            return false;
        }
        if(st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends