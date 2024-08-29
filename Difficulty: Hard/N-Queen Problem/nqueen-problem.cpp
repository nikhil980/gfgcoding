//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool isValid(int i,int j,vector<vector<int>>&matrix){
        int x = i, y = j;
        int n = matrix.size();
        
        // Across Column
        for(int j=0;j<n;j++){
            if (matrix[x][j]!=0) return false;    
        }
        
        // Across Row
        for(int i=0;i<n;i++){
            if (matrix[i][y]!=0) return false;    
        }
        
        // Across Both Diagonals
        for(int i=x,j=y;i<n && j<n;i++,j++){
            if (matrix[i][j]!=0) return false;    
        }
        for(int i=x,j=y;i>=0 && j>=0;i--,j--){
            if (matrix[i][j]!=0) return false;    
        }
        for(int i=x,j=y;i<n && j>=0;i++,j--){
            if (matrix[i][j]!=0) return false;    
        }
        for(int i=x,j=y;i>=0 && j<n;i--,j++){
            if (matrix[i][j]!=0) return false;    
        }
        
        return true;
    }
    void solve(int j,vector<vector<int>>&matrix,vector<int>&temp,vector<vector<int>>&ans){
        int n = matrix.size();
        if (j==n){
            ans.push_back(temp);
            return;
        }
        
        for(int i=0;i<n;i++){
            if (isValid(i,j,matrix)){
                temp.push_back(i+1);
                matrix[i][j] = i+1;
                solve(j+1,matrix,temp,ans);
                matrix[i][j] = 0;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>>ans;
        vector<int>temp;
        vector<vector<int>>matrix(n,vector<int>(n,0));
        solve(0,matrix,temp,ans);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends