class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mp;
        int n=nums.size();
        int ret=0;
        int presum=0;
        mp[0]=1;
        for(int i=0;i<n;i++){
            presum+=nums[i];
            int rem=presum-k;
            ret+=mp[rem];
            mp[presum]+=1;
        }
        return ret;
    }
};