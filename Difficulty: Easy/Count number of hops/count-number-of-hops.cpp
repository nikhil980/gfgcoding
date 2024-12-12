//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to count the number of ways in which frog can reach the top.
    int countWays(int n) {

        // your code here
         long long int first=1;
        long long int second=0;
        long long int third=0;
        long long int fourth;
        for(int i=0;i<n;i++){
            fourth=(first+second+third)%1000000007;
            third=second;
            second=first;
            first=fourth;
            
        }
        fourth%=1000000007;
        return fourth;

    }
};


//{ Driver Code Starts.
int main() {
    // taking testcases
    int t;
    cin >> t;

    while (t--) {
        // taking number of steps in stair
        int n;
        cin >> n;
        Solution ob;
        // calling function countWays()
        cout << ob.countWays(n) << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends