class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>visited(n,-1);
        vector<int>pathvisited(n,0);
        vector<int>rett;

        for(int i=0;i<n;i++){
            dfs(graph, visited, pathvisited,i);
            }

        for(int it=0;it<n;it++){
            if(visited[it]==1){
                rett.push_back(it);
            }
        }
        return rett;
    }

    bool dfs(vector<vector<int>>&graph, vector<int>&visited, vector<int>&pathvisited, int i){
        if(visited[i]!=-1){
            return visited[i];
        }

        visited[i]=0;
        pathvisited[i]=1;

        for(int it:graph[i]){
            if(pathvisited[it]==1 || dfs(graph,visited,pathvisited,it)==false){
                return false;
            }
        }
        pathvisited[i]=0;
        visited[i]=1;
        return true;
    }
};