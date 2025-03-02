//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        // Code here
        
        
        int V = adj.size();
        stack<int> s;
        vector<bool> visited(V, false);
        
        vector<int> ans;
    
        s.push(0);
        while (!s.empty()) {
            int node = s.top();
            s.pop();
    
            if (!visited[node]) {
                // cout << node << " ";
                ans.push_back(node);
                visited[node] = true;
    
                // for (int neighbor : adj[node]) {
                //     if (!visited[neighbor]) {
                //         s.push(neighbor);
                //     }
                // }
                // Push neighbors in reverse order to maintain correct DFS order
                for (int i = adj[node].size() - 1; i >= 0; i--) {
                    int neighbor = adj[node][i];
                    if (!visited[neighbor]) {
                        s.push(neighbor);
                    }
                }
            }
        }
        
        return ans;
        
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        Solution obj;
        vector<int> ans = obj.dfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends