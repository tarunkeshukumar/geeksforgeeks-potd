// https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> v;
        vector<bool> vis(V+1,false);
        queue<int> q;
        q.push(0);
        vis[0] = true;
        while(!q.empty()){
            auto t  = q.front();
            q.pop();
            v.push_back(t);
            for(auto x:adj[t]){
                if(!vis[x]){
                    vis[x]=true;
                    q.push(x);
                }
            }
        }
    return v;
    }
};
