// https://practice.geeksforgeeks.org/problems/shortest-source-to-destination-path3544/1

class Solution {
  public:
    int shortestDistance(int n, int m, vector<vector<int>> arr, int X, int Y) {
        // code here
        // BFS
        if(arr[0][0]==0 || arr[X][Y]==0)
            return -1;
        
        vector<vector<int>> vis(n,vector<int>(m,0));
        int ans=0, steps = n*m;
        queue<pair<int,pair<int,int>>> q;
        
        q.push({0,{0,0}});
        
        int x[]={-1,1,0,0};
        int y[]={0,0,-1,1};
        while(!q.empty()){
            int step = q.front().first;
            auto temp = q.front().second;
            q.pop();
            
            if(temp.first == X && temp.second==Y)
                return step;
            int i = temp.first;
            int j = temp.second;
            
            for(int k=0; k<4; ++k){
                int newi = i + x[k];
                int newj = j + y[k];
                if(newi>=0 && newi<n && newj>=0 && newj<m
                    && arr[newi][newj] == 1 && vis[newi][newj]==0){
            
                        q.push({step+1,{newi,newj}});
                        vis[newi][newj]=1;
                    }
            }
        }
        
        return -1;
    }
};
