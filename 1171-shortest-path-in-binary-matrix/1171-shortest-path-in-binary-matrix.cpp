class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        if(grid[0][0]==1 || grid[n-1][m-1]==1){
            return -1;
        }
        queue<pair<int,int>>Qq;
        vector<pair<int,int>>helper={{0,-1},{0,1},{1,0},{-1,0},{-1,1},{-1,-1},{1,1},{1,-1}};
        Qq.push({0,0});
        grid[0][0]=1;
        while(!Qq.empty()){
            int i=Qq.front().first;
            int j=Qq.front().second;
            Qq.pop();
            int dist=grid[i][j];
            if(i==n-1 && j==m-1){
                return dist;
            }
            for(auto it:helper){
                int newi=i+it.first;
                int newj=j+it.second;
                if(newi>=0 && newj>=0 && newi<n && newj<m &&grid[newi][newj]==0){
                    Qq.push({newi,newj});
                    grid[newi][newj]=dist+1;
                }
            }

        }
        return -1;
    }
};