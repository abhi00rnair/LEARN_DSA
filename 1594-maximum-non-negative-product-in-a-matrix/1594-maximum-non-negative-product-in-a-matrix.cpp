class Solution {
public:
    int maxProductPath(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<long long>>mindp(n, vector<long long>(m));
        vector<vector<long long>>maxdp(n, vector<long long>(m));
        mindp[0][0]=grid[0][0];
        maxdp[0][0]=grid[0][0];
        for(int i=1;i<m;i++){
            mindp[0][i]=grid[0][i]*mindp[0][i-1];
            maxdp[0][i]=grid[0][i]*maxdp[0][i-1];
        }
        for(int i=1;i<n;i++){
            mindp[i][0]=grid[i][0]*mindp[i-1][0];
            maxdp[i][0]=grid[i][0]*maxdp[i-1][0];
        }

        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                long long top1=grid[i][j]*mindp[i-1][j];
                long long top2=grid[i][j]*maxdp[i-1][j];
                long long right1=grid[i][j]*mindp[i][j-1];
                long long right2=grid[i][j]*maxdp[i][j-1];

                mindp[i][j]=min({top1, top2, right1, right2});
                maxdp[i][j]=max({top1, top2, right1, right2});
            }
        }
        long long rett=maxdp[n-1][m-1];
        if(rett<0){return -1;}
        int mod=1e9+7;
        return rett%mod;
    }
};