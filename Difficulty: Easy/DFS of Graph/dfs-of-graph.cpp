//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
     void dfs(int u, vector<int> &vis, vector<vector<int>> &adj, vector<int> &ans)
{
    if (vis[u])
        return;
    vis[u] = 1;
    ans.push_back(u);
    for (int &v : adj[u])
    {
        if (!vis[v])
        {
            dfs(v, vis, adj, ans);
        }
    }
}
vector<int> dfs(vector<vector<int>> &adj)
{
    int v = adj.size();
    vector<int> ans;
    vector<int> vis(v, 0);
    dfs(0, vis, adj, ans);
    return ans;
}
};



//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        int V;
        cin >> V;
        cin.ignore();
        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

        for (int i = 0; i < V; i++) {
            string input;
            getline(cin, input);
            int num;
            vector<int> node;
            stringstream ss(input);
            while (ss >> num) {
                node.push_back(num);
            }
            adj[i] = node;
        }

        Solution obj;
        vector<int> ans = obj.dfs(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends