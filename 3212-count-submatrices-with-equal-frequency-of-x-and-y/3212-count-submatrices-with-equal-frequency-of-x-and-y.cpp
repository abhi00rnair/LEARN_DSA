class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int n=grid.size(), m=grid[0].size();
        vector<vector<int>>dp(n, vector<int>(m,0));
        vector<vector<int>>sumdp(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int val=0;
                if(grid[i][j]=='X'){
                    val=1;
                }else if(grid[i][j]=='Y'){
                    val=-1;
                }else{
                    val=0;
                }
                sumdp[i][j]=val;
                if(grid[i][j]=='X'){dp[i][j]=1;}

                if(i>0){
                    sumdp[i][j]+=sumdp[i-1][j];
                    dp[i][j]+=dp[i-1][j];
                }
                if(j>0){
                    sumdp[i][j]+=sumdp[i][j-1];
                    dp[i][j]+=dp[i][j-1];
                }
                if(i>0 && j>0){
                    sumdp[i][j]-=sumdp[i-1][j-1];
                    dp[i][j]-=dp[i-1][j-1];
                }
            }
        }
        int rett=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(sumdp[i][j]==0 && dp[i][j]>0){
                    rett++;
                }
            }
        }
        return rett;
    }
};