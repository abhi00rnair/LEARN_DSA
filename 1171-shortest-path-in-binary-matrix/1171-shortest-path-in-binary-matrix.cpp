class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]==1){
            return -1;
        }
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>Qq;
        vector<vector<int>>dist(n,vector<int>(m,INT_MAX));
        dist[0][0]=1;

        Qq.push({0,0});
        vector<int>tp{-1,0,0,1,-1,-1,1,1};
        vector<int>tr{0,1,-1,0,1,-1,1,-1};

        while(!Qq.empty()){
            int row=Qq.front().first;
            int colo=Qq.front().second;
            int distt=dist[row][colo];
            if(row==n-1 && colo==m-1){
                return distt;
            }
            Qq.pop();
            for(int x=0;x<8;x++){
                    int newrow=row+tp[x];
                    int newcolo=colo+tr[x];
                    if(newrow>=0 && newcolo>=0 && newrow<n && newcolo<m && grid[newrow][newcolo]==0 && dist[newrow][newcolo]==INT_MAX){
                        dist[newrow][newcolo]=distt+1;
                        Qq.push({newrow,newcolo});
                    }
            }
        }
        return -1;

    }
};