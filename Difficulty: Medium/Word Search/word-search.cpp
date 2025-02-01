//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    bool dfs(int row,int col,vector<vector<char>>& mat,int s,vector<vector<bool>>& visited,string& word)
    {
        if(s==word.size())
        return true;
        if(row<0 || row>=mat.size() || col<0 || col>=mat[0].size() || visited[row][col]==true || mat[row][col]!=word[s])
        return false;
        visited[row][col]=true; //visited=true;
        int rs[]={-1,1,0,0};
        int cs[]={0,0,1,-1};
        for(int i=0;i<4;i++)
        {
            int newr = row+rs[i];//horizontal and vertical movement;
            int newc = col+cs[i];
            if(dfs(newr,newc,mat,s+1,visited,word))//dfs using rectursion to move forward
            {
                return true;
            }
            
        }
        visited[row][col]=false;//backtrack
            return false;
    }
    bool isWordExist(vector<vector<char>>& mat, string& word) {
        // Code her
        int m = mat.size();
        int n= mat[0].size();
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        for(int row=0;row<m;row++)
        {
            for(int col=0;col<n;col++)
            {
                if(dfs(row,col,mat,0,visited,word))//0 initiated the position of char in word;
                {
                    return true;
                }
            }
        }
        return false; 
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> mat(n, vector<char>(m, '*'));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        string word;
        cin >> word;
        Solution obj;
        bool ans = obj.isWordExist(mat, word);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends