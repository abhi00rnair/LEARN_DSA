class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n1=difficulty.size();
        vector<pair<int,int>>dp(n1);
        for(int i=0;i<n1;i++){
            dp[i]={difficulty[i],profit[i]};
        }
        sort(dp.begin(), dp.end());
        sort(worker.begin(), worker.end());
        int rett=0,maxprofit=0,dpindex=0;
        for(int it:worker){
            while(dpindex<n1 && it>=dp[dpindex].first){
                maxprofit=max(maxprofit,dp[dpindex].second);
                dpindex++;
            }
            rett+=maxprofit;
        }
        return rett;
    }
};