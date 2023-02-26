class Solution {
    void dfs(int node, vector<int> adj[], vector<int>& vec, vector<int> &vis) {
        vis[node] = 1;
        vec.push_back(node);
        for(auto it : adj[node]) {
            if(!vis[it]) {
                dfs(it, adj, vec, vis);
            }
        } 
        // return; //would work same with or without "return;"
    }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    // tc = O(v + 2E) // no. of nodes;
    // sc = O(v);
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        vector<int> vec; // will store ans
        vector<int> vis(v);
        int start = 0;
        dfs(start, adj, vec, vis);
        return vec;
    }
};
