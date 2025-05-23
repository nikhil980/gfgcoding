//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long int maxSumLCM(int n) 
    {
        // code here
       long long int ans=0;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                ans+=i;
                if(i!=(n/i))
                    ans+=(n/i);
            }
        }
        return(ans);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n;
        cin >> n ;
        Solution ob;
        cout<<ob.maxSumLCM(n)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends