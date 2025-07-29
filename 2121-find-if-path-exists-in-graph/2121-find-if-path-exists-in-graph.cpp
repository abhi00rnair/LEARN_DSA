class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        queue<int>qq;
        vector<vector<int>>adj(n);
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int>visited(n+1, -1);
        visited[source]=0;
        qq.push(source);
        while(!qq.empty()){
            int node=qq.front();
            qq.pop();
            if(node==destination){
                return true;
            }
            for(int it:adj[node]){
                if(visited[it]==-1){
                    qq.push(it);
                    visited[it]=0;
                }
            }
        }
        return false;
    }
};