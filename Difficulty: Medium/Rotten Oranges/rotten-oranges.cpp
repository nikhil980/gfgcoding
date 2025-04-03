//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:

bool isSafe(int x,int y,vector<vector<int>>& mat){
        return x >= 0 && x < mat.size() && y >= 0 && y < mat[0].size() && mat[x][y] == 1;
    }
    int orangesRotting(vector<vector<int>>& mat) {
        int m = mat.size(),n = mat[0].size();
        int freshOrg = 0,time = 0;
        vector<int> dx = {0,1,0,-1};
        vector<int> dy = {1,0,-1,0};
        deque<pair<int,int>> dq;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j] == 2)
                    dq.push_back({i,j});
                    
                if(mat[i][j] == 1)
                    freshOrg++;
            }
        }
        
        while(!dq.empty() && freshOrg){
            int size = dq.size();
            
            for(int sz=0;sz<size;sz++){
                auto idxs = dq.front();
                dq.pop_front();
                
                for(int k=0;k<4;k++){
                    int newi = idxs.first + dx[k];
                    int newj = idxs.second + dy[k];
                                
                    if(isSafe(newi,newj,mat)){
                        mat[newi][newj] = 2;
                        dq.push_back({newi,newj});
                        freshOrg--;
                    }
                }
            }
            time++;
            if(!freshOrg) break;
        }
        return freshOrg == 0 ? time : -1;
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m, -1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> mat[i][j];
            }
        }
        Solution obj;
        int ans = obj.orangesRotting(mat);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends