//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
         
       int dp(int n){
            if(n<12) return n;
            int sum = dp(n/2) + dp(n/3) + dp(n/4);
            
            return sum;
        }
        int maxSum(int n)
        {
            //code here.
            if(n<12) return n;

            return dp(n);
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends