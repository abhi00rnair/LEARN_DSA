class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int>visited(n+1,-1);
        queue<int>Qq;

        vector<int>adj[n+1];
        for(int i=0;i<dislikes.size();i++){
            int node1=dislikes[i][0];
            int node2=dislikes[i][1];
            adj[node1].push_back(node2);
            adj[node2].push_back(node1);
        }
        int color=0;
        for(int i=1;i<=n;i++){
            if(visited[i]==-1){
                Qq.push(i);
                visited[i]=color;
            }
            while(!Qq.empty()){
                int node=Qq.front();
                Qq.pop();

                for(int it: adj[node]){
                    if(visited[it]==-1){
                        Qq.push(it);
                        visited[it]=!visited[node];
                    }else if(visited[it]==visited[node]){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};