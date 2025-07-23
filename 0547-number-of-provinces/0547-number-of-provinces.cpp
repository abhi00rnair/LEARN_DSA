class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int nodes=isConnected[0].size();
        vector<int>visited(nodes, -1);
        queue<int>Qq;
        int rett=0;

        for(int i=0;i<nodes;i++){
            if(visited[i]==-1){
                visited[i]=1;
                Qq.push(i);
                rett++;
            }
            while(!Qq.empty()){
                int temp=Qq.front();
                Qq.pop();
                for(int j=0;j<nodes;j++){
                    if(visited[j]==-1 && isConnected[temp][j]==1){
                        visited[j]=1;
                        Qq.push(j);
                    }
                }
            }
        }
        return rett;
    }
};