class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
         vector<vector<int>> visit(n, vector<int>(m, 0));
        int ret=0;
        //memset(visit,0,n*m*sizeof(int));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !visit[i][j]){
                        funcdfs(grid,n,m,visit,i,j);
                        ret++;
                }
            }
            }
        return ret;
    }
    
    void funcdfs(vector<vector<char>>&grid,int n, int m,vector<vector<int>>&visit,int i,int j){
        if(i<0|| i>=n || j<0 || j>=m || grid[i][j]=='0' || visit[i][j]){
            return;
        }
        visit[i][j]=1;
        funcdfs(grid,n,m,visit,i+1,j);
        funcdfs(grid,n,m,visit,i-1,j);
        funcdfs(grid,n,m,visit,i,j+1);
        funcdfs(grid,n,m,visit,i,j-1);
    }
};