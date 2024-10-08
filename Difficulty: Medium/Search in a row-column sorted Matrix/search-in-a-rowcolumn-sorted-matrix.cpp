//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > &arr, int n, int m, int x)
    {
        if(x<arr[0][0])
        {
            return false;
        }
        if(x>arr[n-1][m-1])
        {
            return false;
        }
         int i=0;
         int j=m-1;
       
          while(j>=0&&i<n)
          {
              if(arr[i][j]==x)
              {
                  return true;
              }
              else if(arr[i][j]>x)
              {
                  j--;
              }
              else
              {
                  i++;
              }
          }
         return false;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {

        int n, m;
        cin >> n >> m;
        vector<vector<int> > matrix(n);

        for (int i = 0; i < n; i++) {
            matrix[i].assign(m, 0);
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }

        int x;
        cin >> x;
        Solution obj;
        if (obj.search(matrix, n, m, x))
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}

// } Driver Code Ends