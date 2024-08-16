//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
   
class Solution{
public:
    int isBitSet(int N)
    {
         if(N==0) return 0;
         if((N&N+1)==0) return 1;
         return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isBitSet(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends