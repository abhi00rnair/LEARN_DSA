class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>visited(n,vector<int>(m,-1));

        vector<pair<int,int>>temp;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0 || j==0 || i==n-1 ||j==m-1) && grid[i][j]==1){
                    temp.push_back({i,j});
                }
            }
        }

        vector<int>tp{-1,0,0,1};
        vector<int>tr{0,1,-1,0};

        for(auto it:temp){
            dfs(it.first,it.second,visited,grid,tp,tr);
        }
        int rett=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m ;j++){
                if(visited[i][j]==-1 && grid[i][j]==1){
                    rett++;
                }
            }
        }
        return rett;
    }
    void dfs(int i, int j, vector<vector<int>>&visited, vector<vector<int>>&grid,vector<int>&tp, vector<int>&tr){
        visited[i][j]=1;
        for(int x=0;x<4;x++){
            int newrow=i+tp[x];
            int newcolo=j+tr[x];

            if(newrow>=0 &&newcolo>=0 && newrow<grid.size() && newcolo<grid[0].size() && visited[newrow][newcolo]==-1 && grid[newrow][newcolo]==1){
                dfs(newrow, newcolo,visited,grid, tp,tr);
            }
        }
    }
};