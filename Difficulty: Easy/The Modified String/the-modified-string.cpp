//{ Driver Code Starts
#include<bits/stdc++.h>
#define br char xx; cin>>xx; cout<<xx<<endl;
#define lli long long int
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of characters which Ishaan must insert  
    //such that string doesn't have three consecutive same characters.
    int modified (string s)
    {
       int i=0;
       int k=1;
       int ans=0;
       for(int i=0;i<s.length()-1;i++)
       {
           if(s[i]==s[i+1])
           {
               k++;
           }
           else
           {
               k=1;
           }
           if(k==3)
           {
               ans++;
               k=1;
           }
           
       }
       return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    string a;
    while(t--){
        cin>>a;
        Solution obj;
        cout<<obj.modified(a)<<endl;
    }
    return 0;
}

// } Driver Code Ends