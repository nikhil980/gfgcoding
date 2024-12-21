//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& matrix) {
        // code here
        int n=matrix.size();
          int k=matrix.size()-1;
          int arr[k+1][k+1];
          int a=0,b;
          for(int i=k;i>=0;i--)
          {
              b=0;
              for(int j=0;j<=k;j++)
              {
                  
                  arr[a][b]=matrix[j][i];
                  b++;
              }
              a++;
          }
          
           for(int i=0;i<=k;i++)
          {
              for(int j=0;j<=k;j++)
              {
                 matrix[i][j]=arr[i][j];
              }
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
        vector<vector<int> > matrix(n);

        for (int i = 0; i < n; i++) {
            matrix[i].assign(n, 0);
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        ob.rotateby90(matrix);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j)
                cout << matrix[i][j] << " ";
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends