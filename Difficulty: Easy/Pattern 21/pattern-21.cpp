//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) 
    {
        for(int i=0; i<n; i++) {
        if(i == 0 || i == n-1)
            cout << string(n,'*') << "\n";
        else
            cout << "*" << string(n-2,' ') << "*" << "\n";
    }
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
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends