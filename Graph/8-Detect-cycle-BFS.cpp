class Solution {
  public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        
        // build adjacency list
        vector<vector<int>>adj(V);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int>visited(V,0);
         // graph may be disconnected
         // so we need to check the cycle for each and every node individually
        for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            
            queue<pair<int,int>>q;
            q.push({i,-1});
            visited[i]=1;
            
            while(!q.empty()){
                int node = q.front().first;
                int parent = q.front().second;
                q.pop();
                for(int j=0;j<adj[node].size();j++){
                    int neighbor = adj[node][j];
                    if(parent == neighbor)
                        continue;
                    if(visited[neighbor])  
                        return 1;
                    
                    q.push({neighbor,node});
                    visited[neighbor] = 1;
                }
                
            }
            
            
        }
        
        }
        return false;
    }
};