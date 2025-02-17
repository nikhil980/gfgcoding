//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int sumOfSquares(int n) {
        // code here
        return n*(n+1)*(2*n+1)/6;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int number;
        cin >> number;

        Solution ob;
        int ans = ob.sumOfSquares(number);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends