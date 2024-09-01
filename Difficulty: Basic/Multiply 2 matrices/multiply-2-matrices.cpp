//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    void Multiply(vector<vector<int> >& A, vector<vector<int>>&B) {
       int n1=A.size();
         int m1=A[0].size();
         int n2=B.size();
         int m2=B[0].size();


          vector<vector<int>> matrix;
         for(int i=0;i<n1;i++)
         { 
             vector<int>rows;
               
             for(int j=0;j<m2;j++)
             {
                  int g=0;
                  for(int k=0;k<n1;k++)
                  {
                      g=g+(A[i][k]*B[k][j])%1000000007;
                      
                  }
                 rows.push_back(g);
                 
             }
             matrix.push_back(rows);
             
         }
         A=matrix;
    
    }
    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrixA(n, vector<int>(n,0));
		vector<vector<int>> matrixB(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrixA[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrixB[i][j];
			}
		}
		Solution ob;
		ob.Multiply(matrixA, matrixB);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++)
				cout << matrixA[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends