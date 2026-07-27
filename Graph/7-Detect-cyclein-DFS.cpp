class Solution {
  public:
    bool cycleDFS(int node, int parent, vector<bool> & visited, vector<vector<int>>& edges) {
        visited[node] = 1;
        
        for(int i = 0; i < edges[node].size(); i++) {
            if(edges[node][i] == parent)
            continue;
            
            if(visited[edges[node][i]])
            return 1;
            
            if(cycleDFS(edges[node][i], node, visited, edges))
            return 1;
        }
        
        return 0;
    }
  
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Converting Edges to the adjacency list
        vector<vector<int>> adjList(V);
        
        for(int i = 0; i < edges.size(); i++) {
            adjList[edges[i][0]].push_back(edges[i][1]);
            adjList[edges[i][1]].push_back(edges[i][0]);
        }
        
        // Simulating the logic
        vector<bool> visited(V, 0);
        
        for(int i = 0; i < V; i++)
        if(!visited[i] && cycleDFS(i, -1, visited, adjList))
        return 1;
        
        return 0;
    }
};