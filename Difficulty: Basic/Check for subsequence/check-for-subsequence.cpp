//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std; 

// } Driver Code Ends

class Solution{
    public:
    bool isSubSequence(string A, string B) 
    {
        int i=0;
        int j=0;
        while(i<B.length()&&j<A.length())
        {
            if(j==A.length())
            {
                return true;
            }
            if(B[i]==A[j])
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
          if(j==A.length())
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
    scanf("%d",&t);
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;  
        Solution ob;
        if(ob.isSubSequence(A,B))
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0; 
} 

// } Driver Code Ends