//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int newColor) {
int n=image.size();

        int m=image[0].size();
        vector<vector<int>>adj(image.begin(),image.end());
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        queue<pair<int,int>>q;
        vector<vector<int>>dir={{-1,0},{0,+1},{+1,0},{0,-1}};
        q.push({sr,sc});
        int ans=image[sr][sc];
        adj[sr][sc]=newColor;
        
        vis[sr][sc]=1;
        while(!q.empty())
        {
            auto it=q.front();
            int row=it.first;
            int col=it.second;
            q.pop();
            for(auto it:dir)
            {
                int nr=row+it[0];
                int nc=col+it[1];
                if(nr>=0 && nc>=0 && nr<n && nc<m && !vis[nr][nc] &&
                adj[nr][nc]==ans)
                {
                    q.push({nr,nc});
                    adj[nr][nc]=newColor;
                    vis[nr][nc]=1;
                }
                
            }
        }
        return adj;
        
        
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> image(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cin >> image[i][j];
        }
        int sr, sc, newColor;
        cin >> sr >> sc >> newColor;
        Solution obj;
        vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
        for (auto i : ans) {
            for (auto j : i)
                cout << j << " ";
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends