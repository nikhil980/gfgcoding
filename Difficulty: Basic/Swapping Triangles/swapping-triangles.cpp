//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> swapTriangle(int N, vector<vector<int>> A) {
        // code here
          vector<vector<int>>ans;
        for(int i=0;i<N;i++){
            vector<int>a;
            for(int j=0;j<N;j++){
                a.push_back(A[j][i]);
            }
            ans.push_back(a);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> A(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> A[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.swapTriangle(N, A);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    
cout << "~" << "\n";
}
}
// } Driver Code Ends