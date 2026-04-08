class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n=queries.size();
        int mod=1e9+7;
        for(int i=0;i<n;i++){
            int idx=queries[i][0];
            int ri=queries[i][1];
            int ki=queries[i][2];
            int vi=queries[i][3];
            while(idx<=ri && idx<nums.size()){
                nums[idx]=(1LL *nums[idx]*vi)%mod;
                idx+=ki;
            }
        }
        int rett=0;
        for(int it=0;it<nums.size();it++){
            rett^=nums[it];
        }
        return rett;
    }
};