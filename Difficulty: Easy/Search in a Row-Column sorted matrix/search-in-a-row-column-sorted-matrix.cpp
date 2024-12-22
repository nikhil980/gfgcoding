//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int X) {
        // your code here
        int N=mat.size();
        int M=mat[0].size();
        
	      if(X<mat[0][0]||X>mat[N-1][M-1])
	      {
	          return 0;
	      }
	      if(X==mat[0][0]||X==mat[N-1][M-1])
	      {
	          return 1;
	      }
	      int i=0;
	      int j=M-1;
	      while(i<N&&j>=0)
	      {
	           if(mat[i][j]==X)
	           {
	               return 1;
	           }
	           if(mat[i][j]<X)
	           {
	               i++;
	           }
	           else
	           {
	               j--;
	           }
	      }
	      return 0;
	}
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c, 0));
        int x;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }
        cin >> x;
        Solution ob;
        bool an = ob.matSearch(matrix, x);
        if (an)
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends