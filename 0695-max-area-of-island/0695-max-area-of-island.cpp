class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ret=0;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>visit(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(visit[i][j]==0 && grid[i][j]==1){
                    ret=max(ret,func(grid, visit,i,j,m,n));
                }
            }
        }
        return ret; 
    }
    int func(vector<vector<int>>&grid, vector<vector<int>>&visit,int i, int j, int m , int n){
        queue<pair<int, int>>que;
        int temp=1;
        que.push({i,j});
        visit[i][j]=1;
            while (!que.empty()) {
            pair<int, int> p = que.front();
            que.pop();
            int row = p.first;
            int col = p.second;
            vector<pair<int, int>>temparr = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
            for (auto dir : temparr) {
                int newRow = row + dir.first;
                int newCol = col + dir.second;
                if (newRow >= 0 && newRow < grid.size() && newCol >= 0 && newCol < grid[0].size() &&
                    !visit[newRow][newCol] && grid[newRow][newCol] == 1) {
                    que.push({newRow, newCol});
                    visit[newRow][newCol] = 1;
                    temp++;
                }
            }
        }
        return temp;
    }

};