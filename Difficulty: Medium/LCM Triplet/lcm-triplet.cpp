//{ Driver Code Starts
// Initial Template for C++

// Initial Template for C++
// Back-end complete function Template for C++
// User function Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long lcmTriplets(long long N) {
        // code here
     if(N<=2)
     {
         return N;
     }
     if(N%2==1)
     {
         return N*(N-1)*(N-2);
     }
     if(N%3==0)
     {
         return (N-1)*(N-2)*(N-3);
     }
     return N*(N-1)*(N-3);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.lcmTriplets(N) << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends