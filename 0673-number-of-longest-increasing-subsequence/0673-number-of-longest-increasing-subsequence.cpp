class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int maxlen=1;
        vector<int>dp(nums.size(), 1);
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    dp[i]= max(dp[i], 1+dp[j]);
                }
            }
            maxlen=max(maxlen, dp[i]);
        }
        int rett=0;
        vector<int>count(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i] && 1+dp[j]==dp[i]){
                    count[i]+=count[j];
                }
            }
            if(count[i]==0){count[i]=1;}
        }
        for(int i=0;i<nums.size();i++){
            if(dp[i]==maxlen){
                rett+=count[i];
            }
        }
        return rett;
    }
};