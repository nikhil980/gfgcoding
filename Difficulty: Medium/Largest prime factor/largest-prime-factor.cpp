//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int n)
    {
       if(n==1)
       {
           return 1;
       }
       long long int  i,j;
       for( i=2;i*i<=n;i++)
       {
           while(n%i==0)
           {
               j=i;
               n=n/i;
           }
       }
       if(n>1)
       {
           j=n;
       }
       return j;
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
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends