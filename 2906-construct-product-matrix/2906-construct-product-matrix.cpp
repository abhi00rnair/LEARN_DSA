class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int MOD=12345;
        vector<vector<long long>>pre(n,vector<long long>(m));
        vector<vector<long long>>suff(n,vector<long long>(m));
        vector<vector<int>>rett(n,vector<int>(m));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 && j==0){
                    pre[i][j]=1;
                }else if(j>0){
                    pre[i][j]=(pre[i][j-1]*grid[i][j-1])%MOD;
                }else{
                    pre[i][j] =(pre[i-1][m-1]*grid[i-1][m-1])%MOD;
                }
            }
        }
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(i==n-1 && j==m-1){
                    suff[i][j]=1;
                }else if(j<m-1){
                    suff[i][j]=(suff[i][j+1]*grid[i][j+1])%MOD;
                }else{
                    suff[i][j]=(suff[i+1][0]*grid[i+1][0])%MOD;
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                rett[i][j]=(suff[i][j]*pre[i][j])%MOD;
            }
        }
        return rett;
    }
};