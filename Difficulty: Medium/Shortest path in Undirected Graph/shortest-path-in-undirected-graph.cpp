//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
       
        vector<vector<int>> adj(N);
        
        for(const auto it: edges){
            int src = it[0];
            int ad = it[1];
            adj[src].push_back(ad);
            adj[ad].push_back(src);
        }
        
        // we need a queue data structure
        queue<pair<int,int>> q;
        q.push({src,0});
        
        // and we need a array to strore the distnce
        vector<int> arr(N,INT_MAX);
        arr[src] = 0;
        
        while(!q.empty()){
            int node = q.front().first;
            int dist = q.front().second;
            q.pop();
            

            for(auto it :adj[node]){
 
                if(arr[it] > dist+1){
                    arr[it] = dist+1;
                    q.push({it,arr[it]});
                }
            }
        }

        for(int i=0;i<N;i++){
            if(arr[i] == INT_MAX){
                arr[i] = -1;
            }
        }
        
        return arr;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends