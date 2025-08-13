class Solution {
public:
    int minCost(int n, vector<int>& cuts) {
        cuts.push_back(0);
        cuts.push_back(n);
        sort(cuts.begin(), cuts.end());
        int m=cuts.size();
        vector<vector<int>>dp(m+1, vector<int>(m+1, -1));
        return func(cuts, 0,m-1, dp);

    }

    int func(vector<int>&cuts, int i, int j, vector<vector<int>>&dp){
        if(j-i<=1){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int rett=1e9;

        for(int k=i+1;k<j;k++){
            int cost=cuts[j]-cuts[i]+func(cuts,i, k, dp)+func(cuts, k,j,dp);
            rett=min(rett,cost);
        }
        return dp[i][j]=rett;
    }
};