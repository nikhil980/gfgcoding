//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    bool isBridge(int V, vector<vector<int>> &edges, int c, int d) {
      
        vector<vector<int>> adj(V);
        for(auto &edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
      
        vector<bool> visited(V, false);
        dfs(adj, c, visited);
        
    
        bool initiallyConnected = visited[d];
        
   
        adj[c].erase(remove(adj[c].begin(), adj[c].end(), d), adj[c].end());
        adj[d].erase(remove(adj[d].begin(), adj[d].end(), c), adj[d].end());
        
   
        visited.assign(V, false);
        dfs(adj, c, visited);
        
    return initiallyConnected && !visited[d];
    }

  private:
    void dfs(const vector<vector<int>> &adj, int node, vector<bool> &visited) {
        visited[node] = true;
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                dfs(adj, neighbor, visited);
            }
        }
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        vector<vector<int>> edges(E);
        int i = 0;
        while (i++ < E) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            edges[i - 1].push_back(u);
            edges[i - 1].push_back(v);
        }

        int c, d;
        cin >> c >> d;

        Solution obj;
        bool l = obj.isBridge(V, edges, c, d);
        if (l)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends