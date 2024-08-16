//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  bool issafe(int x,int y,vector<vector<int>>&mat,int n, vector<vector<bool>> &visited)
  {
      if((x>=0&&x<n)&&(y>=0&&y<n)&&(visited[x][y]!=1)&&(mat[x][y]!=0))
      {
          return true;
      }
      return false;
      
  }
       void maze(int x,int y,vector<vector<int>> &mat,int n, vector<string> &ans, vector<vector<bool>>& visited,string str)
       {
           //base 
           if(x==n-1&&y==n-1)
           {
               ans.push_back(str);
               return;
           }
           
           //for U,D,L,R
           //up
           visited[x][y]=1;
           
           if(issafe(x-1,y,mat,n,visited))
           {
               maze(x-1,y,mat,n,ans,visited,str+'U');
           }
           //Left
            if(issafe(x,y-1,mat,n,visited))
           {
               maze(x,y-1,mat,n,ans,visited,str+'L');
           }
           //Down
            if(issafe(x+1,y,mat,n,visited))
           {
               maze(x+1,y,mat,n,ans,visited,str+'D');
           }
            //Right
            if(issafe(x,y+1,mat,n,visited))
           {
               maze(x,y+1,mat,n,ans,visited,str+'R');
           }
               visited[x][y]=0;
       }
  
    vector<string> findPath(vector<vector<int>> &mat) 
    {
        int n=mat.size();
        vector<vector<bool>> visited(n,vector<bool>(n,0));
          vector<string> ans;
        if(mat[0][0]==0)
        {
            return ans;
        }
        string str="";
      
         maze(0,0,mat,n,ans,visited,str);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends