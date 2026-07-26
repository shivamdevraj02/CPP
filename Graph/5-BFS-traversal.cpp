vector<int> BFSGraph(int v, vector<int> adj[])
{
    queue<int> q;
    vector<bool> visited(v, false);

    q.push(0);
    visited[0] = true;

    vector<int> ans;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        ans.push_back(node);

        for (int j = 0; j < adj[node].size(); j++)
        {
            if (!visited[adj[node][j]])
            {
                visited[adj[node][j]] = true;
                q.push(adj[node][j]);
            }
        }
    }

    return ans;
}