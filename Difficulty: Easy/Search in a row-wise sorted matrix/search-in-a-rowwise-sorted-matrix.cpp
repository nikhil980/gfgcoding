//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        // code here
           bool flag=false;
        for(int j=0;j<mat.size();j++){
            int i=0;
  
            int k=mat[j].size()-1;
            while(i<=k){
                int mid=(i+k)/2;
                if(mat[j][mid]==x){
                    // cout<<"hahaha"<<endl;
                    flag=true;
                    break;
                }
                
                else if(mat[j][mid]<x){
                    i=mid+1;
                }
                else{
                    k=mid-1;
                    }
            }
        }
        return flag;
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
        if (obj.searchRowMatrix(matrix, x))
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends