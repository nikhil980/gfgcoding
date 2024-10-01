//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int number){
         long long fib[number+1];
        fib[0]=0;
        fib[1]=1;
        for(int i=2;i<=number;i++)
        {
            fib[i]=fib[i-1] %1000000007+fib[i-2]% 1000000007;
        }
        return fib[number]% 1000000007;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends