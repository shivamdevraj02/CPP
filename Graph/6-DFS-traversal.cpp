void DFS(int node, vector<int>adj[], vector<int>&ans,vector<bool>&visited)
{
    visited[node]=1;
    ans.push_back(node);

    for(int j=0; j<adj[node].size();j++)
    {
        if(!visited[adj[node][j]])
        {
            DFS(adj[node][j],adj,ans,visited);

        }
    }

}