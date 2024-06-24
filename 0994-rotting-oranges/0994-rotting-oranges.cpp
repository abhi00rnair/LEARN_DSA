class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<pair<int,int>,int>>que;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>visit(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    que.push({{i,j},0});
                    visit[i][j]=2;
                }
            }
        }int ret=0;
        while(!que.empty()){
            int x=que.front().first.first;
            int y=que.front().first.second;
            int time=que.front().second;
            ret=max(time,ret);
            que.pop();
            for(int k=0;k<1;k++){
                int tm=x;
                int tr=y;
                if(x+1<n && grid[x+1][y]==1 && visit[x+1][y]!=2){
                    que.push({{x+1,y},time+1});
                    visit[x+1][y]=2;
                }
                x=tm;
                y=tr;
                if(x-1>=0 && grid[x-1][y]==1 && visit[x-1][y]!=2){
                    que.push({{x-1,y},time+1});
                    visit[x-1][y]=2;
            }
                x=tm;
                y=tr;
                if(y+1<m && grid[x][y+1]==1 && visit[x][y+1]!=2){
                    que.push({{x,y+1},time+1});
                    visit[x][y+1]=2;
        }
                x=tm;
                y=tr;
                if(y-1>=0 && grid[x][y-1]==1 && visit[x][y-1]!=2){
                    que.push({{x,y-1},time+1});
                    visit[x][y-1]=2;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && visit[i][j]!=2){
                    return -1;
                }
            }
        }return ret;
    }
};