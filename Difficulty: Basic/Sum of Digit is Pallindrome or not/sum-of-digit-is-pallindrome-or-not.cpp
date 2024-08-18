//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int n)
    {
        int k=0;
        while(n)
        {
            k=k+n%10;
            n=n/10;
        }
       int m=0;
       int x=k;
       while(k)
       {
           m=m*10+k%10;
           k=k/10;
       }
        return (m==x);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends