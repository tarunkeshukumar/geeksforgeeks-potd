// https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
    void dfs(int i , bool visited[], vector<int> adj[], vector<int> &v){
        
        v.push_back(i);
        visited[i] = true;
        
        for(auto x : adj[i]){
            if(!visited[x])
                dfs(x, visited, adj, v);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        
    //     stack<int> s;
    //     vector<int> v;
    //     bool visited[V] = {0};
        
    //     s.push(0);
        
    //     while(!s.empty()){
    //         int t = s.top();
    //         s.pop();
    //         v.push_back(t);
    //         if(!visited[t]){
    //             visited[t] = true;
    //             for( int x : adj[t]){
    //                 visited[x] = true;
    //                 s.push(x);
    //             }
            
    //         }
    //     }
    // return v;
    
    vector<int> v;
    bool visited[V] = {0};
    
    for(int i=0; i< V; i++){
        if(!visited[i]){
            dfs(i , visited, adj, v);
        }
    }
    return v;
    }
};
